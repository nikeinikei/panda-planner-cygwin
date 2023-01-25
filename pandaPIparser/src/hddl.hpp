/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_SRC_HDDL_HPP_INCLUDED
# define YY_YY_SRC_HDDL_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    KEY_TYPES = 258,
    KEY_DEFINE = 259,
    KEY_DOMAIN = 260,
    KEY_PROBLEM = 261,
    KEY_REQUIREMENTS = 262,
    KEY_PREDICATES = 263,
    KEY_FUNCTIONS = 264,
    KEY_TASK = 265,
    KEY_CONSTANTS = 266,
    KEY_ACTION = 267,
    KEY_PARAMETERS = 268,
    KEY_PRECONDITION = 269,
    KEY_EFFECT = 270,
    KEY_METHOD = 271,
    KEY_GOAL = 272,
    KEY_INIT = 273,
    KEY_OBJECTS = 274,
    KEY_HTN = 275,
    KEY_TIHTN = 276,
    KEY_MIMIZE = 277,
    KEY_METRIC = 278,
    KEY_UTILITY = 279,
    KEY_BOUND = 280,
    KEY_AND = 281,
    KEY_OR = 282,
    KEY_NOT = 283,
    KEY_IMPLY = 284,
    KEY_FORALL = 285,
    KEY_EXISTS = 286,
    KEY_WHEN = 287,
    KEY_INCREASE = 288,
    KEY_TYPEOF = 289,
    KEY_CAUSAL_LINKS = 290,
    KEY_CONSTRAINTS = 291,
    KEY_ORDER = 292,
    KEY_ORDER_TASKS = 293,
    KEY_TASKS = 294,
    NAME = 295,
    REQUIRE_NAME = 296,
    VAR_NAME = 297,
    FLOAT = 298,
    INT = 299
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 31 "src/hddl.y"

	bool bval;
	int ival;
	float fval;
	char *sval;
	std::vector<std::string>* vstring;
	var_declaration* vardecl;
	predicate_definition* preddecl;
	general_formula* formula;
	std::vector<predicate_definition*>* preddecllist;
	std::vector<general_formula*>* formulae;
	var_and_const* varandconst;
	sub_task* subtask;
	std::vector<sub_task*>* subtasks;
	std::pair<bool,std::vector<sub_task*>*>* osubtasks;
	parsed_task_network* tasknetwork;
	std::pair<string,string>* spair;
	std::vector<std::pair<string,string>*>* spairlist;

#line 122 "src/hddl.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_SRC_HDDL_HPP_INCLUDED  */
