/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/hddl.y"

	#include <cstdio>
	#include <iostream>
	#include <vector>
	#include <cassert>
	#include <string.h>
	#include <algorithm>
	#include "parsetree.hpp"
	#include "domain.hpp"
	#include "cwa.hpp"
	
	using namespace std;
	
	// Declare stuff from Flex that Bison needs to know about:
	extern int yylex();
	extern int yyparse();
	extern FILE *yyin;
	char* current_parser_file_name;
	
	void yyerror(const char *s);

	bool sortObjectNeeded = false;

#line 94 "src/hddl.cpp"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 211 "src/hddl.cpp"

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
typedef yytype_int16 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

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
# define YYCOPY_NEEDED 1
#endif


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   303

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  89
/* YYNRULES -- Number of rules.  */
#define YYNRULES  172
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  339

#define YYUNDEFTOK  2
#define YYMAXUTOK   299


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      45,    46,     2,     2,     2,    48,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      49,    47,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   113,   113,   113,   116,   119,   120,   121,   122,   123,
     124,   125,   125,   127,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   140,   142,   143,   144,   157,   167,   169,
     171,   171,   172,   172,   173,   194,   198,   199,   200,   204,
     205,   205,   210,   215,   220,   221,   224,   231,   232,   233,
     242,   255,   257,   258,   263,   271,   271,   273,   283,   285,
     285,   286,   295,   297,   305,   305,   307,   307,   316,   316,
     318,   332,   332,   333,   333,   343,   375,   396,   397,   398,
     401,   401,   402,   402,   403,   403,   413,   414,   415,   416,
     417,   418,   419,   427,   428,   429,   430,   431,   432,   433,
     440,   441,   442,   443,   444,   445,   446,   447,   454,   454,
     454,   455,   455,   456,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   472,   473,   475,   476,   477,   478,   479,
     480,   481,   482,   484,   491,   492,   494,   494,   495,   506,
     507,   509,   510,   511,   512,   513,   514,   516,   517,   518,
     519,   522,   522,   523,   527,   528,   529,   532,   535,   536,
     540,   542,   543,   548,   549,   550,   554,   560,   562,   563,
     569,   578,   583
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KEY_TYPES", "KEY_DEFINE", "KEY_DOMAIN",
  "KEY_PROBLEM", "KEY_REQUIREMENTS", "KEY_PREDICATES", "KEY_FUNCTIONS",
  "KEY_TASK", "KEY_CONSTANTS", "KEY_ACTION", "KEY_PARAMETERS",
  "KEY_PRECONDITION", "KEY_EFFECT", "KEY_METHOD", "KEY_GOAL", "KEY_INIT",
  "KEY_OBJECTS", "KEY_HTN", "KEY_TIHTN", "KEY_MIMIZE", "KEY_METRIC",
  "KEY_UTILITY", "KEY_BOUND", "KEY_AND", "KEY_OR", "KEY_NOT", "KEY_IMPLY",
  "KEY_FORALL", "KEY_EXISTS", "KEY_WHEN", "KEY_INCREASE", "KEY_TYPEOF",
  "KEY_CAUSAL_LINKS", "KEY_CONSTRAINTS", "KEY_ORDER", "KEY_ORDER_TASKS",
  "KEY_TASKS", "NAME", "REQUIRE_NAME", "VAR_NAME", "FLOAT", "INT", "'('",
  "')'", "'='", "'-'", "'<'", "$accept", "document", "domain",
  "domain_defs", "problem", "problem_defs", "p_object_declaration",
  "p_init", "init_el", "p_goal", "htn_type", "parameters-option", "p_htn",
  "p_constraint", "p_metric", "metric_f_exp", "p_utility", "utility_list",
  "p_cost_bound", "domain_symbol", "require_def", "require_defs",
  "type_def", "type_def_list", "const_def", "constant_declaration_list",
  "constant_declaration_list_with_type", "constant_declarations",
  "predicates_def", "atomic_predicate_def-list", "atomic_predicate_def",
  "functions_def", "typed_atomic_function_def-list",
  "typed_function_list_continuation", "atomic_function_def-list",
  "task_or_action", "task_def", "precondition_option", "effect_option",
  "method_def", "tasknetwork_def", "subtasks_option", "ordering_option",
  "constraints_option", "causal_links_option", "subtask_defs",
  "subtask_def-list", "subtask_def", "ordering_defs", "ordering_def-list",
  "ordering_def", "constraint_def-list", "constraint_def",
  "causallink_defs", "causallink_def-list", "causallink_def", "gd",
  "gd-list", "gd_empty", "gd_conjuction", "gd_disjuction", "gd_negation",
  "gd_implication", "gd_existential", "gd_universal",
  "gd_equality_constraint", "var_or_const-list", "var_or_const",
  "atomic_formula", "effect-list", "effect", "eff_empty",
  "eff_conjunction", "eff_universal", "eff_conditional", "literal",
  "neg_atomic_formula", "p_effect", "assign_op", "f_head", "f_exp",
  "NAME-list-non-empty", "NAME-list", "VAR_NAME-list-non-empty",
  "VAR_NAME-list", "typed_vars", "typed_var", "typed_or_untyped_var_list",
  "typed_var_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,    40,    41,    61,    45,    60
};
# endif

