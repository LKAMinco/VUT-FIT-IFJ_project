/*
 * File: exp_parser.h
 * Header file for exp_parser.c
 * Subject: IFJ
 * Authors: Jakub Julius Smykal, Ondrej Kovac, Martin Talajka, Milan Hrabovsky
 * Year: 2021
 */

#ifndef exp_parser_h_
#define exp_parser_h_

#include <stdio.h>
#include <stdbool.h>
#include "parser.h"

#define STR_LEN 0       //| #
#define MUL 1           //| *
#define DIV 2           //| / 
#define INT_DIV 3       //| //
#define PLUS_MINUS 4    //| +, -
#define STR_CONC 5      //| ..
#define REL_COMP 6      //| ==, ~=, <, >, <=, >=
#define LEFT_PAR 7      //| (
#define RIGHT_PAR 8     //| )
#define T_INT 9         //| i -> int (variable)
#define T_NUM 10        //| i -> float (variable)
#define T_STR 11        //| i -> string (variable)
#define T_DOLLAR 12     //| $
#define T_NIL 13        //| nil
#define T_BOOL 14       //| bool type


#define LE 45            // <
#define GR 44            // >
#define EQ 43            // =
#define ER 42            // ERROR

#define PREC_TAB_SIZE 14

int tokConversion( token*);

bool phCheck( stack*, stack*, int, int*, int);

bool pHelp( stack*, stack*, int);

bool pAlgo( stack*, stack*, int);

bool pExpression();

#endif

// --End of file--