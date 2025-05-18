%{
#include <stdio.h>
#include <stdlib.h>

extern int yylex(void);
void yyerror(const char *s);
extern FILE *yyin;
extern int binary_mode;

/* Функция для вывода числа в двоичном формате */
void print_binary(int n) {
    char buffer[33];
    buffer[32] = '\0';
    int index = 31;
    if (n == 0) {
        printf("0b0");
        return;
    }
    while (n > 0 && index >= 0) {
        buffer[index--] = (n % 2) ? '1' : '0';
        n /= 2;
    }
    printf("0b%s", &buffer[index+1]);
}
%}

%union {
    int     Int;
    double  Double;
    char*   Str;
    int     Bool;
    char*   Id;
}


%token <Int>    INT_LITERAL
%token <Double> DOUBLE_LITERAL
%token <Str>    STRING_LITERAL
%token <Bool>   BOOL_LITERAL
%token          NULL_LITERAL
%token <Id>     ID


%token ABSTRACT
%token ANY
%token AS
%token BOOLEAN
%token BREAK
%token CASE
%token CATCH
%token CLASS
%token CONST
%token CONSTRUCTOR
%token CONTINUE
%token DEBUGGER
%token DEFAULT
%token DELETE
%token DO
%token DYNAMIC
%token ELSE
%token ENUM
%token EXPORT
%token EXTENDS
%token EXTENSION
%token EXTERNAL
%token FACTORY
%token _FALSE   
%token FINALLY
%token FOR
%token FROM
%token FUNCTION
%token GET
%token IF
%token IMPLEMENTS
%token IMPORT
%token IN
%token INSTANCEOF
%token IS
%token LATE
%token LET
%token MODULE
%token MIXIN
%token NEVER
%token NEW
%token _NULL   
%token NUMBER
%token OBJECT
%token OF
%token PACKAGE
%token PRIVATE
%token PROTECTED
%token PUBLIC
%token FINAL
%token READONLY
%token REQUIRE
%token RETURN
%token SET
%token STATIC
%token STRING
%token SUPER
%token SWITCH
%token SYMBOL
%token THIS
%token THROW
%token _TRUE  
%token TRY
%token TYPEOF
%token TYPEDEF
%token UNKNOWN
%token VAR
%token WHILE
%token INT
%token DOUBLE
%token NUM
%token VOID
%token DOG
%token COLON

%token OPT_PARAM    
%token MOD         
%token MOD_ASSIGNMENT
%token PLUS          
%token PLUS_ASSIGNMENT 
%token INCREMENT    
%token MINUS         
%token MINUS_ASSIGNMENT 
%token DECREMENT    
%token MUL          
%token MUL_ASSIGNMENT
%token ASSIGNMENT   
%token EQUAL         
%token BIT_NOT       
%token NOT_EQUAL     
%token MORE          
%token MORE_OR_EQUAL 
%token LESS          
%token LESS_OR_EQUAL 
%token DIV           
%token DIV_ASSIGNMENT 
%token BIT_XOR      
%token BIT_AND      
%token AND                  
%token BIT_OR      
%token OR                   
%token LEFT_SQUARE_BRACKET  
%token RIGHT_SQUARE_BRACKET   
%token LEFT_ROUND_BRACKET  
%token RIGHT_ROUND_BRACKET    
%token LEFT_FIGURE_BRACKET    
%token RIGHT_FIGURE_BRACKET   
%token NULL_COALESCE
%token SAFE_NAVIGATE
%token CASCADE      
%token INT_DIV      
%token CAST         
%token COLON        
%token SEMICOLON    
%token COMMA        
%token DOT          
%token QUESTION     
%token ENTER        


%right ASSIGNMENT
%right PLUS_ASSIGNMENT MINUS_ASSIGNMENT MUL_ASSIGNMENT DIV_ASSIGNMENT MOD_ASSIGNMENT
%left   EQUAL NOT_EQUAL
%left   MORE LESS MORE_OR_EQUAL LESS_OR_EQUAL
%left   AND OR
%left   PLUS MINUS
%left   MUL DIV MOD
%right  BIT_NOT
%left   INCREMENT DECREMENT DOT SAFE_NAVIGATE
%left LEFT_SQUARE_BRACKET RIGHT_SQUARE_BRACKET
%nonassoc LEFT_ROUND_BRACKET RIGHT_ROUND_BRACKET 
%nonassoc OPT_PARAM COLON
%start TopLevelList

%%


/* Список выражений (возможно пустой) */
ExpressionList_e:
      /* empty */
    | ExpressionList
    ;

ExpressionList:
      SimpleExpression
    | ExpressionList COMMA SimpleExpression
    ;

