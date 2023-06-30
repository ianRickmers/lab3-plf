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
    FIN = 0,                       /* FIN  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    EXPONENCIAL = 258,             /* EXPONENCIAL  */
    ENTERO = 259,                  /* ENTERO  */
    DECIMAL = 260,                 /* DECIMAL  */
    IDENTIFICADOR = 261,           /* IDENTIFICADOR  */
    PI = 262,                      /* PI  */
    X = 263,                       /* X  */
    MOD = 264,                     /* MOD  */
    NEG = 265,                     /* NEG  */
    POS = 266,                     /* POS  */
    SQR = 267,                     /* SQR  */
    CUR = 268,                     /* CUR  */
    EXP = 269,                     /* EXP  */
    LN = 270,                      /* LN  */
    LOG = 271,                     /* LOG  */
    SGN = 272,                     /* SGN  */
    INT = 273,                     /* INT  */
    FIX = 274,                     /* FIX  */
    FRAC = 275                     /* FRAC  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define FIN 0
#define YYerror 256
#define YYUNDEF 257
#define EXPONENCIAL 258
#define ENTERO 259
#define DECIMAL 260
#define IDENTIFICADOR 261
#define PI 262
#define X 263
#define MOD 264
#define NEG 265
#define POS 266
#define SQR 267
#define CUR 268
#define EXP 269
#define LN 270
#define LOG 271
#define SGN 272
#define INT 273
#define FIX 274
#define FRAC 275

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
