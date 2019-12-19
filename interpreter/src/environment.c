
#include "environment.h"
#include <stdlib.h>
#include "debug.h"
#include "interpreter.h"
#include "oop.h"

// trie
#define TRIE_NODE_SIZE 53
// a-zA-Z_
typedef struct TrieNodeTag {
    struct TrieNodeTag *children[TRIE_NODE_SIZE];
    Variable *var;
} TrieNode;

static int char2int(char c) {
    if (c == '_')
        return 0;
    else if (c <= 'Z' && c >= 'A')
        return 1 + c - 'A';
    else
        return 27 + c - 'a';
}

static TrieNode *createTrie() {
    TrieNode *t = (TrieNode *) malloc(sizeof(TrieNode));
    t->var = NULL;
    for (int i = 0; i < TRIE_NODE_SIZE; i++)
        t->children[i] = NULL;
    return t;
}

static void freeTrie(TrieNode *root) {
    for (int i = 0; i < TRIE_NODE_SIZE; i++) {
        if (root->children[i] != NULL)
            freeTrie(root->children[i]);
    }
    if (root->var != NULL)
        del(root->var);
    free(root);
}

static TrieNode *searchTrieNode(VariableTrie *trie, String *name) {
    TrieNode *p = trie, *q;
    int i = 0;
    char c = name->str[0];
    while (1) {
        int index = char2int(c);
        q = p->children[index];
        if (q == NULL) {
            name->release(name);
            return NULL;
        }
        c = name->str[++i];
        if (c == '\0') {
            name->release(name);
            return q;
        }
        p = q;
    }
}

static TrieNode *createTrieNode(VariableTrie *trie, String *name) {
    TrieNode *p = trie, *q;
    int i = 0;
    char c = name->str[0];
    while (1) {
        int index = char2int(c);
        q = p->children[index];
        if (q == NULL) {
            q = p->children[index] = createTrie();
        }
        c = name->str[++i];
        if (c == '\0') {
            name->release(name);
            return q;
        }
        p = q;
    }
}

static void addVariable(Environment *self, Variable *var) {
    log(("add %s", var->id->str));
    TrieNode *t = NULL;
    Environment *pEnv = self;
    on_self(var->id, refer);
    t = searchTrieNode(pEnv->trie, var->id);
    if (t == NULL) {
        on_self(var->id, refer);
        t = createTrieNode(self->trie, var->id);
    }
    if (t->var)
        del(t->var);
    t->var = var;
}

static Variable *findVariable(Environment *self, String *name) {
    log(("find %s", name->str));
    TrieNode *t = NULL;
    on_self(name, refer);
    t = searchTrieNode(self->trie, name);
    if (t == NULL) {
        on_self(name, refer);
        // When variable was not found in local environment, search it in global environment.
        t = searchTrieNode(getCurrentInterpreter()->globalEnv->trie, name);
    }
    if (t == NULL || t->var == NULL) {
        panic(("\"%s\" not found", name->str));
    } else {
        name->release(name);
        return t->var;
    }
}

static void freeEnvironment(Environment *self) {
    freeTrie(self->trie);
    free(self);
}

const static Environment EnvironmentBase = {addVariable, findVariable,
                                            freeEnvironment};

void *initEnvironment() {
    Environment *p = malloc(sizeof(Environment));
    *p = EnvironmentBase;
    p->trie = createTrie();
    return p;
}
