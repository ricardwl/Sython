%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#include "y.tab.h"

void count(void);
void comment();
int check_type();
int column = 0;

char *string_buf;
int cnt = 0;
int size = 256;
void start_string_buf() {
    string_buf = calloc(sizeof(char), size);
    cnt = 0;
}

void add_char_to_string_buf(char c) {
    string_buf[cnt++] = c;
    if (cnt+1>=size) {
        size*=2;
        string_buf = realloc(string_buf, sizeof(char)*size);
    }
    string_buf[cnt] = '\0';
}

void close_string_buf() {
    free(string_buf);
    string_buf = NULL;
    cnt = 0;
    size=1024;
}

%}
%option yylineno
%start COMMENT STRING_LITERAL_STATE
%%
<INITIAL>"function"     {count(); return FUNCTION;}
<INITIAL>"if"           {count(); return IF;}
<INITIAL>"else"         {count(); return ELSE;}
<INITIAL>"elsif"        {count(); return ELSIF;}
<INITIAL>"while"        {count(); return WHILE;}
<INITIAL>"for"          {count(); return FOR;}
<INITIAL>"return"       {count(); return RETURN_T;}
<INITIAL>"break"        {count(); return BREAK;}
<INITIAL>"continue"     {count(); return CONTINUE;}
<INITIAL>"null"         {count();return NULL_T;}
<INITIAL>"true"         {count(); return TRUE_T;}
<INITIAL>"foreach"          {count(); return FOREACH;}
<INITIAL>"false"        {count(); return FALSE_T;}
<INITIAL>"closure"      return CLOSURE;
<INITIAL>"try"           {count();return TRY;}
<INITIAL>"catch"         {count();return CATCH;}
<INITIAL>"global"       {count(); return GLOBAL_T;}
<INITIAL>"finally"       {count();return FINALLY;}
<INITIAL>"throw"         {count();return THROW;}
<INITIAL>"final"         {count();return FINAL;}
<INITIAL>"class"	{count();return CLASS;}
<INITIAL>"extend"	 {count();return EXTEND;}
<INITIAL>"static"	{count();return STATIC;}
<INITIAL>"import"	{count();return IMPORT;}
<INITIAL>"("            {count(); return LP;}
<INITIAL>")"            {count(); return RP;}
<INITIAL>"["            {count();return LB;}
<INITIAL>"]"            {count();return RB;}
<INITIAL>"{"            {count(); return LC;}
<INITIAL>"}"            {count(); return RC;}
<INITIAL>":"            {count(); return COLON;}
<INITIAL>";"            {count(); return SEMICOLON;}
<INITIAL>","            {count(); return COMMA;}
<INITIAL>"&&"           {count(); return LOGICAL_AND;}
<INITIAL>"||"           {count(); return LOGICAL_OR;}
<INITIAL>"="            {count(); return ASSIGN_T;}
<INITIAL>"=="           {count(); return EQ;}
<INITIAL>"!="           {count(); return NE;}
<INITIAL>">"            {count(); return GT;}
<INITIAL>">="           {count(); return GE;}
<INITIAL>"<"            {count(); return LT;}
<INITIAL>"<="           {count(); return LE;}
<INITIAL>"+="           {count();return ADD_ASSIGN_T;}
<INITIAL>"-="          {count(); return SUB_ASSIGN_T;}
<INITIAL>"*="          {count(); return MUL_ASSIGN_T;}
<INITIAL>"/="           {count();return DIV_ASSIGN_T;}
<INITIAL>"%="          {count(); return MOD_ASSIGN_T;}
<INITIAL>"!"		{ count(); 	return(EXCLAMATION); }
<INITIAL>"~"		{ count();	return('~'); }
<INITIAL>"+"            {count(); return (ADD);}
<INITIAL>"++"		{ count(); 			return(INCREMENT); }
<INITIAL>"--"		{ count(); 		return(DECREMENT); }
<INITIAL>"-"            {count(); return (SUB);}
<INITIAL>"*"            {count(); return MUL;}
<INITIAL>"/"            {count(); return DIV;}
<INITIAL>"%"            {count(); return MOD;}
<INITIAL>"."            {count();return DOT;}
<INITIAL>[A-Za-z_][A-Za-z_0-9]* {
   count(); 
   
    return IDENTIFIER;
}
<INITIAL>([1-9][0-9]*)|"0" {
   
   
    count(); 
    return INT_LITERAL;
}
<INITIAL>[0-9]+\.[0-9]+ {
    count(); 
   
    return DOUBLE_LITERAL;
}
<INITIAL>\" {
    count();
    start_string_buf();
    BEGIN STRING_LITERAL_STATE;
}

<INITIAL>[ \t] {count();}
<INITIAL>[ \t\r\n] {count();}

<INITIAL>#     BEGIN COMMENT;
<INITIAL>.      {
    char buf[80];

    if (isprint(yytext[0])) {
        buf[0] = yytext[0];
        buf[1] = '\0';
    } else {
        sprintf(buf, "0x%02x", (unsigned char)yytext[0]);
    }

}
<COMMENT>\n     {
    
    BEGIN INITIAL;
}
<COMMENT>.      ;
<STRING_LITERAL_STATE>\"      { 
	count();  
	
    	close_string_buf();

	BEGIN INITIAL; 
	return STRING_LITERAL;}
<STRING_LITERAL_STATE>\n        {  count();}

<STRING_LITERAL_STATE>.         {  add_char_to_string_buf(yytext[0]);count(); }


%%
int yywrap() {
	return 1;
}

int yyerror(char const *str) {
    extern char *yytext;
    fprintf(stderr, "\nERROR:%s, near '%s'\n", str, yytext);
    return 0;
}



void count(void)
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 4 - (column % 4);
		else
			column++;
	ECHO;
}


int check_type() {
/*
* pseudo code --- this is what it should check
*
*	if (yytext == type_name)
*		return TYPE_NAME;
*
*	return IDENTIFIER;
*/

/*
*	it actually will only return IDENTIFIER
*/

	return IDENTIFIER;
}