#define YYPACT_NINF (-197)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-171)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -6,    60,    68,  -197,  -197,    36,  -197,    66,    44,    48,
    -197,    51,    70,  -197,    67,    29,   109,   115,  -197,  -197,
    -197,  -197,  -197,  -197,  -197,  -197,    80,   128,  -197,  -197,
    -197,  -197,   128,  -197,   129,   130,    84,  -197,    86,   113,
       1,    90,   125,    -2,   126,   127,   142,   142,  -197,   133,
    -197,   134,  -197,  -197,   136,  -197,  -197,  -197,   137,  -197,
    -197,  -197,   138,   135,   169,   167,    92,  -197,   128,   139,
    -197,  -197,   139,   141,   143,   168,     2,  -197,  -197,  -197,
    -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,   144,   140,
     145,  -197,   128,   147,   149,    23,  -197,  -197,  -197,  -197,
    -197,  -197,  -197,  -197,  -197,  -197,   150,   148,   143,  -197,
     128,  -197,  -197,   162,   151,   146,   143,   142,   157,   156,
    -197,  -197,   152,  -197,  -197,  -197,  -197,   143,   143,   154,
     158,  -197,  -197,   -24,    75,  -197,  -197,  -197,  -197,  -197,
    -197,  -197,  -197,  -197,  -197,   155,    95,   159,    55,   160,
     163,   164,   165,   104,  -197,   166,   -29,   100,   102,   170,
     143,   139,   139,    40,  -197,  -197,   -24,  -197,   172,   173,
     143,  -197,  -197,    64,  -197,     8,  -197,  -197,  -197,  -197,
     174,   175,   172,  -197,  -197,  -197,   177,   177,   178,   171,
     179,  -197,  -197,  -197,   167,  -197,  -197,  -197,  -197,   180,
     181,   182,  -197,   183,   105,   190,   185,   139,   150,  -197,
     192,    89,   188,   189,  -197,   176,   -12,  -197,  -197,  -197,
    -197,   191,   187,   186,  -197,   168,  -197,   143,   143,  -197,
    -197,  -197,  -197,   193,   194,  -197,  -197,  -197,   195,    33,
     198,  -197,   197,  -197,   199,  -197,   -16,  -197,  -197,   200,
     184,   206,   104,   201,   202,   150,  -197,    45,  -197,   203,
     151,   107,   210,    50,  -197,   153,  -197,   211,    32,  -197,
     207,  -197,  -197,   208,  -197,  -197,   209,  -197,  -197,  -197,
     213,  -197,  -197,  -197,  -197,   114,   216,   217,  -197,   214,
     196,  -197,   -24,   -11,  -197,  -197,  -197,  -197,    71,    -8,
    -197,  -197,   212,   215,   118,    -3,   218,   219,   -24,  -197,
     188,  -197,   221,  -197,  -197,  -197,  -197,   196,   -24,   220,
    -197,   222,   121,   223,  -197,   224,   -24,  -197,  -197,   229,
    -197,  -197,   225,   226,   227,  -197,  -197,   228,  -197
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     3,     0,     1,     0,     0,     0,
      43,     0,     0,    12,     0,     0,     0,     0,     4,     5,
       6,     7,     8,     9,    10,    11,     0,    48,    46,    60,
      67,    68,    52,    69,     0,     0,     0,   162,     0,    49,
       0,     0,     0,    65,     0,    53,    33,    33,    23,   160,
      47,     0,    45,    44,     0,    58,    59,    62,     0,    66,
      63,    51,     0,     0,     0,    72,     0,   161,    48,   165,
      67,    56,   165,     0,     0,    74,     0,    13,    15,    17,
      18,    16,    19,    20,    21,    22,    14,    50,   169,     0,
       0,    64,    54,     0,     0,     0,    71,   114,   118,   119,
     116,   117,   120,   121,   122,   115,     0,     0,     0,    28,
      52,    30,    31,     0,    41,     0,     0,    33,     0,   163,
      61,    55,     0,    32,   135,   124,   124,     0,     0,     0,
       0,   135,   125,     0,     0,   152,    73,   141,   142,   143,
     144,   145,   151,   146,    70,     0,     0,     0,     0,     0,
       0,     0,     0,    79,   172,     0,     0,     0,     0,     0,
       0,   165,   165,     0,   136,   137,     0,   140,     0,     0,
       0,   155,   147,     0,    29,     0,    25,    26,    24,    37,
       0,     0,     0,    39,    42,    35,     0,     0,     0,    81,
     165,    57,   133,   134,    72,   126,   123,   127,   128,     0,
       0,     0,   138,     0,     0,     0,     0,   165,     0,   156,
       0,     0,     0,     0,    36,     0,     0,    78,    87,    77,
      34,     0,    83,     0,   171,    74,   129,     0,     0,   132,
     148,   139,   153,     0,     0,   135,   158,   159,     0,     0,
       0,    38,     0,    90,   135,    86,     0,    80,    94,     0,
      85,     0,    79,     0,     0,     0,   150,     0,   154,     0,
      41,     0,     0,     0,    97,     0,    93,     0,     0,    82,
       0,    76,   166,     0,   131,   130,     0,   157,    27,    40,
       0,    88,    89,   135,    91,     0,     0,     0,   101,     0,
       0,   102,     0,     0,    84,   109,    75,   149,     0,     0,
      95,    96,     0,     0,     0,     0,     0,     0,     0,   112,
       0,   108,     0,    98,    99,   103,   100,     0,     0,     0,
     106,     0,     0,     0,    92,     0,     0,   167,   104,     0,
     110,   111,     0,     0,     0,   113,   107,     0,   105
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,  -197,
    -197,   -40,  -197,  -197,  -197,  -197,  -197,   -73,  -197,  -197,
     230,  -197,  -197,   231,  -197,   103,  -197,  -197,  -197,  -197,
     232,  -197,   233,  -197,  -197,  -197,  -197,    18,   -10,  -197,
     -15,  -197,  -197,  -197,  -197,    77,  -197,    15,  -197,  -197,
     -23,  -197,   -26,  -197,  -197,   -45,   -71,   161,  -197,  -197,
    -197,  -197,  -197,  -197,  -197,  -197,  -125,  -164,  -106,  -197,
    -196,  -197,  -197,  -197,  -197,  -145,  -197,  -197,  -197,    69,
    -197,   -27,  -197,    91,  -197,  -197,   -38,   -68,  -197
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    15,     4,    66,    78,    79,   146,    80,
     117,    64,    81,    82,    83,   181,    84,   150,    85,    11,
      19,    40,    20,    38,    21,    44,    92,   121,    22,    41,
      56,    23,    42,    60,    43,    35,    24,    75,   107,    25,
     188,   189,   222,   250,   271,   217,   261,   218,   247,   285,
     248,   304,   269,   294,   322,   295,   196,   157,    97,    98,
      99,   100,   101,   102,   103,   104,   156,   166,   105,   204,
     136,   137,   138,   139,   140,   141,   142,   143,   173,   211,
     238,    39,    49,    88,    89,   224,   307,    90,   190
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     135,   177,   203,    96,    93,    45,   163,    65,   231,    28,
     264,   192,   234,   193,   243,   309,   164,   194,   165,   108,
     109,   110,   111,   112,   265,   113,   114,   115,   244,   310,
     266,   317,   265,   267,   245,   311,   168,   145,   116,     1,
     135,   267,    52,    54,   318,   152,    58,    53,   131,   125,
     126,   127,   128,   129,   130,   212,   159,   160,   288,   276,
     289,   168,   206,   131,     5,   122,   290,   240,     6,   132,
     133,     8,     9,   131,    17,    18,   215,   153,   291,   292,
     192,     7,   193,    45,    10,   192,   202,   193,    12,   199,
     192,   277,   193,   200,   201,   179,   284,    13,   135,   208,
     180,   167,   135,   168,   209,   169,   135,   170,   171,   210,
     257,   192,    16,   193,    26,   131,    14,   312,    27,   263,
      36,   172,    28,    29,    30,    31,    32,    33,   308,   209,
      48,    34,    50,   236,   210,    54,    55,    76,    77,   233,
     175,   176,   186,   187,   321,    95,   195,    95,   197,   135,
     134,   230,   280,   281,   326,    63,   253,   254,   298,   299,
     300,    51,   334,   268,   315,   323,   329,   330,    37,    46,
      47,    57,    61,    67,    68,    62,    69,    70,    71,    73,
      72,    74,   119,   106,   148,  -168,    94,   279,    95,   124,
     151,   120,   118,   123,   144,   134,   149,   154,  -164,   161,
     155,   174,   286,   162,   135,   178,   191,   182,   221,   183,
     184,   185,   225,   147,   213,   252,   198,   205,   207,   270,
     242,   214,   216,   249,   220,  -170,   226,   227,   228,   229,
     131,   232,   235,   239,   251,   241,   246,   273,   306,   255,
     256,   258,   259,   260,   262,   268,   272,   274,   275,   278,
     283,   287,   293,   244,   296,   297,   302,   303,   313,   305,
     327,   314,   301,   332,   219,   320,   319,   324,   328,   310,
     333,   335,   336,   337,   338,    59,   282,   331,   316,   325,
     237,   223,     0,     0,     0,     0,     0,   158,     0,     0,
       0,     0,     0,     0,     0,     0,    86,     0,     0,    87,
       0,     0,     0,    91
};

