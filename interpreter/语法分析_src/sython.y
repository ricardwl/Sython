%{


// #define YYDEBUG 1
#include <stdint.h>
#include <stdio.h>
extern FILE * yyin;
%}



%token  INT_LITERAL TRUE_T FALSE_T DOUBLE_LITERAL STRING_LITERAL NULL_T
%token  IDENTIFIER
%token  FUNCTION IF ELSE ELSIF WHILE FOR FOREACH RETURN_T BREAK CONTINUE 
        LP RP LC RC LB RB SEMICOLON COLON COMMA  LOGICAL_AND LOGICAL_OR
        EQ NE GT GE LT LE ADD SUB MUL DIV MOD   EXCLAMATION DOT NEW
        ADD_ASSIGN_T SUB_ASSIGN_T MUL_ASSIGN_T DIV_ASSIGN_T MOD_ASSIGN_T 
        INCREMENT DECREMENT CLOSURE GLOBAL_T TRY CATCH FINALLY THROW EXTEND STATIC IMPORT
        FINAL
%token CLASS
%token ASSIGN_T
%token '~' 	

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE
%%

program 
	:translation_unit {
	printf("\n>>>>>>>>>no error!<<<<<<<<<<<<<\n");	;	
	}
	|
	
	;
translation_unit
        : definition_or_statement{
		
	}
        | translation_unit definition_or_statement{
	    	
    	}
        ;
definition_or_statement
        : function_definition
        | statement{
	
                
	}
	|def_class
	
        {
           
        }
        ;
import_statement
	:IMPORT IDENTIFIER SEMICOLON;
def_class
	: CLASS IDENTIFIER class_extend LC field_def methods_def RC 
	;
class_extend
	:EXTEND IDENTIFIER
	|
	; 
field_def
	://STATIC instant_filed  
	instant_filed  
	
	;

instant_filed
	:expression SEMICOLON
	;



methods_def
	:method_or_gs
	;

method_or_gs
	:method_def method_or_gs
	|getter_def method_or_gs
	|setter_def method_or_gs
	|
	;

method_def
	:STATIC IDENTIFIER LP parameter_list RP block
	|IDENTIFIER LP parameter_list RP block
	|IDENTIFIER LP RP block
	|STATIC IDENTIFIER LP RP block
	;

getter_def
	:STATIC IDENTIFIER  block
	|IDENTIFIER block
	;
setter_def
	:STATIC IDENTIFIER ASSIGN_T LP block RP block
	|IDENTIFIER ASSIGN_T LP block RP block
	;
function_definition
        : FUNCTION IDENTIFIER LP parameter_list RP block
        {
         
        }
        | FUNCTION IDENTIFIER LP RP block
        {
           
        }
        ;
parameter_list
        : IDENTIFIER
        {
           
        }
        | parameter_list COMMA IDENTIFIER
        {
           
        }
	
        ;
argument_list
        : assignment_expression
        {
           
        }
        | argument_list COMMA assignment_expression
        {
           
        }
        ;
statement_list
        : statement
        {
           
        }
        | statement_list statement
        {
         
        }
        ;
expression
        : assignment_expression
       {//printf("assignment_expression\n");
	}
        | expression COMMA assignment_expression
        {
           
        }
        ;
assignment_expression
        : logical_or_expression
        {//printf("assignment_expression-->logicalor_expression\n");
	}
        | postfix_expression assignment_operator assignment_expression
        {
		//if()
        	
		//printf("assignment_expression-->postfix_expression assignment_operator assignment_expressio\n");
        }
        | FINAL postfix_expression assignment_operator assignment_expression
        {
            
        }
        ;
assignment_operator
        : ASSIGN_T
        {
          
        }
        | ADD_ASSIGN_T
        {
          
        }
        | SUB_ASSIGN_T
        {
           
        }
        | MUL_ASSIGN_T
        {
           
        }
        | DIV_ASSIGN_T
        {
           
        }
        | MOD_ASSIGN_T
        {
           
        }
        ;
logical_or_expression
        : logical_and_expression
      
        | logical_or_expression LOGICAL_OR logical_and_expression
        {
           
        }
        ;
logical_and_expression
        : equality_expression
      
        | logical_and_expression LOGICAL_AND equality_expression
        {
          ;
        }
        ;
equality_expression
        : relational_expression
      
        | equality_expression EQ relational_expression
        {
                
        }
        | equality_expression NE relational_expression
        {
             
        }
        ;
relational_expression
        : additive_expression
        | relational_expression GT additive_expression
        {
           
        }
        | relational_expression GE additive_expression
        {
           
        }
        | relational_expression LT additive_expression
        {
             
        }
        | relational_expression LE additive_expression
        {
          
        }
        ;
additive_expression
        : multiplicative_expression
        | additive_expression ADD multiplicative_expression
        {
        	 
        }
        | additive_expression SUB multiplicative_expression
        {
            
        }
        ;
