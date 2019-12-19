%{


// #define YYDEBUG 1
#include <stdint.h>
#include <stdio.h>
#include "sython.h"

%}
%union {
    String* identifier;
    Value value;
    void *statement;
    void *expression;
    StatementList *statement_list;
    ArgumentList *argument_list;
    ParameterList *parameter_list;
    OperatorType  optype;
}



%token <value>     INT_LITERAL TRUE_T FALSE_T DOUBLE_LITERAL STRING_LITERAL NULL_T
%token <identifier>     IDENTIFIER
%token  FUNCTION IF ELSE ELSIF WHILE FOR FOREACH RETURN_T BREAK CONTINUE 
        LP RP LC RC LB RB SEMICOLON COLON COMMA  LOGICAL_AND LOGICAL_OR
        EQ NE GT GE LT LE ADD SUB MUL DIV MOD   EXCLAMATION DOT 
        ADD_ASSIGN_T SUB_ASSIGN_T MUL_ASSIGN_T DIV_ASSIGN_T MOD_ASSIGN_T 
        INCREMENT DECREMENT CLOSURE GLOBAL_T TRY CATCH FINALLY THROW EXTEND STATIC
        FINAL
%token CLASS
%token <optype> ASSIGN_T
%token '~' 	
%type   <parameter_list> parameter_list
%type   <argument_list> argument_list
%type   <expression> expression expression_opt
        assignment_expression logical_and_expression logical_or_expression
        equality_expression relational_expression
        additive_expression multiplicative_expression
        unary_expression postfix_expression primary_expression array_literal
        closure_definition
%type  <expression> expression_list
%type   <statement>statement  while_statement for_statement foreach_statement
        return_statement break_statement continue_statement try_statement
        throw_statement
%type   <statement_list> statement_list global_statement  translation_unit definition_or_statement  block
%type   <statement> elsif elsif_list  if_statement function_definition

%type   <identifier>identifier_list
%type <optype> assignment_operator
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
		StatementList* list = getCurrentInterpreter()->list;
    	$$ = list->add(list, $1);
	}
        | translation_unit definition_or_statement{
	    	$$ = $1->add($1, $2);
    	}
        ;
definition_or_statement
        : function_definition
        | statement{
	//StatementList* list = getCurrentInterpreter()->list;
    		//$$ = list->add(list, $1);	
                
	}
	|def_class
	//| def_calss
        {
           
        }
        ;

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
          $$ =initFunctionDefineStatement($2, $4, $6);
        }
        | FUNCTION IDENTIFIER LP RP block
        {
           $$ = initFunctionDefineStatement($2, NULL, $5);
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
            $$ = initArgumentList($1);
		//printf("argument_list-->assignment_expression\n");
        }
        | argument_list COMMA assignment_expression
        {
            $$ = $1->add($1, $3);
        }
        ;
statement_list
        : statement
        {
           $$ =  initStatementList();
    	   $$->add($$, $1);
        }
        | statement_list statement
        {
          $$ = $1->add($1, $2);
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
        	$$ = initAssignExpression2($1, $3);
		//printf("assignment_expression-->postfix_expression assignment_operator assignment_expressio\n");
        }
        | FINAL postfix_expression assignment_operator assignment_expression
        {
            
        }
        ;
assignment_operator
        : ASSIGN_T
        {
           $$=ASSIGN_T_OPERATOR;
        }
        | ADD_ASSIGN_T
        {
           $$=ADD_OPERATOR;
        }
        | SUB_ASSIGN_T
        {
           $$=SUB_OPERATOR;
        }
        | MUL_ASSIGN_T
        {
            $$=MUL_OPERATOR;
        }
        | DIV_ASSIGN_T
        {
            $$=DIV_OPERATOR;
        }
        | MOD_ASSIGN_T
        {
            $$=MOD_OPERATOR;
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
                 $$ = initBinaryExpression(EQ_OPERATOR, $1, $3);
        }
        | equality_expression NE relational_expression
        {
             $$ = initBinaryExpression(NQ_OPERATOR, $1, $3);
        }
        ;