static const yytype_int16 yycheck[] =
{
     106,   146,   166,    74,    72,    32,   131,    47,   204,     7,
      26,    40,   208,    42,    26,    26,    40,    46,    42,    17,
      18,    19,    20,    21,    40,    23,    24,    25,    40,    40,
      46,    34,    40,    49,    46,    46,    28,   108,    36,    45,
     146,    49,    41,    45,    47,   116,    48,    46,    40,    26,
      27,    28,    29,    30,    31,    47,   127,   128,    26,   255,
      28,    28,   168,    40,     4,    92,    34,   212,     0,    46,
      47,     5,     6,    40,    45,    46,   182,   117,    46,    47,
      40,    45,    42,   110,    40,    40,    46,    42,    40,   160,
      40,    46,    42,   161,   162,    40,    46,    46,   204,   170,
      45,    26,   208,    28,    40,    30,   212,    32,    33,    45,
     235,    40,    45,    42,     5,    40,    46,    46,     3,   244,
      40,    46,     7,     8,     9,    10,    11,    12,   292,    40,
      46,    16,    46,    44,    45,    45,    46,    45,    46,   207,
      45,    46,    38,    39,   308,    45,    46,    45,    46,   255,
      45,    46,    45,    46,   318,    13,   227,   228,   283,    45,
      46,    48,   326,    45,    46,   310,    45,    46,    40,    40,
      40,    46,    46,    40,    40,    48,    40,    40,    40,    10,
      45,    14,    42,    15,    22,    46,    45,   260,    45,    40,
      44,    46,    48,    46,    46,    45,    45,    40,    42,    45,
      48,    46,    49,    45,   310,    46,    40,    47,    37,    46,
      46,    46,   194,   110,    40,   225,    46,    45,    45,    35,
      44,    46,    45,    36,    46,    46,    46,    46,    46,    46,
      40,    46,    40,    45,    48,    46,    45,   252,    42,    46,
      46,    46,    44,    46,    45,    45,    40,    46,    46,    46,
      40,    40,    45,    40,    46,    46,    40,    40,    46,    45,
      40,    46,   285,    40,   187,    46,    48,    46,    46,    40,
      46,    46,    46,    46,    46,    43,   261,   322,   304,   317,
     211,   190,    -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    68,
      -1,    -1,    -1,    70
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    45,    51,    52,    54,     4,     0,    45,     5,     6,
      40,    69,    40,    46,    46,    53,    45,    45,    46,    70,
      72,    74,    78,    81,    86,    89,     5,     3,     7,     8,
       9,    10,    11,    12,    16,    85,    40,    40,    73,   131,
      71,    79,    82,    84,    75,   131,    40,    40,    46,   132,
      46,    48,    41,    46,    45,    46,    80,    46,    48,    80,
      83,    46,    48,    13,    61,    61,    55,    40,    40,    40,
      40,    40,    45,    10,    14,    87,    45,    46,    56,    57,
      59,    62,    63,    64,    66,    68,    70,    73,   133,   134,
     137,    82,    76,   137,    45,    45,   106,   108,   109,   110,
     111,   112,   113,   114,   115,   118,    15,    88,    17,    18,
      19,    20,    21,    23,    24,    25,    36,    60,    48,    42,
      46,    77,   131,    46,    40,    26,    27,    28,    29,    30,
      31,    40,    46,    47,    45,   118,   120,   121,   122,   123,
     124,   125,   126,   127,    46,   106,    58,    75,    22,    45,
      67,    44,   106,    61,    40,    48,   116,   107,   107,   106,
     106,    45,    45,   116,    40,    42,   117,    26,    28,    30,
      32,    33,    46,   128,    46,    45,    46,   125,    46,    40,
      45,    65,    47,    46,    46,    46,    38,    39,    90,    91,
     138,    40,    40,    42,    46,    46,   106,    46,    46,   106,
     137,   137,    46,   117,   119,    45,   118,    45,   106,    40,
      45,   129,    47,    40,    46,   118,    45,    95,    97,    95,
      46,    37,    92,   133,   135,    87,    46,    46,    46,    46,
      46,   120,    46,   137,   120,    40,    44,   129,   130,    45,
     125,    46,    44,    26,    40,    46,    45,    98,   100,    36,
      93,    48,    88,   106,   106,    46,    46,   116,    46,    44,
      46,    96,    45,   116,    26,    40,    46,    49,    45,   102,
      35,    94,    40,    90,    46,    46,   120,    46,    46,    67,
      45,    46,    97,    40,    46,    99,    49,    40,    26,    28,
      34,    46,    47,    45,   103,   105,    46,    46,   116,    45,
      46,   100,    40,    40,   101,    45,    42,   136,   117,    26,
      40,    46,    46,    46,    46,    46,   102,    34,    47,    48,
      46,   117,   104,   125,    46,   136,   117,    40,    46,    45,
      46,   105,    40,    46,   117,    46,    46,    46,    46
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    52,    53,    53,    53,    53,    53,
      53,    53,    53,    54,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    56,    57,    58,    58,    58,    59,
      60,    60,    61,    61,    62,    63,    64,    65,    65,    66,
      67,    67,    68,    69,    70,    71,    71,    72,    73,    73,
      73,    74,    75,    75,    75,    76,    76,    77,    78,    79,
      79,    80,    81,    82,    83,    83,    84,    84,    85,    85,
      86,    87,    87,    88,    88,    89,    90,    91,    91,    91,
      92,    92,    93,    93,    94,    94,    95,    95,    95,    96,
      96,    97,    97,    98,    98,    98,    99,    99,   100,   100,
     101,   101,   102,   102,   102,   102,   102,   102,   103,   103,
     103,   104,   104,   105,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   107,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   116,   116,   117,   117,   118,   119,
     119,   120,   120,   120,   120,   120,   120,   121,   122,   123,
     124,   125,   125,   126,   127,   128,   129,   129,   130,   130,
     131,   132,   132,   133,   134,   134,   135,   136,   137,   137,
     137,   138,   138
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     8,     2,     2,     2,     2,     2,
       2,     2,     0,    12,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     0,     4,     4,     2,     6,     0,     4,
       1,     1,     4,     0,     5,     4,     5,     1,     3,     4,
       6,     0,     4,     1,     4,     2,     0,     4,     0,     1,
       4,     4,     0,     1,     4,     2,     0,     3,     4,     2,
       0,     4,     4,     2,     3,     0,     2,     0,     1,     1,
       7,     2,     0,     2,     0,    13,     4,     2,     2,     0,
       2,     0,     2,     0,     2,     0,     2,     1,     4,     2,
       0,     4,     7,     2,     1,     4,     2,     0,     5,     5,
       2,     0,     2,     4,     5,     8,     4,     7,     2,     1,
       4,     2,     0,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     2,     4,     4,     4,     5,
       7,     7,     5,     2,     2,     0,     1,     1,     4,     2,
       0,     1,     1,     1,     1,     1,     1,     2,     4,     7,
       5,     1,     1,     4,     5,     1,     1,     4,     1,     1,
       2,     2,     0,     2,     2,     0,     3,     3,     0,     1,
       4,     2,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        YY_LAC_DISCARD ("YYBACKUP");                              \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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

/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return 1 if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYPTRDIFF_T *yycapacity, YYPTRDIFF_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yy_state_t **yybottom,
                      yy_state_t *yybottom_no_free,
                      yy_state_t **yytop, yy_state_t *yytop_empty)
{
  YYPTRDIFF_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYPTRDIFF_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYPTRDIFF_T yyalloc = 2 * yysize_new;
      yy_state_t *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        YY_CAST (yy_state_t *,
                 YYSTACK_ALLOC (YY_CAST (YYSIZE_T,
                                         yyalloc * YYSIZEOF (*yybottom_new))));
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                         \
do {                                                             \
  if (!yy_lac_established)                                       \
    {                                                            \
      YYDPRINTF ((stderr,                                        \
                  "LAC: initial context established for %s\n",   \
                  yytname[yytoken]));                            \
      yy_lac_established = 1;                                    \
      {                                                          \
        int yy_lac_status =                                      \
          yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken); \
        if (yy_lac_status == 2)                                  \
          goto yyexhaustedlab;                                   \
        if (yy_lac_status == 1)                                  \
          goto yyerrlab;                                         \
      }                                                          \
    }                                                            \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      if (yydebug)                                                       \
        YYFPRINTF (stderr, "LAC: initial context discarded due to "      \
                   Event "\n");                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return 2 if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yy_state_t *yyesa, yy_state_t **yyes,
        YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, int yytoken)
{
  yy_state_t *yyes_prev = yyssp;
  yy_state_t *yyesp = yyes_prev;
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yytname[yytoken]));
  if (yytoken == YYUNDEFTOK)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[+*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          yyrule = yydefact[+*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      {
        YYPTRDIFF_T yylen = yyr2[yyrule];
        YYDPRINTF ((stderr, " R%d", yyrule - 1));
        if (yyesp != yyes_prev)
          {
            YYPTRDIFF_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yylen -= yysize;
                yyesp = yyes_prev;
              }
          }
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      {
        yy_state_fast_t yystate;
        {
          const int yylhs = yyr1[yyrule] - YYNTOKENS;
          const int yyi = yypgoto[yylhs] + *yyesp;
          yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyesp
                     ? yytable[yyi]
                     : yydefgoto[yylhs]);
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            YY_IGNORE_USELESS_CAST_BEGIN
            *yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return 2;
              }
            YY_IGNORE_USELESS_CAST_BEGIN
            *++yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store or if
   yy_lac returned 2.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyesa, yy_state_t **yyes,
                YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          int yyx;

          for (yyx = 0; yyx < YYNTOKENS; ++yyx)
            if (yyx != YYTERROR && yyx != YYUNDEFTOK)
              {
                {
                  int yy_lac_status = yy_lac (yyesa, yyes, yyes_capacity,
                                              yyssp, yyx);
                  if (yy_lac_status == 2)
                    return 2;
                  if (yy_lac_status == 1)
                    continue;
                }
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
# if YYDEBUG
      else if (yydebug)
        YYFPRINTF (stderr, "No expected tokens.\n");
# endif
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

    yy_state_t yyesa[20];
    yy_state_t *yyes;
    YYPTRDIFF_T yyes_capacity;

  int yy_lac_established = 0;
  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  yyes = yyesa;
  yyes_capacity = 20;
  if (YYMAXDEPTH < yyes_capacity)
    yyes_capacity = YYMAXDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      YY_LAC_ESTABLISH;
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
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  YY_LAC_DISCARD ("shift");
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
  case 26:
#line 144 "src/hddl.y"
                          {
		if ((yyvsp[0].formula)->type != NOTATOM){ // just ignore not in the initial state
			assert((yyvsp[0].formula)->type == ATOM);
			map<string,string> access;
			// for each constant a new sort with a uniq name has been created. We access it here and retrieve its only element, the constant in questions
			for(auto x : (yyvsp[0].formula)->arguments.newVar) access[x.first] = *sorts[x.second].begin();  
			ground_literal l;
			l.positive = true;
			l.predicate = (yyvsp[0].formula)->predicate;
			for(string v : (yyvsp[0].formula)->arguments.vars) l.args.push_back(access[v]);
			init.push_back(l);
		}
	}
#line 2000 "src/hddl.cpp"
    break;

  case 27:
#line 157 "src/hddl.y"
                                        {
		assert((yyvsp[-2].formula)->type == ATOM);
		map<string,string> access;
		// for each constant a new sort with a uniq name has been created. We access it here and retrieve its only element, the constant in questions
		for(auto x : (yyvsp[-2].formula)->arguments.newVar) access[x.first] = *sorts[x.second].begin();
		ground_literal l;
		l.positive = true;
		l.predicate = (yyvsp[-2].formula)->predicate;
		for(string v : (yyvsp[-2].formula)->arguments.vars) l.args.push_back(access[v]);
		init_functions.push_back(std::make_pair(l,(yyvsp[-1].ival)));
	}
#line 2016 "src/hddl.cpp"
    break;

  case 29:
#line 169 "src/hddl.y"
                             {goal_formula = (yyvsp[-1].formula);}
#line 2022 "src/hddl.cpp"
    break;

  case 31:
#line 171 "src/hddl.y"
                              {assert(false); /*we don't support ti-htn yet*/}
#line 2028 "src/hddl.cpp"
    break;

  case 32:
#line 172 "src/hddl.y"
                                                                    {(yyval.vardecl) = (yyvsp[-1].vardecl);}
#line 2034 "src/hddl.cpp"
    break;

  case 33:
#line 172 "src/hddl.y"
                                                                                 {(yyval.vardecl) = new var_declaration(); }
#line 2040 "src/hddl.cpp"
    break;

  case 34:
#line 176 "src/hddl.y"
                    {
		parsed_method m;
		m.name = "__top_method";		
		string atName("__top"); // later for insertion into map
		m.vars = (yyvsp[-2].vardecl);
		m.prec = new general_formula(); m.prec->type = EMPTY;
		m.eff = new general_formula(); m.eff->type = EMPTY;
		m.tn = (yyvsp[-1].tasknetwork);
		parsed_methods[atName].push_back(m);

		parsed_task	top;
		top.name = "__top";
		top.arguments = new var_declaration();
		top.prec = new general_formula(); top.prec->type = EMPTY;
		top.eff = new general_formula(); top.eff->type = EMPTY;
		parsed_abstract.push_back(top);
}
#line 2062 "src/hddl.cpp"
    break;

  case 37:
#line 199 "src/hddl.y"
                    { metric_target = (yyvsp[0].sval); }
#line 2068 "src/hddl.cpp"
    break;

  case 38:
#line 200 "src/hddl.y"
                            { metric_target = (yyvsp[-1].sval); }
#line 2074 "src/hddl.cpp"
    break;

  case 45:
#line 221 "src/hddl.y"
                                         {string r((yyvsp[0].sval));
			 	if (r == ":typeof-predicate") has_typeof_predicate = true;
			 	if (r == ":method-preconditions-are-immediately-before") method_preconditions_are_immediately_before = true;
				}
#line 2083 "src/hddl.cpp"
    break;

  case 47:
#line 231 "src/hddl.y"
                                           { /*reverse list after all types have been parsed*/ reverse(sort_definitions.begin(), sort_definitions.end()); }
#line 2089 "src/hddl.cpp"
    break;

  case 49:
#line 233 "src/hddl.y"
                                              {	sort_definition s; s.has_parent_sort = false; s.declared_sorts = *((yyvsp[0].vstring)); delete (yyvsp[0].vstring);
			  				if (s.declared_sorts.size()) {
								sort_definitions.push_back(s);
								// touch constant map to ensure a consistent access
								for (string & ss : s.declared_sorts) {
									sorts[ss].size();
								}
							}
				}
#line 2103 "src/hddl.cpp"
    break;

  case 50:
#line 242 "src/hddl.y"
                                                                       {
							sort_definition s; s.has_parent_sort = true; s.parent_sort = (yyvsp[-1].sval); free((yyvsp[-1].sval));
							s.declared_sorts = *((yyvsp[-3].vstring)); delete (yyvsp[-3].vstring);
			  				sort_definitions.push_back(s);
							// touch constant map to ensure a consistent access
							for (string & ss : s.declared_sorts) sorts[ss].size();
							sorts[s.parent_sort].size();
							}
#line 2116 "src/hddl.cpp"
    break;

  case 53:
#line 258 "src/hddl.y"
                                                                        {
							for(unsigned int i = 0; i < (yyvsp[0].vstring)->size(); i++)
								sorts["object"].insert((*((yyvsp[0].vstring)))[i]);
							sortObjectNeeded = true;
						}
#line 2126 "src/hddl.cpp"
    break;

  case 54:
#line 263 "src/hddl.y"
                                                                                                                     {
							string type((yyvsp[-1].sval));
							for(unsigned int i = 0; i < (yyvsp[-3].vstring)->size(); i++){
								sorts[type].insert((*((yyvsp[-3].vstring)))[i]);
							}
						}
#line 2137 "src/hddl.cpp"
    break;

  case 57:
#line 273 "src/hddl.y"
                                                     {
						string type((yyvsp[0].sval));
						for(unsigned int i = 0; i < (yyvsp[-2].vstring)->size(); i++){
							sorts[type].insert((*((yyvsp[-2].vstring)))[i]);
						}
}
#line 2148 "src/hddl.cpp"
    break;

  case 59:
#line 285 "src/hddl.y"
                                                                           {predicate_definitions.push_back(*((yyvsp[0].preddecl))); delete (yyvsp[0].preddecl);}
#line 2154 "src/hddl.cpp"
    break;

  case 61:
#line 286 "src/hddl.y"
                                                               {
		(yyval.preddecl) = new predicate_definition();
		(yyval.preddecl)->name = (yyvsp[-2].sval);
		for (unsigned int i = 0; i < (yyvsp[-1].vardecl)->vars.size(); i++) (yyval.preddecl)->argument_sorts.push_back((yyvsp[-1].vardecl)->vars[i].second);
	}
#line 2164 "src/hddl.cpp"
    break;

  case 63:
#line 297 "src/hddl.y"
                                                                                           {
	char * type_of_functions = (yyvsp[0].sval);
	for (predicate_definition* p : *(yyvsp[-1].preddecllist)){
		parsed_functions.push_back(std::make_pair(*p,type_of_functions));
		delete p;
	}
	delete (yyvsp[-1].preddecllist);
}
#line 2177 "src/hddl.cpp"
    break;

  case 64:
#line 305 "src/hddl.y"
                                                                           { (yyval.sval) = (yyvsp[-1].sval); }
#line 2183 "src/hddl.cpp"
    break;

  case 65:
#line 305 "src/hddl.y"
                                                                                          { (yyval.sval) = strdup(numeric_funtion_type.c_str()); }
#line 2189 "src/hddl.cpp"
    break;

  case 66:
#line 307 "src/hddl.y"
                                                                         { (yyval.preddecllist)->push_back((yyvsp[0].preddecl)); }
#line 2195 "src/hddl.cpp"
    break;

  case 67:
#line 307 "src/hddl.y"
                                                                                                  { (yyval.preddecllist) = new std::vector<predicate_definition*>();}
#line 2201 "src/hddl.cpp"
    break;

  case 68:
#line 316 "src/hddl.y"
                         {(yyval.bval)=true;}
#line 2207 "src/hddl.cpp"
    break;

  case 69:
#line 316 "src/hddl.y"
                                                 {(yyval.bval)=false;}
#line 2213 "src/hddl.cpp"
    break;

  case 70:
#line 321 "src/hddl.y"
                                         {
				// found a new task, add it to list
				parsed_task t;
				t.name = (yyvsp[-4].sval);
				t.arguments = (yyvsp[-3].vardecl);
				t.prec = (yyvsp[-2].formula); 
				t.eff = (yyvsp[-1].formula);

				if ((yyvsp[-5].bval)) parsed_abstract.push_back(t); else parsed_primitive.push_back(t);
}
#line 2228 "src/hddl.cpp"
    break;

  case 71:
#line 332 "src/hddl.y"
                                         {(yyval.formula) = (yyvsp[0].formula);}
#line 2234 "src/hddl.cpp"
    break;

  case 72:
#line 332 "src/hddl.y"
                                                      {(yyval.formula) = new general_formula(); (yyval.formula)->type = EMPTY;}
#line 2240 "src/hddl.cpp"
    break;

  case 73:
#line 333 "src/hddl.y"
                                 {(yyval.formula) = (yyvsp[0].formula);}
#line 2246 "src/hddl.cpp"
    break;

  case 74:
#line 333 "src/hddl.y"
                                              {(yyval.formula) = new general_formula(); (yyval.formula)->type = EMPTY;}
#line 2252 "src/hddl.cpp"
    break;

  case 75:
#line 349 "src/hddl.y"
           {
		parsed_method m;
		m.name = (yyvsp[-10].sval);		
		string atName((yyvsp[-6].sval)); // later for insertion into map
		m.atArguments = (yyvsp[-5].varandconst)->vars; 
		m.newVarForAT = (yyvsp[-5].varandconst)->newVar;
		m.vars = (yyvsp[-9].vardecl);
		m.prec = (yyvsp[-3].formula);
		m.eff = (yyvsp[-2].formula);
		m.tn = (yyvsp[-1].tasknetwork);

		parsed_methods[atName].push_back(m);
	}
#line 2270 "src/hddl.cpp"
    break;

  case 76:
#line 378 "src/hddl.y"
                            {
	(yyval.tasknetwork) = new parsed_task_network();
	(yyval.tasknetwork)->tasks = *((yyvsp[-3].osubtasks)->second);
	(yyval.tasknetwork)->ordering = *((yyvsp[-2].spairlist));
	if ((yyvsp[-3].osubtasks)->first){
		if ((yyval.tasknetwork)->ordering.size()) assert(false); // given ordering but said that this is a total order
		for(unsigned int i = 1; i < (yyval.tasknetwork)->tasks.size(); i++){
			pair<string,string>* o = new pair<string,string>();
			o->first = (yyval.tasknetwork)->tasks[i-1]->id;
			o->second = (yyval.tasknetwork)->tasks[i]->id;
			(yyval.tasknetwork)->ordering.push_back(o);
		}
	}
	(yyval.tasknetwork)->constraint = (yyvsp[-1].formula);

	// TODO causal links?????
}
#line 2292 "src/hddl.cpp"
    break;

  case 77:
#line 396 "src/hddl.y"
                                                 {(yyval.osubtasks) = new pair<bool,vector<sub_task*>*>(); (yyval.osubtasks)->first = false; (yyval.osubtasks)->second = (yyvsp[0].subtasks); }
#line 2298 "src/hddl.cpp"
    break;

  case 78:
#line 397 "src/hddl.y"
                                                                       {(yyval.osubtasks) = new pair<bool,vector<sub_task*>*>(); (yyval.osubtasks)->first = true; (yyval.osubtasks)->second = (yyvsp[0].subtasks); }
#line 2304 "src/hddl.cpp"
    break;

  case 79:
#line 398 "src/hddl.y"
                                          {(yyval.osubtasks) = new pair<bool,vector<sub_task*>*>();
					   (yyval.osubtasks)->first = true; (yyval.osubtasks)->second = new vector<sub_task*>();}
#line 2311 "src/hddl.cpp"
    break;

  case 80:
#line 401 "src/hddl.y"
                                         {(yyval.spairlist) = (yyvsp[0].spairlist);}
#line 2317 "src/hddl.cpp"
    break;

  case 81:
#line 401 "src/hddl.y"
                                                     {(yyval.spairlist) = new vector<pair<string,string>*>();}
#line 2323 "src/hddl.cpp"
    break;

  case 82:
#line 402 "src/hddl.y"
                                                   {(yyval.formula) = (yyvsp[0].formula);}
#line 2329 "src/hddl.cpp"
    break;

  case 83:
#line 402 "src/hddl.y"
                                                                {(yyval.formula) = new general_formula(); (yyval.formula)->type = EMPTY;}
#line 2335 "src/hddl.cpp"
    break;

  case 86:
#line 413 "src/hddl.y"
                       {(yyval.subtasks) = new vector<sub_task*>();}
#line 2341 "src/hddl.cpp"
    break;

  case 87:
#line 414 "src/hddl.y"
                                        {(yyval.subtasks) = new vector<sub_task*>(); (yyval.subtasks)->push_back((yyvsp[0].subtask));}
#line 2347 "src/hddl.cpp"
    break;

  case 88:
#line 415 "src/hddl.y"
                                                             {(yyval.subtasks) = (yyvsp[-1].subtasks);}
#line 2353 "src/hddl.cpp"
    break;

  case 89:
#line 416 "src/hddl.y"
                                                {(yyval.subtasks) = (yyvsp[-1].subtasks); (yyval.subtasks)->push_back((yyvsp[0].subtask));}
#line 2359 "src/hddl.cpp"
    break;

  case 90:
#line 417 "src/hddl.y"
                                   {(yyval.subtasks) = new vector<sub_task*>();}
#line 2365 "src/hddl.cpp"
    break;

  case 91:
#line 418 "src/hddl.y"
                                               {(yyval.subtask) = new sub_task(); (yyval.subtask)->id = "__t_id_" + to_string(task_id_counter); task_id_counter++; (yyval.subtask)->task = (yyvsp[-2].sval); (yyval.subtask)->arguments = (yyvsp[-1].varandconst); }
#line 2371 "src/hddl.cpp"
    break;

  case 92:
#line 419 "src/hddl.y"
                                                                        {(yyval.subtask) = new sub_task(); (yyval.subtask)->id = (yyvsp[-5].sval); (yyval.subtask)->task = (yyvsp[-3].sval); (yyval.subtask)->arguments = (yyvsp[-2].varandconst); }
#line 2377 "src/hddl.cpp"
    break;

  case 93:
#line 427 "src/hddl.y"
                       {(yyval.spairlist) = new vector<pair<string,string>*>();}
#line 2383 "src/hddl.cpp"
    break;

  case 94:
#line 428 "src/hddl.y"
                                          {(yyval.spairlist) = new vector<pair<string,string>*>(); (yyval.spairlist)->push_back((yyvsp[0].spair));}
#line 2389 "src/hddl.cpp"
    break;

  case 95:
#line 429 "src/hddl.y"
                                                               {(yyval.spairlist) = (yyvsp[-1].spairlist);}
#line 2395 "src/hddl.cpp"
    break;

  case 96:
#line 430 "src/hddl.y"
                                                  {(yyval.spairlist) = (yyvsp[-1].spairlist); (yyval.spairlist)->push_back((yyvsp[0].spair));}
#line 2401 "src/hddl.cpp"
    break;

  case 97:
#line 431 "src/hddl.y"
                                   {(yyval.spairlist) = new vector<pair<string,string>*>();}
#line 2407 "src/hddl.cpp"
    break;

  case 98:
#line 432 "src/hddl.y"
                                     {(yyval.spair) = new pair<string,string>(); (yyval.spair)->first = (yyvsp[-3].sval); (yyval.spair)->second = (yyvsp[-1].sval);}
#line 2413 "src/hddl.cpp"
    break;

  case 99:
#line 433 "src/hddl.y"
                                                 {(yyval.spair) = new pair<string,string>(); (yyval.spair)->first = (yyvsp[-2].sval); (yyval.spair)->second = (yyvsp[-1].sval);}
#line 2419 "src/hddl.cpp"
    break;

  case 100:
#line 440 "src/hddl.y"
                                                        {(yyval.formulae) = (yyvsp[-1].formulae); (yyval.formulae)->push_back((yyvsp[0].formula));}
#line 2425 "src/hddl.cpp"
    break;

  case 101:
#line 441 "src/hddl.y"
                                      {(yyval.formulae) = new vector<general_formula*>();}
#line 2431 "src/hddl.cpp"
    break;

  case 102:
#line 442 "src/hddl.y"
                         {(yyval.formula) = new general_formula(); (yyval.formula)->type = EMPTY;}
#line 2437 "src/hddl.cpp"
    break;

  case 103:
#line 443 "src/hddl.y"
                                                                      {(yyval.formula) = new general_formula(); (yyval.formula)->type=AND; (yyval.formula)->subformulae = *((yyvsp[-1].formulae));}
#line 2443 "src/hddl.cpp"
    break;

  case 104:
#line 444 "src/hddl.y"
                                                                        {(yyval.formula) = new general_formula(); (yyval.formula)->type = EQUAL; (yyval.formula)->arg1 = (yyvsp[-2].sval); (yyval.formula)->arg2 = (yyvsp[-1].sval);}
#line 2449 "src/hddl.cpp"
    break;

  case 105:
#line 445 "src/hddl.y"
                                                                                        {(yyval.formula) = new general_formula(); (yyval.formula)->type = NOTEQUAL; (yyval.formula)->arg1 = (yyvsp[-3].sval); (yyval.formula)->arg2 = (yyvsp[-2].sval);}
#line 2455 "src/hddl.cpp"
    break;

  case 106:
#line 446 "src/hddl.y"
                                               {(yyval.formula) = new general_formula(); (yyval.formula)->type = OFSORT; (yyval.formula)->arg1 = (yyvsp[-1].vardecl)->vars[0].first; (yyval.formula)->arg2 = (yyvsp[-1].vardecl)->vars[0].second; }
#line 2461 "src/hddl.cpp"
    break;

  case 107:
#line 447 "src/hddl.y"
                                                                {(yyval.formula) = new general_formula(); (yyval.formula)->type = NOTOFSORT; (yyval.formula)->arg1 = (yyvsp[-2].vardecl)->vars[0].first; (yyval.formula)->arg2 = (yyvsp[-2].vardecl)->vars[0].second; }
#line 2467 "src/hddl.cpp"
    break;

  case 114:
#line 462 "src/hddl.y"
               {(yyval.formula) = (yyvsp[0].formula);}
#line 2473 "src/hddl.cpp"
    break;

  case 115:
#line 463 "src/hddl.y"
                         {(yyval.formula) = (yyvsp[0].formula);}
#line 2479 "src/hddl.cpp"
    break;

  case 116:
#line 464 "src/hddl.y"
                      {(yyval.formula) = (yyvsp[0].formula);}
#line 2485 "src/hddl.cpp"
    break;

  case 117:
#line 465 "src/hddl.y"
                         {(yyval.formula) = (yyvsp[0].formula);}
#line 2491 "src/hddl.cpp"
    break;

  case 118:
#line 466 "src/hddl.y"
                        {(yyval.formula) = (yyvsp[0].formula);}
#line 2497 "src/hddl.cpp"
    break;

  case 119:
#line 467 "src/hddl.y"
                        {(yyval.formula) = (yyvsp[0].formula);}
#line 2503 "src/hddl.cpp"
    break;

  case 120:
#line 468 "src/hddl.y"
                         {(yyval.formula) = (yyvsp[0].formula);}
#line 2509 "src/hddl.cpp"
    break;

  case 121:
#line 469 "src/hddl.y"
                       {(yyval.formula) = (yyvsp[0].formula);}
#line 2515 "src/hddl.cpp"
    break;

  case 122:
#line 470 "src/hddl.y"
                                 {(yyval.formula) = (yyvsp[0].formula);}
#line 2521 "src/hddl.cpp"
    break;

  case 123:
#line 472 "src/hddl.y"
                     {(yyval.formulae) = (yyvsp[-1].formulae); (yyval.formulae)->push_back((yyvsp[0].formula));}
#line 2527 "src/hddl.cpp"
    break;

  case 124:
#line 473 "src/hddl.y"
                  {(yyval.formulae) = new vector<general_formula*>();}
#line 2533 "src/hddl.cpp"
    break;

  case 125:
#line 475 "src/hddl.y"
                   {(yyval.formula) = new general_formula(); (yyval.formula)->type=EMPTY;}
#line 2539 "src/hddl.cpp"
    break;

  case 126:
#line 476 "src/hddl.y"
                                        {(yyval.formula) = new general_formula(); (yyval.formula)->type=AND; (yyval.formula)->subformulae = *((yyvsp[-1].formulae));}
#line 2545 "src/hddl.cpp"
    break;

  case 127:
#line 477 "src/hddl.y"
                                       {(yyval.formula) = new general_formula(); (yyval.formula)->type=OR; (yyval.formula)->subformulae = *((yyvsp[-1].formulae));}
#line 2551 "src/hddl.cpp"
    break;

  case 128:
#line 478 "src/hddl.y"
                                 {(yyval.formula) = (yyvsp[-1].formula); (yyval.formula)->negate();}
#line 2557 "src/hddl.cpp"
    break;

  case 129:
#line 479 "src/hddl.y"
                                         {(yyval.formula) = new general_formula(); (yyval.formula)->type=OR; (yyvsp[-2].formula)->negate(); (yyval.formula)->subformulae.push_back((yyvsp[-2].formula)); (yyval.formula)->subformulae.push_back((yyvsp[-1].formula));}
#line 2563 "src/hddl.cpp"
    break;

  case 130:
#line 480 "src/hddl.y"
                                                                          {(yyval.formula) = new general_formula(); (yyval.formula)->type = EXISTS; (yyval.formula)->subformulae.push_back((yyvsp[-1].formula)); (yyval.formula)->qvariables = *((yyvsp[-3].vardecl));}
#line 2569 "src/hddl.cpp"
    break;

  case 131:
#line 481 "src/hddl.y"
                                                                        {(yyval.formula) = new general_formula(); (yyval.formula)->type = FORALL; (yyval.formula)->subformulae.push_back((yyvsp[-1].formula)); (yyval.formula)->qvariables = *((yyvsp[-3].vardecl));}
#line 2575 "src/hddl.cpp"
    break;

  case 132:
#line 482 "src/hddl.y"
                                                               {(yyval.formula) = new general_formula(); (yyval.formula)->type = EQUAL; (yyval.formula)->arg1 = (yyvsp[-2].sval); (yyval.formula)->arg2 = (yyvsp[-1].sval);}
#line 2581 "src/hddl.cpp"
    break;

  case 133:
#line 484 "src/hddl.y"
                                             {
						(yyval.varandconst) = (yyvsp[-1].varandconst);
						string c((yyvsp[0].sval)); string s = "sort_for_" + c; string v = "?var_for_" + c;
						sorts[s].insert(c);
						(yyval.varandconst)->vars.push_back(v);
						(yyval.varandconst)->newVar.insert(make_pair(v,s));
					}
#line 2593 "src/hddl.cpp"
    break;

  case 134:
#line 491 "src/hddl.y"
                                                                     {(yyval.varandconst) = (yyvsp[-1].varandconst); string s((yyvsp[0].sval)); (yyval.varandconst)->vars.push_back(s);}
#line 2599 "src/hddl.cpp"
    break;

  case 135:
#line 492 "src/hddl.y"
                                          {(yyval.varandconst) = new var_and_const();}
#line 2605 "src/hddl.cpp"
    break;

  case 136:
#line 494 "src/hddl.y"
                    {(yyval.sval)=(yyvsp[0].sval);}
#line 2611 "src/hddl.cpp"
    break;

  case 137:
#line 494 "src/hddl.y"
                                       {(yyval.sval)=(yyvsp[0].sval);}
#line 2617 "src/hddl.cpp"
    break;

  case 138:
#line 495 "src/hddl.y"
                                              {(yyval.formula) = new general_formula(); (yyval.formula)->type=ATOM;
			   								   (yyval.formula)->predicate = (yyvsp[-2].sval); (yyval.formula)->arguments = *((yyvsp[-1].varandconst));
											  }
#line 2625 "src/hddl.cpp"
    break;

  case 139:
#line 506 "src/hddl.y"
                                {(yyval.formulae) = (yyvsp[-1].formulae); (yyval.formulae)->push_back((yyvsp[0].formula));}
#line 2631 "src/hddl.cpp"
    break;

  case 140:
#line 507 "src/hddl.y"
                  {(yyval.formulae) = new vector<general_formula*>();}
#line 2637 "src/hddl.cpp"
    break;

  case 141:
#line 509 "src/hddl.y"
                   {(yyval.formula) = (yyvsp[0].formula);}
#line 2643 "src/hddl.cpp"
    break;

  case 142:
#line 510 "src/hddl.y"
                             {(yyval.formula) = (yyvsp[0].formula);}
#line 2649 "src/hddl.cpp"
    break;

  case 143:
#line 511 "src/hddl.y"
                           {(yyval.formula) = (yyvsp[0].formula);}
#line 2655 "src/hddl.cpp"
    break;

  case 144:
#line 512 "src/hddl.y"
                             {(yyval.formula) = (yyvsp[0].formula);}
#line 2661 "src/hddl.cpp"
    break;

  case 145:
#line 513 "src/hddl.y"
                     {(yyval.formula) = (yyvsp[0].formula);}
#line 2667 "src/hddl.cpp"
    break;

  case 146:
#line 514 "src/hddl.y"
                      {(yyval.formula) = (yyvsp[0].formula);}
#line 2673 "src/hddl.cpp"
    break;

  case 147:
#line 516 "src/hddl.y"
                    {(yyval.formula) = new general_formula(); (yyval.formula)->type=EMPTY;}
#line 2679 "src/hddl.cpp"
    break;

  case 148:
#line 517 "src/hddl.y"
                                              {(yyval.formula) = new general_formula(); (yyval.formula)->type=AND; (yyval.formula)->subformulae = *((yyvsp[-1].formulae));}
#line 2685 "src/hddl.cpp"
    break;

  case 149:
#line 518 "src/hddl.y"
                                                                            {(yyval.formula) = new general_formula(); (yyval.formula)->type = FORALL; (yyval.formula)->subformulae.push_back((yyvsp[-1].formula)); (yyval.formula)->qvariables = *((yyvsp[-3].vardecl));}
#line 2691 "src/hddl.cpp"
    break;

  case 150:
#line 519 "src/hddl.y"
                                             {(yyval.formula) = new general_formula(); (yyval.formula)->type=WHEN; (yyval.formula)->subformulae.push_back((yyvsp[-2].formula)); (yyval.formula)->subformulae.push_back((yyvsp[-1].formula));}
#line 2697 "src/hddl.cpp"
    break;

  case 151:
#line 522 "src/hddl.y"
                             {(yyval.formula) = (yyvsp[0].formula);}
#line 2703 "src/hddl.cpp"
    break;

  case 152:
#line 522 "src/hddl.y"
                                                         {(yyval.formula) = (yyvsp[0].formula);}
#line 2709 "src/hddl.cpp"
    break;

  case 153:
#line 523 "src/hddl.y"
                                                    {(yyval.formula) = (yyvsp[-1].formula); (yyval.formula)->negate();}
#line 2715 "src/hddl.cpp"
    break;

  case 154:
#line 527 "src/hddl.y"
                                          {(yyval.formula) = new general_formula(); (yyval.formula)->type=COST_CHANGE; (yyval.formula)->subformulae.push_back((yyvsp[-2].formula)); (yyval.formula)->subformulae.push_back((yyvsp[-1].formula)); }
#line 2721 "src/hddl.cpp"
    break;

  case 156:
#line 529 "src/hddl.y"
              { (yyval.formula) = new general_formula(); (yyval.formula)->type = COST; (yyval.formula)->predicate = (yyvsp[0].sval); 
if (metric_target == dummy_function_type) metric_target = (yyvsp[0].sval);	   
}
#line 2729 "src/hddl.cpp"
    break;

  case 157:
#line 532 "src/hddl.y"
                                        { (yyval.formula) = new general_formula(); (yyval.formula)->type = COST; (yyval.formula)->predicate = (yyvsp[-2].sval); (yyval.formula)->arguments = *((yyvsp[-1].varandconst));
if (metric_target == dummy_function_type) metric_target = (yyvsp[-2].sval);	   
}
#line 2737 "src/hddl.cpp"
    break;

  case 158:
#line 535 "src/hddl.y"
            { (yyval.formula) = new general_formula(); (yyval.formula)->type = VALUE; (yyval.formula)->value = (yyvsp[0].ival); }
#line 2743 "src/hddl.cpp"
    break;

  case 159:
#line 536 "src/hddl.y"
               { (yyval.formula) = (yyvsp[0].formula); }
#line 2749 "src/hddl.cpp"
    break;

  case 160:
#line 540 "src/hddl.y"
                                    {string s((yyvsp[-1].sval)); free((yyvsp[-1].sval)); (yyval.vstring) = (yyvsp[0].vstring); (yyval.vstring)->push_back(s);}
#line 2755 "src/hddl.cpp"
    break;

  case 161:
#line 542 "src/hddl.y"
                          {string s((yyvsp[0].sval)); free((yyvsp[0].sval)); (yyval.vstring)->push_back(s);}
#line 2761 "src/hddl.cpp"
    break;

  case 162:
#line 543 "src/hddl.y"
                           {(yyval.vstring) = new vector<string>();}
#line 2767 "src/hddl.cpp"
    break;

  case 163:
#line 548 "src/hddl.y"
                                                {string s((yyvsp[0].sval)); free((yyvsp[0].sval)); (yyval.vstring)->push_back(s);}
#line 2773 "src/hddl.cpp"
    break;

  case 164:
#line 549 "src/hddl.y"
                                      {string s((yyvsp[0].sval)); free((yyvsp[0].sval)); (yyval.vstring)->push_back(s);}
#line 2779 "src/hddl.cpp"
    break;

  case 165:
#line 550 "src/hddl.y"
                           {(yyval.vstring) = new vector<string>();}
#line 2785 "src/hddl.cpp"
    break;

  case 166:
#line 554 "src/hddl.y"
                                              {
		   	(yyval.vardecl) = new var_declaration;
			string t((yyvsp[0].sval));
			for (unsigned int i = 0; i < (yyvsp[-2].vstring)->size(); i++)
				(yyval.vardecl)->vars.push_back(make_pair((*((yyvsp[-2].vstring)))[i],t));
			}
#line 2796 "src/hddl.cpp"
    break;

  case 167:
#line 560 "src/hddl.y"
                              { (yyval.vardecl) = new var_declaration; string v((yyvsp[-2].sval)); string t((yyvsp[0].sval)); (yyval.vardecl)->vars.push_back(make_pair(v,t));}
#line 2802 "src/hddl.cpp"
    break;

  case 168:
#line 562 "src/hddl.y"
                             {(yyval.vardecl) = new var_declaration;}
#line 2808 "src/hddl.cpp"
    break;

  case 169:
#line 563 "src/hddl.y"
                                                                          {
							sortObjectNeeded = true;
		   					(yyval.vardecl) = new var_declaration;
							for (unsigned int i = 0; i < (yyvsp[0].vstring)->size(); i++)
								(yyval.vardecl)->vars.push_back(make_pair((*((yyvsp[0].vstring)))[i],"object"));
							}
#line 2819 "src/hddl.cpp"
    break;

  case 170:
#line 569 "src/hddl.y"
                                                                                                  {
						   	(yyval.vardecl) = new var_declaration;
							string t((yyvsp[-1].sval));
							for (unsigned int i = 0; i < (yyvsp[-3].vstring)->size(); i++)
								(yyval.vardecl)->vars.push_back(make_pair((*((yyvsp[-3].vstring)))[i],t));
							for (const auto & declaration : (yyvsp[0].vardecl)->vars)
								(yyval.vardecl)->vars.push_back(declaration);	
						}
#line 2832 "src/hddl.cpp"
    break;

  case 171:
#line 578 "src/hddl.y"
                                           {
			   		(yyval.vardecl) = (yyvsp[-1].vardecl);
					for (unsigned int i = 0; i < (yyvsp[0].vardecl)->vars.size(); i++) (yyval.vardecl)->vars.push_back((yyvsp[0].vardecl)->vars[i]);
					delete (yyvsp[0].vardecl);
				}
#line 2842 "src/hddl.cpp"
    break;

  case 172:
#line 583 "src/hddl.y"
                             {(yyval.vardecl) = new var_declaration;}
#line 2848 "src/hddl.cpp"
    break;


#line 2852 "src/hddl.cpp"

        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyesa, &yyes, &yyes_capacity, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 586 "src/hddl.y"

void run_parser_on_file(FILE* f, char* filename){
	current_parser_file_name = filename;
	yyin = f;
	yyparse();


	if (sortObjectNeeded){
		sort_definition s;
		s.has_parent_sort = false;
		s.declared_sorts.push_back("object");
		sort_definitions.push_back(s);
	}
}

void yyerror(const char *s) {
  cout << "\x1b[31mParse error\x1b[0m in file " << current_parser_file_name << " in line \x1b[1m" << yylloc.first_line << "\x1b[0m" << endl;
  if (strlen(s) >= 14 && (strncmp("syntax error, ",s,14) == 0)){
    s += 14;
  }
  cout << s << endl;
  // might as well halt now:
  exit(-1);
}