/* Простые выражения */
SimpleExpression:
      INT_LITERAL
    | DOUBLE_LITERAL
    | STRING_LITERAL
    | BOOL_LITERAL
    | NULL_LITERAL
    | ID
    | ID LEFT_ROUND_BRACKET ExpressionList_e RIGHT_ROUND_BRACKET
    | LEFT_ROUND_BRACKET SimpleExpression RIGHT_ROUND_BRACKET
    | SimpleExpression DOT ID
    | SimpleExpression SAFE_NAVIGATE ID
    | SimpleExpression DOT ID LEFT_ROUND_BRACKET ExpressionList_e RIGHT_ROUND_BRACKET
    | SimpleExpression SAFE_NAVIGATE ID LEFT_ROUND_BRACKET ExpressionList_e RIGHT_ROUND_BRACKET
    | SimpleExpression LEFT_SQUARE_BRACKET SimpleExpression RIGHT_SQUARE_BRACKET
    | SimpleExpression PLUS SimpleExpression
    | SimpleExpression MINUS SimpleExpression
    | SimpleExpression MUL SimpleExpression
    | SimpleExpression DIV SimpleExpression
    | SimpleExpression MOD SimpleExpression
    | SimpleExpression MORE SimpleExpression
    | SimpleExpression LESS SimpleExpression
    | SimpleExpression MORE_OR_EQUAL SimpleExpression
    | SimpleExpression LESS_OR_EQUAL SimpleExpression
    | SimpleExpression EQUAL SimpleExpression
    | SimpleExpression NOT_EQUAL SimpleExpression
    | SimpleExpression AND SimpleExpression
    | SimpleExpression OR SimpleExpression
    | SimpleExpression PLUS_ASSIGNMENT SimpleExpression
    | SimpleExpression MINUS_ASSIGNMENT SimpleExpression
    | SimpleExpression MUL_ASSIGNMENT SimpleExpression
    | SimpleExpression DIV_ASSIGNMENT SimpleExpression
    | SimpleExpression MOD_ASSIGNMENT SimpleExpression
    | SimpleExpression OPT_PARAM SimpleExpression COLON SimpleExpression
    | MINUS SimpleExpression %prec MINUS
    | PLUS SimpleExpression %prec PLUS
    | BIT_NOT SimpleExpression
    | INCREMENT SimpleExpression
    | DECREMENT SimpleExpression
    | SimpleExpression INCREMENT
    | SimpleExpression DECREMENT
    ;

/* Операторы */
Statement:
      StatementTerminator
    | SimpleExpression StatementTerminator
    | VarStmt StatementTerminator
    | IfStatement
    | WhileStatement
    | DoWhileStatement
    | ForStatement
    | SwitchStatement
    | BreakStatement
    | ContinueStatement
    | ReturnStatement
    | BlockStatement
    ;

StatementTerminator:
      SEMICOLON
    ;

IfStatement:
      IF LEFT_ROUND_BRACKET SimpleExpression RIGHT_ROUND_BRACKET Statement
    | IF LEFT_ROUND_BRACKET SimpleExpression RIGHT_ROUND_BRACKET Statement ELSE Statement
    ;

WhileStatement:
      WHILE LEFT_ROUND_BRACKET SimpleExpression RIGHT_ROUND_BRACKET Statement
    ;

DoWhileStatement:
      DO Statement WHILE LEFT_ROUND_BRACKET SimpleExpression RIGHT_ROUND_BRACKET StatementTerminator
    ;

ForStatement:
      FOR LEFT_ROUND_BRACKET ForInitializer SEMICOLON ForCondition SEMICOLON ForUpdate RIGHT_ROUND_BRACKET Statement
    ;

ForInitializer:
      /* пусто */
    | ForLoopParts
    | SimpleExpression
    ;

ForCondition:
      /* пусто */
    | SimpleExpression
    ;

ForUpdate:
      /* пусто */
    | SimpleExpression
    ;


ForLoopParts:
      /* empty */
    | SimpleExpression StatementTerminator SimpleExpression
    | VAR ID ASSIGNMENT SimpleExpression StatementTerminator SimpleExpression
    ;

SwitchStatement:
      SWITCH LEFT_ROUND_BRACKET SimpleExpression RIGHT_ROUND_BRACKET LEFT_FIGURE_BRACKET SwitchCaseList DefaultCaseOpt RIGHT_FIGURE_BRACKET
    ;

SwitchCaseList:
      /* empty */
    | SwitchCaseList SwitchCase
    ;

SwitchCase:
      CASE SimpleExpression COLON StatementList
    ;

DefaultCaseOpt:
      /* empty */
    | DEFAULT COLON StatementList
    ;

StatementList:
      Statement
    | StatementList Statement
    ;

VarStmt:
      VAR ID
    | VAR ID ASSIGNMENT SimpleExpression
    ;

BreakStatement:
      BREAK StatementTerminator
    ;

ContinueStatement:
      CONTINUE StatementTerminator
    ;

ReturnStatement:
      RETURN SimpleExpressionOpt StatementTerminator
    ;

SimpleExpressionOpt:
      /* empty */
    | SimpleExpression
    ;

/* Объявления классов и функций */
ModifierList:
    ModifierList ModifierConstFinal
    | ModifierList ModifierStatic ModifierConstFinal
    ;


ModifierConstFinal:
      CONST
    | FINAL
    ; 

ModifierStatic: STATIC;

TopLevelList:
      TopLevelDeclaration
    | TopLevelList TopLevelDeclaration
    ;

TopLevelDeclaration:
      ClassDeclaration
    | FunctionDeclaration
    ;

ClassDeclaration:
      ModifierList CLASS ID LEFT_FIGURE_BRACKET ClassMemberList RIGHT_FIGURE_BRACKET
    ;

ClassMemberList:
      /* empty */
    | ClassMemberList ClassMember
    ;

ClassMember:
      ModifierList FunctionDeclaration
    | ModifierList VarStmt StatementTerminator
    ;

FunctionDeclaration:
      ModifierList VOID ID LEFT_ROUND_BRACKET ParameterListOpt RIGHT_ROUND_BRACKET BlockStatement
    | ModifierList Type ID LEFT_ROUND_BRACKET ParameterListOpt RIGHT_ROUND_BRACKET BlockStatement
    ;

ParameterListOpt:
      /* empty */
    | ParameterList
    ;

ParameterList:
      Parameter
    | ParameterList ASSIGNMENT Parameter
    ;

Parameter:
      Type ID
    | VAR ID
    ;

Type:
      ID
    ;

BlockStatement:
      LEFT_FIGURE_BRACKET StatementList RIGHT_FIGURE_BRACKET
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main(int argc, char **argv) {
    if (argc > 1) yyin = fopen(argv[1], "r");
    else yyin = stdin;
    yyparse();
    return 0;
}