relational_expression
        : additive_expression
        | relational_expression GT additive_expression
        {
            $$ = initBinaryExpression(GT_OPERATOR, $1, $3);
        }
        | relational_expression GE additive_expression
        {
            $$ = initBinaryExpression(GE_OPERATOR, $1, $3);
        }
        | relational_expression LT additive_expression
        {
             $$ = initBinaryExpression(LT_OPERATOR, $1, $3);
        }
        | relational_expression LE additive_expression
        {
           $$ = initBinaryExpression(LE_OPERATOR, $1, $3);
        }
        ;
additive_expression
        : multiplicative_expression
        | additive_expression ADD multiplicative_expression
        {
        	$$ = initBinaryExpression(ADD_OPERATOR, $1, $3);  
        }
        | additive_expression SUB multiplicative_expression
        {
            $$ = initBinaryExpression(SUB_OPERATOR, $1, $3);
        }
        ;
multiplicative_expression
        : unary_expression{}
        | multiplicative_expression MUL unary_expression
        {
            $$ = initBinaryExpression(MUL_OPERATOR, $1, $3);
        }
        | multiplicative_expression DIV unary_expression
        {
           $$ = initBinaryExpression(DIV_OPERATOR, $1, $3);
        }
        | multiplicative_expression MOD unary_expression
        {
            $$ = initBinaryExpression(MOD_OPERATOR, $1, $3);
        }
        ;
unary_expression
        : postfix_expression
        | SUB unary_expression
        {
            $$ = initUnaryExpression(SUB_OPERATOR, $2);
        }
        | EXCLAMATION unary_expression
        {
           $$ = initUnaryExpression(NOT_OPERATOR, $2);
        }
        ;
postfix_expression
        : primary_expression{
		//printf("primary_expression\n");
	}
        | postfix_expression LB expression RB
        {
           
        }
        | postfix_expression DOT IDENTIFIER
        {
            
        }
        | postfix_expression DOT IDENTIFIER  LP argument_list RP 
        {
            
        }
        |postfix_expression DOT IDENTIFIER  LP  RP 
       
        
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
           $$ = initFunctionCallExpression($1, $3);
        }
	| LP expression RP
	{
		$$=$2;			
	}
	| IDENTIFIER LP RP
        {
            $$ = initFunctionCallExpression($1, NULL);
        }
        | IDENTIFIER
        {	/*if(strcmp(yylval.identifier->str,"print")!=0){
			//$$ = initVariableExpression($1);
			//printf("\nIDENTIFIER %s\n", yylval.identifier->str );		
		}else{
			//printf("\nPRINT %s\n", yylval.identifier->str );
		}*/
		$$ = initVariableExpression($1);
            
        }	
        | INT_LITERAL{$$ = initValueExpression($1);}
        | DOUBLE_LITERAL{$$ = initValueExpression($1);}
        | STRING_LITERAL{$$ = initValueExpression($1);}
        | TRUE_T
        {
            {$$ = initValueExpression($1);}
        }
        | FALSE_T
        {
            {$$ = initValueExpression($1);}
        }
        | NULL_T
        {
            {$$ = initValueExpression($1);}
        }
        | array_literal
        | closure_definition
        ;
array_literal
        : LC expression_list RC
        {
           
        }
        | LC expression_list COMMA RC
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
        	$$ = initExpressionStatement($1);
        }
        | global_statement
        | if_statement
        | while_statement
        | for_statement
        | foreach_statement
        | return_statement{
    		$$ = initReturnStatement(NULL);
    	}
        | break_statement{
		$$ = initBreakStatement();
	}
        | continue_statement{
   		$$ = initContinueStatement();
    	}
        | try_statement
        | throw_statement
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
           $$ = initIfStatement($3, $5);
        }
        | IF LP expression RP block ELSE block
        {
            IfStatement* ifS =  initIfStatement($3, $5);
    	    ifS->addElse(ifS, $7);
            $$=ifS;
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
           $$ = initForStatement($3, $5, $7, $9);
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
            $$ = initReturnStatement($2);
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
           $$ = $2;
        }
        | LC RC
        {
           $$ = NULL;
        }
        ;
%%


