/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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

#line 323 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
