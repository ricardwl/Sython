

#include <stdlib.h>
#include <string.h>
#include "sython.h"
#include "value.h"

#include <stdio.h>
static Interpreter *interpreter;

void callback(char *str) {
    interpreter->compileWithStr(interpreter, str);
    interpreter->interpret(interpreter);
    interpreter->clearStatement(interpreter);
}



int main(int argc, char **argv) {
	printf("please input the code file path:");
	char path[500] ={0};
	scanf("%s",path);
	
	
	FILE *file = fopen(path, "r");
        if (file == NULL) {
            printf("file %s valueNot found", argv[1]);
            exit(1);
        }
///////////////
/*
    	if (argc >= 2) {
	        FILE *file = fopen(argv[1], "r");
		if (file == NULL) {
		    printf("file %s valueNot found", argv[1]);
		    exit(1);
		}*/

////////////////////        
		Interpreter *interpreter = initInterpreter();
		printf("----------------compiling----------------\n");
		interpreter->compile(interpreter, file);
		printf("----------------result-------------------\n");
		interpreter->interpret(interpreter);
		
		interpreter->free(interpreter);
	 
		printf("----------------end----------------------\n");
    system("pause");
    return 0;
}
