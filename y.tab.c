/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "prs.y"

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

#line 97 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT_LITERAL = 258,             /* INT_LITERAL  */
    DOUBLE_LITERAL = 259,          /* DOUBLE_LITERAL  */
    STRING_LITERAL = 260,          /* STRING_LITERAL  */
    BOOL_LITERAL = 261,            /* BOOL_LITERAL  */
    NULL_LITERAL = 262,            /* NULL_LITERAL  */
    ID = 263,                      /* ID  */
    ABSTRACT = 264,                /* ABSTRACT  */
    ANY = 265,                     /* ANY  */
    AS = 266,                      /* AS  */
    BOOLEAN = 267,                 /* BOOLEAN  */
    BREAK = 268,                   /* BREAK  */
    CASE = 269,                    /* CASE  */
    CATCH = 270,                   /* CATCH  */
    CLASS = 271,                   /* CLASS  */
    CONST = 272,                   /* CONST  */
    CONSTRUCTOR = 273,             /* CONSTRUCTOR  */
    CONTINUE = 274,                /* CONTINUE  */
    DEBUGGER = 275,                /* DEBUGGER  */
    DEFAULT = 276,                 /* DEFAULT  */
    DELETE = 277,                  /* DELETE  */
    DO = 278,                      /* DO  */
    DYNAMIC = 279,                 /* DYNAMIC  */
    ELSE = 280,                    /* ELSE  */
    ENUM = 281,                    /* ENUM  */
    EXPORT = 282,                  /* EXPORT  */
    EXTENDS = 283,                 /* EXTENDS  */
    EXTENSION = 284,               /* EXTENSION  */
    EXTERNAL = 285,                /* EXTERNAL  */
    FACTORY = 286,                 /* FACTORY  */
    _FALSE = 287,                  /* _FALSE  */
    FINALLY = 288,                 /* FINALLY  */
    FOR = 289,                     /* FOR  */
    FROM = 290,                    /* FROM  */
    FUNCTION = 291,                /* FUNCTION  */
    GET = 292,                     /* GET  */
    IF = 293,                      /* IF  */
    IMPLEMENTS = 294,              /* IMPLEMENTS  */
    IMPORT = 295,                  /* IMPORT  */
    IN = 296,                      /* IN  */
    INSTANCEOF = 297,              /* INSTANCEOF  */
    IS = 298,                      /* IS  */
    LATE = 299,                    /* LATE  */
    LET = 300,                     /* LET  */
    MODULE = 301,                  /* MODULE  */
    MIXIN = 302,                   /* MIXIN  */
    NEVER = 303,                   /* NEVER  */
    NEW = 304,                     /* NEW  */
    _NULL = 305,                   /* _NULL  */
    NUMBER = 306,                  /* NUMBER  */
    OBJECT = 307,                  /* OBJECT  */
    OF = 308,                      /* OF  */
    PACKAGE = 309,                 /* PACKAGE  */
    PRIVATE = 310,                 /* PRIVATE  */
    PROTECTED = 311,               /* PROTECTED  */
    PUBLIC = 312,                  /* PUBLIC  */
    FINAL = 313,                   /* FINAL  */
    READONLY = 314,                /* READONLY  */
    REQUIRE = 315,                 /* REQUIRE  */
    RETURN = 316,                  /* RETURN  */
    SET = 317,                     /* SET  */
    STATIC = 318,                  /* STATIC  */
    STRING = 319,                  /* STRING  */
    SUPER = 320,                   /* SUPER  */
    SWITCH = 321,                  /* SWITCH  */
    SYMBOL = 322,                  /* SYMBOL  */
    THIS = 323,                    /* THIS  */
    THROW = 324,                   /* THROW  */
    _TRUE = 325,                   /* _TRUE  */
    TRY = 326,                     /* TRY  */
    TYPEOF = 327,                  /* TYPEOF  */
    TYPEDEF = 328,                 /* TYPEDEF  */
    UNKNOWN = 329,                 /* UNKNOWN  */
    VAR = 330,                     /* VAR  */
    WHILE = 331,                   /* WHILE  */
    INT = 332,                     /* INT  */
    DOUBLE = 333,                  /* DOUBLE  */
    NUM = 334,                     /* NUM  */
    VOID = 335,                    /* VOID  */
    DOG = 336,                     /* DOG  */
    COLON = 337,                   /* COLON  */
    OPT_PARAM = 338,               /* OPT_PARAM  */
    MOD = 339,                     /* MOD  */
    MOD_ASSIGNMENT = 340,          /* MOD_ASSIGNMENT  */
    PLUS = 341,                    /* PLUS  */
    PLUS_ASSIGNMENT = 342,         /* PLUS_ASSIGNMENT  */
    INCREMENT = 343,               /* INCREMENT  */
    MINUS = 344,                   /* MINUS  */
    MINUS_ASSIGNMENT = 345,        /* MINUS_ASSIGNMENT  */
    DECREMENT = 346,               /* DECREMENT  */
    MUL = 347,                     /* MUL  */
    MUL_ASSIGNMENT = 348,          /* MUL_ASSIGNMENT  */
    ASSIGNMENT = 349,              /* ASSIGNMENT  */
    EQUAL = 350,                   /* EQUAL  */
    BIT_NOT = 351,                 /* BIT_NOT  */
    NOT_EQUAL = 352,               /* NOT_EQUAL  */
    MORE = 353,                    /* MORE  */
    MORE_OR_EQUAL = 354,           /* MORE_OR_EQUAL  */
    LESS = 355,                    /* LESS  */
    LESS_OR_EQUAL = 356,           /* LESS_OR_EQUAL  */
    DIV = 357,                     /* DIV  */
    DIV_ASSIGNMENT = 358,          /* DIV_ASSIGNMENT  */
    BIT_XOR = 359,                 /* BIT_XOR  */
    BIT_AND = 360,                 /* BIT_AND  */
    AND = 361,                     /* AND  */
    BIT_OR = 362,                  /* BIT_OR  */
    OR = 363,                      /* OR  */
    LEFT_SQUARE_BRACKET = 364,     /* LEFT_SQUARE_BRACKET  */
    RIGHT_SQUARE_BRACKET = 365,    /* RIGHT_SQUARE_BRACKET  */
    LEFT_ROUND_BRACKET = 366,      /* LEFT_ROUND_BRACKET  */
    RIGHT_ROUND_BRACKET = 367,     /* RIGHT_ROUND_BRACKET  */
    LEFT_FIGURE_BRACKET = 368,     /* LEFT_FIGURE_BRACKET  */
    RIGHT_FIGURE_BRACKET = 369,    /* RIGHT_FIGURE_BRACKET  */
    NULL_COALESCE = 370,           /* NULL_COALESCE  */
    SAFE_NAVIGATE = 371,           /* SAFE_NAVIGATE  */
    CASCADE = 372,                 /* CASCADE  */
    INT_DIV = 373,                 /* INT_DIV  */
    CAST = 374,                    /* CAST  */
    SEMICOLON = 375,               /* SEMICOLON  */
    COMMA = 376,                   /* COMMA  */
    DOT = 377,                     /* DOT  */
    QUESTION = 378,                /* QUESTION  */
    ENTER = 379                    /* ENTER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INT_LITERAL 258
#define DOUBLE_LITERAL 259
#define STRING_LITERAL 260
#define BOOL_LITERAL 261
#define NULL_LITERAL 262
#define ID 263
#define ABSTRACT 264
#define ANY 265
#define AS 266
#define BOOLEAN 267
#define BREAK 268
#define CASE 269
#define CATCH 270
#define CLASS 271
#define CONST 272
#define CONSTRUCTOR 273
#define CONTINUE 274
#define DEBUGGER 275
#define DEFAULT 276
#define DELETE 277
#define DO 278
#define DYNAMIC 279
#define ELSE 280
#define ENUM 281
#define EXPORT 282
#define EXTENDS 283
#define EXTENSION 284
#define EXTERNAL 285
#define FACTORY 286
#define _FALSE 287
#define FINALLY 288
#define FOR 289
#define FROM 290
#define FUNCTION 291
#define GET 292
#define IF 293
#define IMPLEMENTS 294
#define IMPORT 295
#define IN 296
#define INSTANCEOF 297
#define IS 298
#define LATE 299
#define LET 300
#define MODULE 301
#define MIXIN 302
#define NEVER 303
#define NEW 304
#define _NULL 305
#define NUMBER 306
#define OBJECT 307
#define OF 308
#define PACKAGE 309
#define PRIVATE 310
#define PROTECTED 311
#define PUBLIC 312
#define FINAL 313
#define READONLY 314
#define REQUIRE 315
#define RETURN 316
#define SET 317
#define STATIC 318
#define STRING 319
#define SUPER 320
#define SWITCH 321
#define SYMBOL 322
#define THIS 323
#define THROW 324
#define _TRUE 325
#define TRY 326
#define TYPEOF 327
#define TYPEDEF 328
#define UNKNOWN 329
#define VAR 330
#define WHILE 331
#define INT 332
#define DOUBLE 333
#define NUM 334
#define VOID 335
#define DOG 336
#define COLON 337
#define OPT_PARAM 338
#define MOD 339
#define MOD_ASSIGNMENT 340
#define PLUS 341
#define PLUS_ASSIGNMENT 342
#define INCREMENT 343
#define MINUS 344
#define MINUS_ASSIGNMENT 345
#define DECREMENT 346
#define MUL 347
#define MUL_ASSIGNMENT 348
#define ASSIGNMENT 349
#define EQUAL 350
#define BIT_NOT 351
#define NOT_EQUAL 352
#define MORE 353
#define MORE_OR_EQUAL 354
#define LESS 355
#define LESS_OR_EQUAL 356
#define DIV 357
#define DIV_ASSIGNMENT 358
#define BIT_XOR 359
#define BIT_AND 360
#define AND 361
#define BIT_OR 362
#define OR 363
#define LEFT_SQUARE_BRACKET 364
#define RIGHT_SQUARE_BRACKET 365
#define LEFT_ROUND_BRACKET 366
#define RIGHT_ROUND_BRACKET 367
#define LEFT_FIGURE_BRACKET 368
#define RIGHT_FIGURE_BRACKET 369
#define NULL_COALESCE 370
#define SAFE_NAVIGATE 371
#define CASCADE 372
#define INT_DIV 373
#define CAST 374
#define SEMICOLON 375
#define COMMA 376
#define DOT 377
#define QUESTION 378
#define ENTER 379

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 27 "prs.y"

    int     Int;
    double  Double;
    char*   Str;
    int     Bool;
    char*   Id;

#line 406 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT_LITERAL = 3,                /* INT_LITERAL  */
  YYSYMBOL_DOUBLE_LITERAL = 4,             /* DOUBLE_LITERAL  */
  YYSYMBOL_STRING_LITERAL = 5,             /* STRING_LITERAL  */
  YYSYMBOL_BOOL_LITERAL = 6,               /* BOOL_LITERAL  */
  YYSYMBOL_NULL_LITERAL = 7,               /* NULL_LITERAL  */
  YYSYMBOL_ID = 8,                         /* ID  */
  YYSYMBOL_ABSTRACT = 9,                   /* ABSTRACT  */
  YYSYMBOL_ANY = 10,                       /* ANY  */
  YYSYMBOL_AS = 11,                        /* AS  */
  YYSYMBOL_BOOLEAN = 12,                   /* BOOLEAN  */
  YYSYMBOL_BREAK = 13,                     /* BREAK  */
  YYSYMBOL_CASE = 14,                      /* CASE  */
  YYSYMBOL_CATCH = 15,                     /* CATCH  */
  YYSYMBOL_CLASS = 16,                     /* CLASS  */
  YYSYMBOL_CONST = 17,                     /* CONST  */
  YYSYMBOL_CONSTRUCTOR = 18,               /* CONSTRUCTOR  */
  YYSYMBOL_CONTINUE = 19,                  /* CONTINUE  */
  YYSYMBOL_DEBUGGER = 20,                  /* DEBUGGER  */
  YYSYMBOL_DEFAULT = 21,                   /* DEFAULT  */
  YYSYMBOL_DELETE = 22,                    /* DELETE  */
  YYSYMBOL_DO = 23,                        /* DO  */
  YYSYMBOL_DYNAMIC = 24,                   /* DYNAMIC  */
  YYSYMBOL_ELSE = 25,                      /* ELSE  */
  YYSYMBOL_ENUM = 26,                      /* ENUM  */
  YYSYMBOL_EXPORT = 27,                    /* EXPORT  */
  YYSYMBOL_EXTENDS = 28,                   /* EXTENDS  */
  YYSYMBOL_EXTENSION = 29,                 /* EXTENSION  */
  YYSYMBOL_EXTERNAL = 30,                  /* EXTERNAL  */
  YYSYMBOL_FACTORY = 31,                   /* FACTORY  */
  YYSYMBOL__FALSE = 32,                    /* _FALSE  */
  YYSYMBOL_FINALLY = 33,                   /* FINALLY  */
  YYSYMBOL_FOR = 34,                       /* FOR  */
  YYSYMBOL_FROM = 35,                      /* FROM  */
  YYSYMBOL_FUNCTION = 36,                  /* FUNCTION  */
  YYSYMBOL_GET = 37,                       /* GET  */
  YYSYMBOL_IF = 38,                        /* IF  */
  YYSYMBOL_IMPLEMENTS = 39,                /* IMPLEMENTS  */
  YYSYMBOL_IMPORT = 40,                    /* IMPORT  */
  YYSYMBOL_IN = 41,                        /* IN  */
  YYSYMBOL_INSTANCEOF = 42,                /* INSTANCEOF  */
  YYSYMBOL_IS = 43,                        /* IS  */
  YYSYMBOL_LATE = 44,                      /* LATE  */
  YYSYMBOL_LET = 45,                       /* LET  */
  YYSYMBOL_MODULE = 46,                    /* MODULE  */
  YYSYMBOL_MIXIN = 47,                     /* MIXIN  */
  YYSYMBOL_NEVER = 48,                     /* NEVER  */
  YYSYMBOL_NEW = 49,                       /* NEW  */
  YYSYMBOL__NULL = 50,                     /* _NULL  */
  YYSYMBOL_NUMBER = 51,                    /* NUMBER  */
  YYSYMBOL_OBJECT = 52,                    /* OBJECT  */
  YYSYMBOL_OF = 53,                        /* OF  */
  YYSYMBOL_PACKAGE = 54,                   /* PACKAGE  */
  YYSYMBOL_PRIVATE = 55,                   /* PRIVATE  */
  YYSYMBOL_PROTECTED = 56,                 /* PROTECTED  */
  YYSYMBOL_PUBLIC = 57,                    /* PUBLIC  */
  YYSYMBOL_FINAL = 58,                     /* FINAL  */
  YYSYMBOL_READONLY = 59,                  /* READONLY  */
  YYSYMBOL_REQUIRE = 60,                   /* REQUIRE  */
  YYSYMBOL_RETURN = 61,                    /* RETURN  */
  YYSYMBOL_SET = 62,                       /* SET  */
  YYSYMBOL_STATIC = 63,                    /* STATIC  */
  YYSYMBOL_STRING = 64,                    /* STRING  */
  YYSYMBOL_SUPER = 65,                     /* SUPER  */
  YYSYMBOL_SWITCH = 66,                    /* SWITCH  */
  YYSYMBOL_SYMBOL = 67,                    /* SYMBOL  */
  YYSYMBOL_THIS = 68,                      /* THIS  */
  YYSYMBOL_THROW = 69,                     /* THROW  */
  YYSYMBOL__TRUE = 70,                     /* _TRUE  */
  YYSYMBOL_TRY = 71,                       /* TRY  */
  YYSYMBOL_TYPEOF = 72,                    /* TYPEOF  */
  YYSYMBOL_TYPEDEF = 73,                   /* TYPEDEF  */
  YYSYMBOL_UNKNOWN = 74,                   /* UNKNOWN  */
  YYSYMBOL_VAR = 75,                       /* VAR  */
  YYSYMBOL_WHILE = 76,                     /* WHILE  */
  YYSYMBOL_INT = 77,                       /* INT  */
  YYSYMBOL_DOUBLE = 78,                    /* DOUBLE  */
  YYSYMBOL_NUM = 79,                       /* NUM  */
  YYSYMBOL_VOID = 80,                      /* VOID  */
  YYSYMBOL_DOG = 81,                       /* DOG  */
  YYSYMBOL_COLON = 82,                     /* COLON  */
  YYSYMBOL_OPT_PARAM = 83,                 /* OPT_PARAM  */
  YYSYMBOL_MOD = 84,                       /* MOD  */
  YYSYMBOL_MOD_ASSIGNMENT = 85,            /* MOD_ASSIGNMENT  */
  YYSYMBOL_PLUS = 86,                      /* PLUS  */
  YYSYMBOL_PLUS_ASSIGNMENT = 87,           /* PLUS_ASSIGNMENT  */
  YYSYMBOL_INCREMENT = 88,                 /* INCREMENT  */
  YYSYMBOL_MINUS = 89,                     /* MINUS  */
  YYSYMBOL_MINUS_ASSIGNMENT = 90,          /* MINUS_ASSIGNMENT  */
  YYSYMBOL_DECREMENT = 91,                 /* DECREMENT  */
  YYSYMBOL_MUL = 92,                       /* MUL  */
  YYSYMBOL_MUL_ASSIGNMENT = 93,            /* MUL_ASSIGNMENT  */
  YYSYMBOL_ASSIGNMENT = 94,                /* ASSIGNMENT  */
  YYSYMBOL_EQUAL = 95,                     /* EQUAL  */
  YYSYMBOL_BIT_NOT = 96,                   /* BIT_NOT  */
  YYSYMBOL_NOT_EQUAL = 97,                 /* NOT_EQUAL  */
  YYSYMBOL_MORE = 98,                      /* MORE  */
  YYSYMBOL_MORE_OR_EQUAL = 99,             /* MORE_OR_EQUAL  */
  YYSYMBOL_LESS = 100,                     /* LESS  */
  YYSYMBOL_LESS_OR_EQUAL = 101,            /* LESS_OR_EQUAL  */
  YYSYMBOL_DIV = 102,                      /* DIV  */
  YYSYMBOL_DIV_ASSIGNMENT = 103,           /* DIV_ASSIGNMENT  */
  YYSYMBOL_BIT_XOR = 104,                  /* BIT_XOR  */
  YYSYMBOL_BIT_AND = 105,                  /* BIT_AND  */
  YYSYMBOL_AND = 106,                      /* AND  */
  YYSYMBOL_BIT_OR = 107,                   /* BIT_OR  */
  YYSYMBOL_OR = 108,                       /* OR  */
  YYSYMBOL_LEFT_SQUARE_BRACKET = 109,      /* LEFT_SQUARE_BRACKET  */
  YYSYMBOL_RIGHT_SQUARE_BRACKET = 110,     /* RIGHT_SQUARE_BRACKET  */
  YYSYMBOL_LEFT_ROUND_BRACKET = 111,       /* LEFT_ROUND_BRACKET  */
  YYSYMBOL_RIGHT_ROUND_BRACKET = 112,      /* RIGHT_ROUND_BRACKET  */
  YYSYMBOL_LEFT_FIGURE_BRACKET = 113,      /* LEFT_FIGURE_BRACKET  */
  YYSYMBOL_RIGHT_FIGURE_BRACKET = 114,     /* RIGHT_FIGURE_BRACKET  */
  YYSYMBOL_NULL_COALESCE = 115,            /* NULL_COALESCE  */
  YYSYMBOL_SAFE_NAVIGATE = 116,            /* SAFE_NAVIGATE  */
  YYSYMBOL_CASCADE = 117,                  /* CASCADE  */
  YYSYMBOL_INT_DIV = 118,                  /* INT_DIV  */
  YYSYMBOL_CAST = 119,                     /* CAST  */
  YYSYMBOL_SEMICOLON = 120,                /* SEMICOLON  */
  YYSYMBOL_COMMA = 121,                    /* COMMA  */
  YYSYMBOL_DOT = 122,                      /* DOT  */
  YYSYMBOL_QUESTION = 123,                 /* QUESTION  */
  YYSYMBOL_ENTER = 124,                    /* ENTER  */
  YYSYMBOL_YYACCEPT = 125,                 /* $accept  */
  YYSYMBOL_ExpressionList_e = 126,         /* ExpressionList_e  */
  YYSYMBOL_ExpressionList = 127,           /* ExpressionList  */
  YYSYMBOL_SimpleExpression = 128,         /* SimpleExpression  */
  YYSYMBOL_Statement = 129,                /* Statement  */
  YYSYMBOL_StatementTerminator = 130,      /* StatementTerminator  */
  YYSYMBOL_IfStatement = 131,              /* IfStatement  */
  YYSYMBOL_WhileStatement = 132,           /* WhileStatement  */
  YYSYMBOL_DoWhileStatement = 133,         /* DoWhileStatement  */
  YYSYMBOL_ForStatement = 134,             /* ForStatement  */
  YYSYMBOL_ForInitializer = 135,           /* ForInitializer  */
  YYSYMBOL_ForCondition = 136,             /* ForCondition  */
  YYSYMBOL_ForUpdate = 137,                /* ForUpdate  */
  YYSYMBOL_ForLoopParts = 138,             /* ForLoopParts  */
  YYSYMBOL_SwitchStatement = 139,          /* SwitchStatement  */
  YYSYMBOL_SwitchCaseList = 140,           /* SwitchCaseList  */
  YYSYMBOL_SwitchCase = 141,               /* SwitchCase  */
  YYSYMBOL_DefaultCaseOpt = 142,           /* DefaultCaseOpt  */
  YYSYMBOL_StatementList = 143,            /* StatementList  */
  YYSYMBOL_VarStmt = 144,                  /* VarStmt  */
  YYSYMBOL_BreakStatement = 145,           /* BreakStatement  */
  YYSYMBOL_ContinueStatement = 146,        /* ContinueStatement  */
  YYSYMBOL_ReturnStatement = 147,          /* ReturnStatement  */
  YYSYMBOL_SimpleExpressionOpt = 148,      /* SimpleExpressionOpt  */
  YYSYMBOL_ModifierList = 149,             /* ModifierList  */
  YYSYMBOL_Modifier = 150,                 /* Modifier  */
  YYSYMBOL_TopLevelList = 151,             /* TopLevelList  */
  YYSYMBOL_TopLevelDeclaration = 152,      /* TopLevelDeclaration  */
  YYSYMBOL_ClassDeclaration = 153,         /* ClassDeclaration  */
  YYSYMBOL_ClassMemberList = 154,          /* ClassMemberList  */
  YYSYMBOL_ClassMember = 155,              /* ClassMember  */
  YYSYMBOL_FunctionDeclaration = 156,      /* FunctionDeclaration  */
  YYSYMBOL_ParameterListOpt = 157,         /* ParameterListOpt  */
  YYSYMBOL_ParameterList = 158,            /* ParameterList  */
  YYSYMBOL_Parameter = 159,                /* Parameter  */
  YYSYMBOL_Type = 160,                     /* Type  */
  YYSYMBOL_BlockStatement = 161            /* BlockStatement  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   829

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  125
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  216

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   379


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   182,   182,   184,   188,   189,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   252,   256,   257,
     261,   265,   269,   272,   274,   275,   278,   280,   283,   285,
     289,   291,   292,   296,   299,   301,   305,   308,   310,   314,
     315,   319,   320,   324,   328,   332,   335,   337,   341,   343,
     347,   348,   349,   350,   351,   352,   356,   357,   361,   362,
     366,   369,   371,   375,   376,   380,   381,   384,   386,   390,
     391,   395,   396,   400,   404
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT_LITERAL",
  "DOUBLE_LITERAL", "STRING_LITERAL", "BOOL_LITERAL", "NULL_LITERAL", "ID",
  "ABSTRACT", "ANY", "AS", "BOOLEAN", "BREAK", "CASE", "CATCH", "CLASS",
  "CONST", "CONSTRUCTOR", "CONTINUE", "DEBUGGER", "DEFAULT", "DELETE",
  "DO", "DYNAMIC", "ELSE", "ENUM", "EXPORT", "EXTENDS", "EXTENSION",
  "EXTERNAL", "FACTORY", "_FALSE", "FINALLY", "FOR", "FROM", "FUNCTION",
  "GET", "IF", "IMPLEMENTS", "IMPORT", "IN", "INSTANCEOF", "IS", "LATE",
  "LET", "MODULE", "MIXIN", "NEVER", "NEW", "_NULL", "NUMBER", "OBJECT",
  "OF", "PACKAGE", "PRIVATE", "PROTECTED", "PUBLIC", "FINAL", "READONLY",
  "REQUIRE", "RETURN", "SET", "STATIC", "STRING", "SUPER", "SWITCH",
  "SYMBOL", "THIS", "THROW", "_TRUE", "TRY", "TYPEOF", "TYPEDEF",
  "UNKNOWN", "VAR", "WHILE", "INT", "DOUBLE", "NUM", "VOID", "DOG",
  "COLON", "OPT_PARAM", "MOD", "MOD_ASSIGNMENT", "PLUS", "PLUS_ASSIGNMENT",
  "INCREMENT", "MINUS", "MINUS_ASSIGNMENT", "DECREMENT", "MUL",
  "MUL_ASSIGNMENT", "ASSIGNMENT", "EQUAL", "BIT_NOT", "NOT_EQUAL", "MORE",
  "MORE_OR_EQUAL", "LESS", "LESS_OR_EQUAL", "DIV", "DIV_ASSIGNMENT",
  "BIT_XOR", "BIT_AND", "AND", "BIT_OR", "OR", "LEFT_SQUARE_BRACKET",
  "RIGHT_SQUARE_BRACKET", "LEFT_ROUND_BRACKET", "RIGHT_ROUND_BRACKET",
  "LEFT_FIGURE_BRACKET", "RIGHT_FIGURE_BRACKET", "NULL_COALESCE",
  "SAFE_NAVIGATE", "CASCADE", "INT_DIV", "CAST", "SEMICOLON", "COMMA",
  "DOT", "QUESTION", "ENTER", "$accept", "ExpressionList_e",
  "ExpressionList", "SimpleExpression", "Statement", "StatementTerminator",
  "IfStatement", "WhileStatement", "DoWhileStatement", "ForStatement",
  "ForInitializer", "ForCondition", "ForUpdate", "ForLoopParts",
  "SwitchStatement", "SwitchCaseList", "SwitchCase", "DefaultCaseOpt",
  "StatementList", "VarStmt", "BreakStatement", "ContinueStatement",
  "ReturnStatement", "SimpleExpressionOpt", "ModifierList", "Modifier",
  "TopLevelList", "TopLevelDeclaration", "ClassDeclaration",
  "ClassMemberList", "ClassMember", "FunctionDeclaration",
  "ParameterListOpt", "ParameterList", "Parameter", "Type",
  "BlockStatement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-187)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -187,    17,    14,  -187,  -187,  -187,  -187,    11,  -187,  -187,
    -187,  -187,  -187,  -187,    22,  -187,    34,  -187,  -187,  -109,
     -64,   -63,  -187,    -5,    -5,   -65,    42,   -60,   -39,  -187,
      48,   -55,  -187,   -12,  -187,  -187,   -48,    -5,  -187,   -48,
      50,   -54,     4,  -187,   193,  -187,  -187,  -187,   -26,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,   -35,   -54,   -54,   193,
     -34,   -30,   287,   -29,   -28,   287,   287,   287,   287,   287,
     287,   342,  -187,  -187,  -187,  -187,  -187,  -187,  -187,     3,
     -54,  -187,  -187,  -187,  -187,   287,   287,  -187,  -187,    10,
     230,   287,   622,   -54,   287,   287,   707,   -81,   707,   -81,
       2,   382,   287,   287,   287,   287,   287,  -187,   287,   287,
    -187,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,    63,    79,  -187,  -187,  -187,  -187,
     622,   -24,   -23,   622,   -16,    92,   342,   -19,  -187,   422,
    -187,   462,   502,  -187,   245,     2,   622,   707,   622,   707,
     622,     2,   622,   651,   651,   680,   680,   680,   680,     2,
     622,   692,   692,   542,    -9,    -8,  -187,   287,   287,    13,
     287,   287,   193,    -7,   193,   287,  -187,   287,   287,   622,
     582,   287,   622,   622,   -15,    83,  -187,  -187,    21,    -3,
      -2,   -54,   342,   287,   193,    15,  -187,  -187,  -187,   287,
     622,     0,  -187,   287,    37,  -187,     6,   622,   193,   302,
     193,  -187,  -187,   193,   193,   193
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      88,     0,    88,    96,    98,    99,   113,     0,    95,    91,
      92,    90,    94,    93,     0,    89,     0,     1,    97,     0,
       0,     0,   101,   107,   107,    88,     0,     0,   108,   109,
       0,     0,   100,    88,   102,   112,     0,     0,   111,     0,
       0,     0,     0,   103,     0,   105,   110,   106,    81,    57,
     104,     6,     7,     8,     9,    10,    11,     0,     0,     0,
       0,     0,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,    45,    48,    49,    50,    51,    52,     0,
       0,    53,    54,    55,    56,     0,     2,    83,    84,     0,
      63,     0,    87,     0,     0,     0,    39,    41,    38,    42,
      40,     0,     0,     0,     0,     0,     0,    43,     0,     0,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,   114,    80,    47,
      82,     0,     3,     4,     0,     0,     0,     0,    64,     0,
      85,     0,     0,    13,     0,    23,    36,    19,    32,    20,
      33,    21,    34,    28,    29,    24,    26,    25,    27,    22,
      35,    30,    31,     0,    15,    14,    12,     0,     0,     0,
       0,    66,     0,     0,     0,     0,    18,     2,     2,     5,
       0,     0,    71,    67,     0,    58,    74,    60,    37,     0,
       0,     0,     0,    68,     0,    77,    17,    16,    61,     0,
      69,     0,    59,     0,     0,    75,     0,    72,     0,     0,
       0,    73,    62,     0,    78,    76
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -187,  -139,  -187,    72,   -59,   -40,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -186,    88,
    -187,  -187,  -187,  -187,   -10,  -187,  -187,   120,  -187,  -187,
    -187,    93,   101,  -187,    90,    12,    -4
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,   131,   132,    71,    72,    73,    74,    75,    76,    77,
     137,   184,   201,   138,    78,   195,   205,   206,    79,    80,
      81,    82,    83,    93,     1,    15,     2,     3,     4,    25,
      34,     5,    27,    28,    29,    30,    84
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      89,    50,   102,     6,    22,     8,    51,    52,    53,    54,
      55,    56,     6,    16,    17,    33,    57,    87,    88,    19,
     128,     8,    58,    42,   214,     6,    59,   215,   123,   203,
      20,   126,    45,     7,     8,    47,   204,    60,   189,   190,
     129,    61,    21,     9,    10,    11,    12,    23,    24,    32,
      35,    13,    36,   140,    16,    37,    38,    39,    48,     9,
      10,    11,    12,    40,    62,    44,    49,    13,    85,    63,
      26,   164,     9,    10,    11,    12,    86,    90,    40,    64,
      13,    91,    94,    95,    14,   102,   134,   165,   166,    65,
     107,    66,    67,   110,    68,   168,   170,    14,   167,    69,
     169,   171,   177,   178,    -1,   193,   186,   181,   194,   196,
     197,   123,   208,   185,    70,   187,    44,   127,   124,   210,
     211,    41,    18,    49,   125,    31,    43,    46,     0,     0,
       0,     0,     0,     0,    92,   202,     0,    96,    97,    98,
      99,   100,   101,     0,     0,     0,     0,     0,     0,   212,
       0,   198,   199,     0,     0,   128,   128,   130,   133,     0,
       0,     0,   136,   139,     0,     0,   141,   142,     0,     0,
       0,     0,     0,     0,   144,   145,   146,   147,   148,     0,
     149,   150,     0,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,    51,    52,    53,    54,
      55,    56,     0,     0,     0,     0,    57,     0,     0,     0,
       0,     0,    58,     0,     0,     0,    59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    60,     0,     0,
       0,    61,     0,    51,    52,    53,    54,    55,    56,   179,
     180,     0,   182,   183,     0,     0,     0,   188,     0,   133,
     133,     0,     0,   192,    62,     0,     0,     0,     0,    63,
       0,     0,     0,     0,     0,   200,     0,     0,    40,    64,
       0,   207,     0,     0,     0,   209,     0,     0,     0,    65,
       0,    66,    67,     0,    68,     0,     0,     0,     0,    69,
      51,    52,    53,    54,    55,    56,     0,     0,     0,     0,
       0,     0,     0,     0,    70,   135,    44,     0,     0,     0,
       0,     0,     0,    49,     0,     0,    65,     0,    66,    67,
       0,    68,     0,     0,     0,     0,    69,   175,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     0,
     113,    70,   114,   115,   116,   117,   118,   119,   120,     0,
       0,   121,     0,   122,   123,     0,     0,     0,     0,     0,
       0,   124,     0,     0,     0,     0,     0,   125,     0,     0,
       0,     0,     0,    65,     0,    66,    67,     0,    68,     0,
       0,     0,     0,    69,   213,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,     0,   113,    70,   114,
     115,   116,   117,   118,   119,   120,     0,     0,   121,     0,
     122,   123,     0,     0,     0,     0,     0,     0,   124,     0,
       0,     0,     0,     0,   125,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,     0,   113,     0,   114,
     115,   116,   117,   118,   119,   120,     0,     0,   121,     0,
     122,   123,     0,     0,     0,     0,     0,     0,   124,     0,
       0,     0,    49,     0,   125,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,     0,   113,     0,   114,
     115,   116,   117,   118,   119,   120,     0,     0,   121,     0,
     122,   123,     0,     0,   143,     0,     0,     0,   124,     0,
       0,     0,     0,     0,   125,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,     0,   113,     0,   114,
     115,   116,   117,   118,   119,   120,     0,     0,   121,     0,
     122,   123,     0,     0,   172,     0,     0,     0,   124,     0,
       0,     0,     0,     0,   125,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,     0,   113,     0,   114,
     115,   116,   117,   118,   119,   120,     0,     0,   121,     0,
     122,   123,     0,     0,   173,     0,     0,     0,   124,     0,
       0,     0,     0,     0,   125,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,     0,   113,     0,   114,
     115,   116,   117,   118,   119,   120,     0,     0,   121,     0,
     122,   123,     0,     0,   174,     0,     0,     0,   124,     0,
       0,     0,     0,     0,   125,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,     0,   113,     0,   114,
     115,   116,   117,   118,   119,   120,     0,     0,   121,     0,
     122,   123,   176,     0,     0,     0,     0,     0,   124,     0,
       0,     0,     0,     0,   125,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,     0,   113,     0,   114,
     115,   116,   117,   118,   119,   120,     0,     0,   121,     0,
     122,   123,     0,     0,   191,     0,     0,     0,   124,     0,
       0,     0,     0,     0,   125,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,     0,   113,     0,   114,
     115,   116,   117,   118,   119,   120,     0,     0,   121,     0,
     122,   123,     0,     0,   102,   103,     0,   105,   124,   107,
     108,     0,   110,   111,   125,     0,     0,     0,     0,   115,
     116,   117,   118,   119,     0,     0,     0,   121,     0,   122,
     123,     0,     0,   102,   103,     0,   105,   124,   107,   108,
       0,   110,   111,   125,     0,   102,   103,     0,   105,     0,
     107,   108,   119,   110,   111,     0,   121,     0,   122,   123,
     102,   103,     0,     0,   119,   107,   124,     0,   110,   111,
       0,   123,   125,     0,     0,     0,     0,     0,   124,   119,
       0,     0,     0,     0,   125,     0,   123,     0,     0,     0,
       0,     0,     0,   124,     0,     0,     0,     0,     0,   125
};

static const yytype_int16 yycheck[] =
{
      59,    41,    83,     8,   113,    17,     3,     4,     5,     6,
       7,     8,     8,     1,     0,    25,    13,    57,    58,     8,
      79,    17,    19,    33,   210,     8,    23,   213,   109,    14,
       8,    71,    36,    16,    17,    39,    21,    34,   177,   178,
      80,    38,     8,    55,    56,    57,    58,   111,   111,   114,
       8,    63,   112,    93,    42,    94,     8,   112,     8,    55,
      56,    57,    58,    75,    61,   113,   120,    63,    94,    66,
      75,     8,    55,    56,    57,    58,   111,   111,    75,    76,
      63,   111,   111,   111,    80,    83,    76,     8,   112,    86,
      88,    88,    89,    91,    91,   111,   136,    80,   121,    96,
       8,   120,   111,   111,    83,   120,   113,    94,    25,   112,
     112,   109,   112,   172,   111,   174,   113,   114,   116,    82,
     114,    33,     2,   120,   122,    24,    33,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    62,   194,    -1,    65,    66,    67,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,   208,
      -1,   191,   192,    -1,    -1,   214,   215,    85,    86,    -1,
      -1,    -1,    90,    91,    -1,    -1,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,   104,   105,   106,    -1,
     108,   109,    -1,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    38,    -1,     3,     4,     5,     6,     7,     8,   167,
     168,    -1,   170,   171,    -1,    -1,    -1,   175,    -1,   177,
     178,    -1,    -1,   181,    61,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,    75,    76,
      -1,   199,    -1,    -1,    -1,   203,    -1,    -1,    -1,    86,
      -1,    88,    89,    -1,    91,    -1,    -1,    -1,    -1,    96,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   111,    75,   113,    -1,    -1,    -1,
      -1,    -1,    -1,   120,    -1,    -1,    86,    -1,    88,    89,
      -1,    91,    -1,    -1,    -1,    -1,    96,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    -1,
      95,   111,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,   106,    -1,   108,   109,    -1,    -1,    -1,    -1,    -1,
      -1,   116,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    88,    89,    -1,    91,    -1,
      -1,    -1,    -1,    96,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    95,   111,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,   106,    -1,
     108,   109,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,   122,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    95,    -1,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,   106,    -1,
     108,   109,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,
      -1,    -1,   120,    -1,   122,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    95,    -1,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,   106,    -1,
     108,   109,    -1,    -1,   112,    -1,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,   122,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    95,    -1,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,   106,    -1,
     108,   109,    -1,    -1,   112,    -1,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,   122,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    95,    -1,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,   106,    -1,
     108,   109,    -1,    -1,   112,    -1,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,   122,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    95,    -1,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,   106,    -1,
     108,   109,    -1,    -1,   112,    -1,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,   122,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    95,    -1,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,   106,    -1,
     108,   109,   110,    -1,    -1,    -1,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,   122,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    95,    -1,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,   106,    -1,
     108,   109,    -1,    -1,   112,    -1,    -1,    -1,   116,    -1,
      -1,    -1,    -1,    -1,   122,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    95,    -1,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,   106,    -1,
     108,   109,    -1,    -1,    83,    84,    -1,    86,   116,    88,
      89,    -1,    91,    92,   122,    -1,    -1,    -1,    -1,    98,
      99,   100,   101,   102,    -1,    -1,    -1,   106,    -1,   108,
     109,    -1,    -1,    83,    84,    -1,    86,   116,    88,    89,
      -1,    91,    92,   122,    -1,    83,    84,    -1,    86,    -1,
      88,    89,   102,    91,    92,    -1,   106,    -1,   108,   109,
      83,    84,    -1,    -1,   102,    88,   116,    -1,    91,    92,
      -1,   109,   122,    -1,    -1,    -1,    -1,    -1,   116,   102,
      -1,    -1,    -1,    -1,   122,    -1,   109,    -1,    -1,    -1,
      -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,   122
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   149,   151,   152,   153,   156,     8,    16,    17,    55,
      56,    57,    58,    63,    80,   150,   160,     0,   152,     8,
       8,     8,   113,   111,   111,   154,    75,   157,   158,   159,
     160,   157,   114,   149,   155,     8,   112,    94,     8,   112,
      75,   144,   149,   156,   113,   161,   159,   161,     8,   120,
     130,     3,     4,     5,     6,     7,     8,    13,    19,    23,
      34,    38,    61,    66,    76,    86,    88,    89,    91,    96,
     111,   128,   129,   130,   131,   132,   133,   134,   139,   143,
     144,   145,   146,   147,   161,    94,   111,   130,   130,   129,
     111,   111,   128,   148,   111,   111,   128,   128,   128,   128,
     128,   128,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    95,    97,    98,    99,   100,   101,   102,
     103,   106,   108,   109,   116,   122,   130,   114,   129,   130,
     128,   126,   127,   128,    76,    75,   128,   135,   138,   128,
     130,   128,   128,   112,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,     8,     8,   112,   121,   111,     8,
     130,   120,   112,   112,   112,    82,   110,   111,   111,   128,
     128,    94,   128,   128,   136,   129,   113,   129,   128,   126,
     126,   112,   128,   120,    25,   140,   112,   112,   130,   130,
     128,   137,   129,    14,    21,   141,   142,   128,   112,   128,
      82,   114,   129,    82,   143,   143
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   125,   126,   126,   127,   127,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   130,   131,   131,
     132,   133,   134,   135,   135,   135,   136,   136,   137,   137,
     138,   138,   138,   139,   140,   140,   141,   142,   142,   143,
     143,   144,   144,   145,   146,   147,   148,   148,   149,   149,
     150,   150,   150,   150,   150,   150,   151,   151,   152,   152,
     153,   154,   154,   155,   155,   156,   156,   157,   157,   158,
     158,   159,   159,   160,   161
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     4,     3,     3,     3,     6,     6,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     5,     2,     2,
       2,     2,     2,     2,     2,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     7,
       5,     7,     9,     0,     1,     1,     0,     1,     0,     1,
       0,     3,     6,     8,     0,     2,     4,     0,     3,     1,
       2,     2,     4,     2,     2,     3,     0,     1,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       6,     0,     2,     2,     3,     7,     7,     0,     1,     1,
       3,     2,     2,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 1837 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 407 "prs.y"


void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main(int argc, char **argv) {
    if (argc > 1) yyin = fopen(argv[1], "r");
    else yyin = stdin;
    yyparse();
    return 0;
}