multiplicative_expression
        : unary_expression{}
        | multiplicative_expression MUL unary_expression
        {
            
        }
        | multiplicative_expression DIV unary_expression
        {
          
        }
        | multiplicative_expression MOD unary_expression
        {
            
        }
        ;
unary_expression
        : postfix_expression
        | SUB unary_expression
        {
            
        }
        | EXCLAMATION unary_expression
        {
          
        }
        ;
postfix_expression
        : primary_expression{
		//printf("primary_expression\n");
	}
        | postfix_expression LB expression RB
        {
           
        }
        | postfix_expression DOT IDENTIFIER  LP argument_list RP 
        {
            
        }
        |postfix_expression DOT IDENTIFIER  LP  RP 
       	|postfix_expression DOT IDENTIFIER
        
	//| postfix_expression DOT NEW LP argument_list RP
        {
            
        }
        //| postfix_expression DOT NEW LP RP
        {
            
        }
        | postfix_expression INCREMENT
        {
            
        }
        | postfix_expression DECREMENT
        {
            
        }
        ;
primary_expression
	
        : IDENTIFIER LP argument_list RP
        {
           
        }
	| LP expression RP
	{
				
	}
	| IDENTIFIER LP RP
        {
           
        }
        | IDENTIFIER
        {	/*if(strcmp(yylval.identifier->str,"print")!=0){
			
			//printf("\nIDENTIFIER %s\n", yylval.identifier->str );		
		}else{
			//printf("\nPRINT %s\n", yylval.identifier->str );
		}*/
		
            
        }	
        | INT_LITERAL{}
        | DOUBLE_LITERAL{}
        | STRING_LITERAL{}
        | TRUE_T
        {
            {}
        }
        | FALSE_T
        {
            {}
        }
        | NULL_T
        {
            {}
        }
        | array_literal
        | closure_definition
        ;
array_literal
        : LC expression_list RC
        {
           
        }
       // | LC expression_list COMMA RC
        {
           
        }
        ;
closure_definition
        : CLOSURE IDENTIFIER LP parameter_list RP block
        {
            
        }
        | CLOSURE IDENTIFIER LP RP block
        {
           
        }
        | CLOSURE LP parameter_list RP block
        {
            
        }
        | CLOSURE LP RP block
        {
           
        }
        ;
expression_list
        : /* empty */
        {
           
        }
        | assignment_expression
        {
           
        }
        | expression_list COMMA assignment_expression
        {
            
        }
        ;
statement
        : expression SEMICOLON
        {
        	
        }
        | global_statement
        | if_statement
        | while_statement
        | for_statement
        | foreach_statement
        | return_statement{
    		
    	}
        | break_statement{
		
	}
        | continue_statement{
   		
    	}
        | try_statement
        | throw_statement
	| import_statement
        ;
global_statement
        : GLOBAL_T identifier_list SEMICOLON
        {
           
        }
        ;
identifier_list
        : IDENTIFIER
        {
           
        }
        | identifier_list COMMA IDENTIFIER
        {
           
        }
        ;
if_statement
        : IF LP expression RP block
        {
          
        }
        | IF LP expression RP block ELSE block
        {
           
        }
        | IF LP expression RP block elsif_list
        {
           	
        }
        | IF LP expression RP block elsif_list ELSE block
        {
            
        }
        ;
elsif_list
        : elsif
        | elsif_list elsif
        {
            
        }
        ;
elsif
        : ELSIF LP expression RP block
        {
            
        }
        ;

while_statement
        :  WHILE LP expression RP block
        {
           
        }
        ;
for_statement
        :  FOR LP expression_opt SEMICOLON expression_opt SEMICOLON
          expression_opt RP block
        {
           
        }
        ;
foreach_statement
        :  FOREACH LP IDENTIFIER COLON expression RP block
        {
            
        }
        ;
expression_opt
        : /* empty */
        {
           
        }
        | expression
        ;
return_statement
        : RETURN_T expression_opt SEMICOLON
        {
           
        }
        ;

break_statement 
        : BREAK  SEMICOLON
        {
            
        }
        ;
continue_statement
        : CONTINUE  SEMICOLON
        {
            
        }
        ;
try_statement
        : TRY block CATCH LP IDENTIFIER RP block FINALLY block
        {
           
        }
        | TRY block FINALLY block
        {
           
        }
        | TRY block CATCH LP IDENTIFIER RP block
        {
            
        };
throw_statement
        : THROW expression SEMICOLON
        {
            
        }
	;
block
        : LC statement_list RC
        {
          
        }
        | LC RC
        {
          
        }
        ;
%%
int main(int argc, char **argv) {
	/*printf("please input the code file path:");
	char path[500] ={0};
	//scanf("%s",path);
	*/
	
	FILE *file = fopen(argv[1], "r");
        if (file == NULL) {
            printf("file %s valueNot found", argv[1]);
            exit(1);
        }
///////////////

   	yyin = fopen(argv[1],"r");
    	
      

////////////////////        
	yyparse();
		
	
    return 0;
}

