/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         quickstep_yyparse
#define yylex           quickstep_yylex
#define yyerror         quickstep_yyerror
#define yydebug         quickstep_yydebug
#define yynerrs         quickstep_yynerrs


/* Copy the first part of user declarations.  */
#line 33 "../SqlParser.ypp" /* yacc.c:339  */


/* Override the default definition, as we only need <first_line> and <first_column>. */
typedef struct YYLTYPE {
  int first_line;
  int first_column;
} YYLTYPE;

#define YYLTYPE_IS_DECLARED 1

/*
 * Modified from the default YYLLOC_DEFAULT
 * (http://www.gnu.org/software/bison/manual/html_node/Location-Default-Action.html).
 * The assignments for last_line and last_column are removed as they are not used.
 */
#define YYLLOC_DEFAULT(current, rhs, n)                         \
  do {                                                          \
    if (n) {                                                    \
      (current).first_line   = YYRHSLOC(rhs, 1).first_line;     \
      (current).first_column = YYRHSLOC(rhs, 1).first_column;   \
    } else {                                                    \
      /* empty RHS */                                           \
      (current).first_line = YYRHSLOC(rhs, 0).first_line;       \
      (current).first_column = YYRHSLOC(rhs, 0).first_column;   \
    }                                                           \
  } while (0)

#line 62 "../SqlParser.ypp" /* yacc.c:339  */

#include <cstdlib>
#include <string>
#include <utility>

#include "parser/ParseAssignment.hpp"
#include "parser/ParseAttributeDefinition.hpp"
#include "parser/ParseBasicExpressions.hpp"
#include "parser/ParseBlockProperties.hpp"
#include "parser/ParseExpression.hpp"
#include "parser/ParseGroupBy.hpp"
#include "parser/ParseHaving.hpp"
#include "parser/ParseLimit.hpp"
#include "parser/ParseLiteralValue.hpp"
#include "parser/ParseOrderBy.hpp"
#include "parser/ParsePredicate.hpp"
#include "parser/ParserUtil.hpp"
#include "parser/ParseSelect.hpp"
#include "parser/ParseSelectionClause.hpp"
#include "parser/ParseSimpleTableReference.hpp"
#include "parser/ParseStatement.hpp"
#include "parser/ParseString.hpp"
#include "parser/ParseSubqueryExpression.hpp"
#include "parser/ParseSubqueryTableReference.hpp"
#include "parser/ParseTableReference.hpp"
#include "types/Type.hpp"
#include "types/TypeFactory.hpp"
#include "types/TypeID.hpp"
#include "types/operations/binary_operations/BinaryOperation.hpp"
#include "types/operations/binary_operations/BinaryOperationFactory.hpp"
#include "types/operations/binary_operations/BinaryOperationID.hpp"
#include "types/operations/comparisons/Comparison.hpp"
#include "types/operations/comparisons/ComparisonFactory.hpp"
#include "types/operations/comparisons/ComparisonID.hpp"
#include "types/operations/unary_operations/UnaryOperation.hpp"
#include "types/operations/unary_operations/UnaryOperationFactory.hpp"
#include "types/operations/unary_operations/UnaryOperationID.hpp"
#include "utility/PtrList.hpp"
#include "utility/PtrVector.hpp"

// Needed for Bison 2.6 and higher, which do not automatically provide this typedef.
typedef void* yyscan_t;

#line 144 "SqlParser_gen.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "SqlParser_gen.hpp".  */
#ifndef YY_QUICKSTEP_YY_SQLPARSER_GEN_HPP_INCLUDED
# define YY_QUICKSTEP_YY_SQLPARSER_GEN_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int quickstep_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOKEN_NAME = 258,
    TOKEN_STRING_SINGLE_QUOTED = 259,
    TOKEN_STRING_DOUBLE_QUOTED = 260,
    TOKEN_UNSIGNED_NUMVAL = 261,
    TOKEN_OR = 262,
    TOKEN_AND = 263,
    TOKEN_NOT = 264,
    TOKEN_EQ = 265,
    TOKEN_LT = 266,
    TOKEN_LEQ = 267,
    TOKEN_GT = 268,
    TOKEN_GEQ = 269,
    TOKEN_NEQ = 270,
    TOKEN_LIKE = 271,
    TOKEN_BETWEEN = 272,
    TOKEN_IS = 273,
    UNARY_PLUS = 274,
    UNARY_MINUS = 275,
    TOKEN_ADD = 276,
    TOKEN_ALL = 277,
    TOKEN_ALTER = 278,
    TOKEN_AS = 279,
    TOKEN_ASC = 280,
    TOKEN_BLOCKPROPERTIES = 281,
    TOKEN_BIGINT = 282,
    TOKEN_BIT = 283,
    TOKEN_BY = 284,
    TOKEN_CHARACTER = 285,
    TOKEN_CHECK = 286,
    TOKEN_COLUMN = 287,
    TOKEN_COMPRESS = 288,
    TOKEN_CONSTRAINT = 289,
    TOKEN_COPY = 290,
    TOKEN_CREATE = 291,
    TOKEN_DATE = 292,
    TOKEN_DATETIME = 293,
    TOKEN_DECIMAL = 294,
    TOKEN_DEFAULT = 295,
    TOKEN_DELETE = 296,
    TOKEN_DELIMITER = 297,
    TOKEN_DESC = 298,
    TOKEN_DISTINCT = 299,
    TOKEN_DOUBLE = 300,
    TOKEN_DROP = 301,
    TOKEN_ESCAPE_STRINGS = 302,
    TOKEN_FALSE = 303,
    TOKEN_FIRST = 304,
    TOKEN_FLOAT = 305,
    TOKEN_FOREIGN = 306,
    TOKEN_FROM = 307,
    TOKEN_FULL = 308,
    TOKEN_GROUP = 309,
    TOKEN_HAVING = 310,
    TOKEN_INNER = 311,
    TOKEN_INSERT = 312,
    TOKEN_INTEGER = 313,
    TOKEN_INTERVAL = 314,
    TOKEN_INTO = 315,
    TOKEN_JOIN = 316,
    TOKEN_KEY = 317,
    TOKEN_LAST = 318,
    TOKEN_LEFT = 319,
    TOKEN_LIMIT = 320,
    TOKEN_LONG = 321,
    TOKEN_NULL = 322,
    TOKEN_NULLS = 323,
    TOKEN_OFF = 324,
    TOKEN_ON = 325,
    TOKEN_ORDER = 326,
    TOKEN_OUTER = 327,
    TOKEN_PRIMARY = 328,
    TOKEN_QUIT = 329,
    TOKEN_REAL = 330,
    TOKEN_REFERENCES = 331,
    TOKEN_RIGHT = 332,
    TOKEN_ROW_DELIMITER = 333,
    TOKEN_SELECT = 334,
    TOKEN_SET = 335,
    TOKEN_SMALLINT = 336,
    TOKEN_SORT = 337,
    TOKEN_TABLE = 338,
    TOKEN_TIME = 339,
    TOKEN_TIMESTAMP = 340,
    TOKEN_TRUE = 341,
    TOKEN_TYPE = 342,
    TOKEN_UNIQUE = 343,
    TOKEN_UPDATE = 344,
    TOKEN_VALUES = 345,
    TOKEN_VARCHAR = 346,
    TOKEN_WHERE = 347,
    TOKEN_WITH = 348,
    TOKEN_YEARMONTH = 349,
    TOKEN_EOF = 350,
    TOKEN_LEX_ERROR = 351
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 106 "../SqlParser.ypp" /* yacc.c:355  */

  quickstep::ParseString *string_value_;

  quickstep::PtrList<quickstep::ParseString> *string_list_;

  bool boolean_value_;

  quickstep::NumericParseLiteralValue *numeric_literal_value_;
  quickstep::ParseLiteralValue *literal_value_;
  quickstep::PtrList<quickstep::ParseScalarLiteral> *literal_value_list_;

  quickstep::ParseExpression *expression_;

  quickstep::ParseScalarLiteral *scalar_literal_;
  quickstep::ParseAttribute *attribute_;

  quickstep::ParsePredicate *predicate_;

  quickstep::ParseSubqueryExpression *subquery_expression_;

  quickstep::ParseSelectionClause *selection_;
  quickstep::ParseSelectionItem *selection_item_;
  quickstep::ParseSelectionList *selection_list_;

  quickstep::ParseTableReference *table_reference_;
  quickstep::PtrList<quickstep::ParseTableReference> *table_reference_list_;
  quickstep::ParseTableReferenceSignature *table_reference_signature_;

  quickstep::ParseDataType *data_type_;
  quickstep::ParseAttributeDefinition *attribute_definition_;
  quickstep::ParseColumnConstraint *column_constraint_;
  quickstep::PtrList<quickstep::ParseColumnConstraint> *column_constraint_list_;
  quickstep::PtrList<quickstep::ParseAttributeDefinition> *attribute_definition_list_;

  quickstep::ParseCopyFromParams *copy_from_params_;

  quickstep::ParseAssignment *assignment_;
  quickstep::PtrList<quickstep::ParseAssignment> *assignment_list_;

  quickstep::ParseStatement *statement_;
  quickstep::ParseStatementSelect *select_statement_;
  quickstep::ParseStatementUpdate *update_statement_;
  quickstep::ParseStatementInsert *insert_statement_;
  quickstep::ParseStatementDelete *delete_statement_;
  quickstep::ParseStatementCopyFrom *copy_from_statement_;
  quickstep::ParseStatementCreateTable *create_table_statement_;
  quickstep::ParseStatementDropTable *drop_table_statement_;
  quickstep::ParseStatementQuit *quit_statement_;

  quickstep::ParseBlockProperties *block_properties_;
  quickstep::ParseBlockPropertyItem *block_property_item_;
  quickstep::PtrList<quickstep::ParseBlockPropertyItem> *block_property_item_list_;

  const quickstep::Comparison *comparison_;
  const quickstep::UnaryOperation *unary_operation_;
  const quickstep::BinaryOperation *binary_operation_;

  quickstep::ParseFunctionCall *function_call_;
  quickstep::PtrList<quickstep::ParseExpression> *expression_list_;

  quickstep::ParseSelect *select_query_;
  quickstep::ParseGroupBy *opt_group_by_clause_;
  quickstep::ParseHaving *opt_having_clause_;
  quickstep::ParseOrderBy *opt_order_by_clause_;
  bool *order_direction_;
  quickstep::ParseLimit *opt_limit_clause_;

  quickstep::PtrList<quickstep::ParseOrderByItem> *order_commalist_;
  quickstep::ParseOrderByItem *order_item_;

  quickstep::PtrVector<quickstep::ParseSubqueryTableReference> *with_list_;
  quickstep::ParseSubqueryTableReference *with_list_element_;

#line 355 "SqlParser_gen.cpp" /* yacc.c:355  */
};
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



int quickstep_yyparse (yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement);

#endif /* !YY_QUICKSTEP_YY_SQLPARSER_GEN_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 180 "../SqlParser.ypp" /* yacc.c:358  */

/* This header needs YYSTYPE, which is defined by the %union directive above */
#include "SqlLexer_gen.hpp"
void NotSupported(const YYLTYPE *location, yyscan_t yyscanner, const std::string &feature);

#line 388 "SqlParser_gen.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  37
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   826

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  106
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  201
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  393

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   351

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     103,   104,    21,    19,   105,    20,    25,    22,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   102,
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
      15,    16,    17,    18,    23,    24,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   477,   477,   481,   485,   488,   495,   498,   501,   504,
     507,   510,   513,   516,   519,   525,   531,   538,   544,   551,
     560,   565,   570,   575,   579,   585,   590,   593,   596,   601,
     604,   607,   610,   613,   616,   619,   622,   625,   628,   640,
     643,   646,   664,   684,   687,   690,   695,   700,   706,   712,
     721,   725,   731,   734,   739,   744,   749,   756,   763,   767,
     773,   776,   781,   784,   789,   793,   799,   803,   807,   811,
     817,   825,   830,   835,   838,   843,   847,   851,   855,   861,
     866,   871,   875,   881,   887,   892,   895,   900,   904,   910,
     916,   922,   925,   929,   935,   938,   943,   947,   953,   956,
     959,   964,   969,   972,   978,   982,   988,   994,  1000,  1006,
    1012,  1018,  1024,  1030,  1038,  1043,  1047,  1051,  1056,  1059,
    1064,  1067,  1072,  1076,  1082,  1085,  1090,  1093,  1098,  1101,
    1106,  1109,  1128,  1132,  1138,  1145,  1148,  1151,  1156,  1159,
    1162,  1168,  1171,  1176,  1181,  1190,  1195,  1204,  1209,  1212,
    1217,  1220,  1225,  1231,  1237,  1244,  1247,  1254,  1257,  1262,
    1265,  1270,  1273,  1278,  1281,  1284,  1287,  1292,  1296,  1300,
    1305,  1309,  1315,  1318,  1321,  1324,  1336,  1340,  1359,  1374,
    1378,  1384,  1387,  1393,  1396,  1399,  1402,  1405,  1408,  1413,
    1424,  1427,  1432,  1435,  1441,  1445,  1451,  1454,  1462,  1465,
    1468,  1471
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOKEN_NAME",
  "TOKEN_STRING_SINGLE_QUOTED", "TOKEN_STRING_DOUBLE_QUOTED",
  "TOKEN_UNSIGNED_NUMVAL", "TOKEN_OR", "TOKEN_AND", "TOKEN_NOT",
  "TOKEN_EQ", "TOKEN_LT", "TOKEN_LEQ", "TOKEN_GT", "TOKEN_GEQ",
  "TOKEN_NEQ", "TOKEN_LIKE", "TOKEN_BETWEEN", "TOKEN_IS", "'+'", "'-'",
  "'*'", "'/'", "UNARY_PLUS", "UNARY_MINUS", "'.'", "TOKEN_ADD",
  "TOKEN_ALL", "TOKEN_ALTER", "TOKEN_AS", "TOKEN_ASC",
  "TOKEN_BLOCKPROPERTIES", "TOKEN_BIGINT", "TOKEN_BIT", "TOKEN_BY",
  "TOKEN_CHARACTER", "TOKEN_CHECK", "TOKEN_COLUMN", "TOKEN_COMPRESS",
  "TOKEN_CONSTRAINT", "TOKEN_COPY", "TOKEN_CREATE", "TOKEN_DATE",
  "TOKEN_DATETIME", "TOKEN_DECIMAL", "TOKEN_DEFAULT", "TOKEN_DELETE",
  "TOKEN_DELIMITER", "TOKEN_DESC", "TOKEN_DISTINCT", "TOKEN_DOUBLE",
  "TOKEN_DROP", "TOKEN_ESCAPE_STRINGS", "TOKEN_FALSE", "TOKEN_FIRST",
  "TOKEN_FLOAT", "TOKEN_FOREIGN", "TOKEN_FROM", "TOKEN_FULL",
  "TOKEN_GROUP", "TOKEN_HAVING", "TOKEN_INNER", "TOKEN_INSERT",
  "TOKEN_INTEGER", "TOKEN_INTERVAL", "TOKEN_INTO", "TOKEN_JOIN",
  "TOKEN_KEY", "TOKEN_LAST", "TOKEN_LEFT", "TOKEN_LIMIT", "TOKEN_LONG",
  "TOKEN_NULL", "TOKEN_NULLS", "TOKEN_OFF", "TOKEN_ON", "TOKEN_ORDER",
  "TOKEN_OUTER", "TOKEN_PRIMARY", "TOKEN_QUIT", "TOKEN_REAL",
  "TOKEN_REFERENCES", "TOKEN_RIGHT", "TOKEN_ROW_DELIMITER", "TOKEN_SELECT",
  "TOKEN_SET", "TOKEN_SMALLINT", "TOKEN_SORT", "TOKEN_TABLE", "TOKEN_TIME",
  "TOKEN_TIMESTAMP", "TOKEN_TRUE", "TOKEN_TYPE", "TOKEN_UNIQUE",
  "TOKEN_UPDATE", "TOKEN_VALUES", "TOKEN_VARCHAR", "TOKEN_WHERE",
  "TOKEN_WITH", "TOKEN_YEARMONTH", "TOKEN_EOF", "TOKEN_LEX_ERROR", "';'",
  "'('", "')'", "','", "$accept", "start", "sql_statement",
  "quit_statement", "alter_table_statement", "create_table_statement",
  "drop_table_statement", "column_def", "column_def_commalist",
  "data_type", "column_constraint_def", "column_constraint_def_list",
  "opt_column_constraint_def_list", "table_constraint_def",
  "table_constraint_def_commalist", "opt_table_constraint_def_commalist",
  "opt_block_properties", "block_property_item_list",
  "block_property_item", "insert_statement", "copy_from_statement",
  "opt_copy_from_params", "copy_from_params", "update_statement",
  "delete_statement", "assignment_list", "assignment_item",
  "select_statement", "opt_with_clause", "with_list", "with_list_element",
  "select_query", "opt_all_distinct", "selection",
  "selection_item_commalist", "selection_item", "from_clause",
  "opt_join_chain", "join_chain", "join", "subquery_expression",
  "table_reference", "table_reference_signature",
  "table_reference_signature_primary", "table_reference_commalist",
  "opt_group_by_clause", "opt_having_clause", "opt_order_by_clause",
  "opt_limit_clause", "order_commalist", "order_item",
  "opt_order_direction", "opt_nulls_first", "opt_where_clause",
  "where_clause", "or_expression", "and_expression", "not_expression",
  "predicate_expression_base", "add_expression", "multiply_expression",
  "unary_expression", "expression_base", "function_call",
  "expression_list", "literal_value", "literal_value_commalist",
  "attribute_ref", "comparison_operation", "unary_operation",
  "add_operation", "multiply_operation", "name_commalist", "any_name",
  "boolean_value", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,    43,
      45,    42,    47,   274,   275,    46,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,    59,    40,    41,    44
};
# endif

#define YYPACT_NINF -168

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-168)))

#define YYTABLE_NINF -86

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      34,  -168,   -52,   139,   -25,    -6,   -19,    33,  -168,   139,
     139,  -168,   101,    81,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,    52,   139,  -168,  -168,    59,   139,   139,
     139,   139,    38,    46,  -168,   129,    65,  -168,  -168,  -168,
      23,  -168,    39,   158,   109,   113,  -168,    40,   139,   139,
     118,   139,  -168,  -168,   395,   148,   153,   106,   139,   467,
    -168,  -168,   123,   139,    32,  -168,   208,  -168,    52,  -168,
       0,  -168,  -168,  -168,   222,   228,  -168,  -168,  -168,   133,
    -168,   174,  -168,  -168,  -168,  -168,   237,  -168,  -168,  -168,
    -168,  -168,  -168,   141,   188,   529,   242,   196,   155,  -168,
     128,   178,  -168,  -168,  -168,  -168,  -168,   591,   -16,   139,
     -12,   139,   139,   163,  -168,  -168,   111,   727,   653,   467,
     261,   264,  -168,  -168,   265,   271,   703,   115,   139,  -168,
     529,   179,  -168,   139,  -168,  -168,   290,  -168,  -168,   292,
    -168,    -4,  -168,     9,   113,   529,  -168,  -168,   139,   529,
    -168,  -168,  -168,   529,   228,  -168,   139,   322,  -168,   211,
     250,   251,   216,  -168,  -168,  -168,   107,   -12,   139,  -168,
     110,  -168,     3,   160,   467,   467,   304,  -168,  -168,  -168,
    -168,  -168,  -168,   319,   529,   529,    14,  -168,   126,   234,
    -168,   230,  -168,  -168,   226,   227,  -168,    54,  -168,   -29,
      54,   274,  -168,  -168,   178,  -168,  -168,   231,  -168,   230,
     152,   467,   233,   235,   139,   330,   -33,   154,  -168,   232,
     241,  -168,   268,   243,   703,  -168,   277,   139,  -168,  -168,
     110,  -168,  -168,   264,  -168,   529,  -168,   176,   230,   273,
    -168,  -168,   703,   245,  -168,  -168,   139,  -168,  -168,   -23,
     285,   139,   -10,    75,     9,  -168,   140,  -168,  -168,   318,
     293,  -168,  -168,   529,    10,   139,   139,   166,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,   114,   -12,   325,  -168,  -168,
     467,  -168,  -168,   255,  -168,   194,   529,  -168,  -168,   703,
    -168,   139,   294,   139,   -53,   139,   295,   139,   296,  -168,
    -168,   529,   467,   283,   230,  -168,   182,   195,  -168,   359,
     -33,  -168,   266,    11,   139,   529,   230,   198,   -44,   139,
     -41,   467,   -37,   139,   -28,   139,   263,   261,   336,   301,
     297,  -168,  -168,  -168,     1,  -168,   269,   230,  -168,   467,
      16,   467,   261,   467,    17,   467,    19,   529,   368,  -168,
     139,   -14,   139,   139,   200,  -168,  -168,   261,   467,   261,
     261,   467,   261,   467,   270,  -168,   130,  -168,   278,  -168,
     139,  -168,  -168,  -168,     1,   261,   261,   261,   529,  -168,
    -168,   303,   139,   202,  -168,  -168,    49,  -168,   204,  -168,
    -168,  -168,  -168
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     0,     0,     0,     0,     0,    15,     0,
       0,     5,     0,     0,    12,     6,     8,    10,    11,     7,
      14,     9,    13,     0,     0,   196,   197,     0,     0,     0,
       0,     0,     0,    86,    87,     0,   120,     1,     3,     2,
      91,    84,     0,     0,     0,   141,    21,     0,     0,     0,
       0,     0,    92,    93,     0,     0,     0,    73,     0,     0,
      80,   142,     0,     0,   141,    82,     0,    88,     0,    89,
       0,   194,   176,   173,     0,   189,    94,    36,    25,     0,
      26,    27,    30,    32,    33,    35,     0,    37,   172,    31,
      34,    28,    29,     0,     0,     0,     0,     0,    95,    96,
     100,   158,   160,   162,   165,   164,   163,     0,   181,     0,
       0,     0,     0,     0,    72,    23,     0,     0,     0,     0,
     143,   145,   147,   149,     0,   163,     0,     0,     0,    79,
       0,     0,   121,     0,   174,   175,     0,    39,   177,     0,
      40,     0,   178,     0,   141,     0,   190,   191,     0,     0,
      99,   192,   193,     0,     0,   161,     0,     0,    16,     0,
       0,     0,     0,    17,    18,    19,     0,    60,     0,    38,
      52,   148,     0,     0,     0,     0,     0,   183,   185,   186,
     187,   188,   184,     0,     0,     0,     0,   179,     0,     0,
      81,    83,   114,   195,     0,     0,   166,     0,   122,   102,
     117,   124,    97,    98,   157,   159,   182,     0,   167,   170,
       0,     0,     0,     0,     0,     0,     0,     0,    59,    61,
      63,    24,     0,     0,     0,    43,     0,     0,    45,    51,
      53,    22,   156,   144,   146,     0,   154,     0,   155,     0,
     153,    71,     0,     0,    41,    42,     0,   115,   118,     0,
       0,     0,     0,     0,     0,   101,   103,   105,   116,     0,
     126,   168,   169,     0,     0,     0,     0,     0,    75,   200,
     201,   199,   198,    76,    74,     0,     0,     0,    20,    44,
       0,    47,    46,     0,    50,     0,     0,   152,   180,     0,
     119,     0,     0,     0,     0,     0,     0,     0,     0,   123,
     104,     0,     0,   128,   171,    57,     0,     0,    54,     0,
       0,    58,     0,     0,     0,     0,   150,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   125,   127,     0,   130,
       0,    55,    77,    78,     0,    48,     0,   151,    70,     0,
       0,     0,   107,     0,     0,     0,     0,     0,     0,    90,
       0,     0,     0,     0,     0,    64,    49,   113,     0,   106,
     109,     0,   111,     0,   129,   132,   135,   131,     0,    69,
       0,    67,    66,    62,     0,   112,   108,   110,     0,   136,
     137,   138,     0,     0,    65,   133,     0,   134,     0,    68,
     139,   140,    56
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -168,  -168,  -168,  -168,  -168,  -168,  -168,   -90,  -168,   267,
     150,  -168,  -168,  -166,  -168,  -168,  -168,  -168,     8,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,   259,  -168,  -168,  -168,
     334,   320,  -168,  -168,  -168,   244,  -168,  -168,  -168,   134,
     341,   138,   197,  -167,  -168,  -168,  -168,  -168,  -168,  -168,
      18,  -168,  -168,   -62,  -168,  -116,   221,   229,   287,   -46,
     254,   253,   300,  -168,   108,  -122,   121,   -48,  -168,  -168,
    -168,  -168,   -58,    -3,   103
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    12,    13,    14,    15,    16,    17,   115,   116,    96,
     229,   230,   231,   163,   219,   220,   278,   354,   355,    18,
      19,   114,   217,    20,    21,    64,    65,    22,    23,    33,
      34,    41,    54,    97,    98,    99,   144,   255,   256,   257,
     197,   198,   247,    35,   199,   260,   303,   329,   349,   364,
     365,   381,   387,    60,    61,   120,   121,   122,   123,   124,
     101,   102,   103,   104,   210,   105,   188,   106,   185,   107,
     149,   153,    70,   108,   273
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,   218,   129,   172,   187,   127,    32,    36,   100,   156,
     174,   125,    25,   369,    26,   146,   147,   174,   174,   158,
     269,    42,   321,   239,   159,    44,    45,    46,    47,   249,
     248,   339,   250,   248,   341,     1,    24,   251,   343,   351,
     252,   270,   271,   291,   160,    66,    36,   345,    71,   141,
      52,    29,   133,   253,   292,   117,   295,    25,   272,    26,
      71,   133,     2,    28,   133,    55,   161,   296,   133,    30,
     125,   125,    53,   173,     3,     4,   254,   133,   221,   290,
       5,   162,   201,   246,   191,     6,   240,   157,   352,   370,
      56,   358,   361,   353,   363,   264,     7,   150,    31,   100,
     196,    37,   281,   390,   132,   133,   117,   232,   164,   165,
     311,   209,    68,     8,   305,   335,    43,   391,   -85,   222,
     288,   133,   133,    48,   133,    66,   125,   125,     9,    59,
     193,    25,    10,    26,    11,    62,    40,   128,   237,   238,
     200,   297,    25,    63,    26,   203,   223,   146,   147,   146,
     147,    49,   298,   206,   215,   224,   267,   148,    50,   216,
     379,   309,    57,   125,   313,   117,   310,   187,    51,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   380,   146,
     147,    38,   225,    39,   286,   109,   327,   110,   226,   285,
     111,   227,   112,   294,    36,   146,   147,    36,   249,   151,
     152,   250,   315,   228,   113,   342,   251,   306,   307,   252,
      59,    71,    58,   146,   147,   167,   168,   304,   130,   189,
     133,    68,   253,   357,   283,   359,   126,   360,   134,   362,
     241,   242,   125,   318,   135,   320,   136,   322,   137,   324,
     316,   138,   375,    36,   139,   376,   142,   377,    71,   146,
     147,   200,   140,   143,   125,   209,   262,   263,   274,   275,
     145,   340,    71,    71,   196,   344,   166,   346,   174,   337,
     308,   133,   175,   125,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   192,   146,   147,   330,   133,    71,   186,
      71,   125,    71,   125,    71,   125,   194,   125,   195,   331,
     133,   366,   338,   242,   373,   374,   389,   133,   392,   133,
     125,   336,   383,   125,   211,   125,    71,   212,   213,   214,
      71,   235,    71,   236,   388,    25,    72,    26,    73,   243,
     244,   245,   366,   259,   268,   261,   265,   276,   266,   277,
     279,    74,    75,   207,   282,   287,   280,   368,   289,   371,
     372,   293,   301,   302,    77,    78,   312,    79,   314,   328,
     319,   323,   325,   332,    80,    81,    82,    71,   263,   334,
     347,   348,    83,   356,   367,   378,   386,    84,   350,    71,
     284,   382,   384,    67,   170,    85,    86,   190,   131,   202,
     300,    69,   299,    87,    88,   233,   385,   258,    25,    72,
      26,    73,    89,   204,   234,   171,   205,   155,    90,   326,
     317,    91,    92,   333,    74,    75,    76,     0,    93,     0,
       0,    94,     0,     0,     0,    95,   208,    77,    78,     0,
      79,     0,     0,     0,     0,     0,     0,    80,    81,    82,
       0,     0,     0,     0,     0,    83,     0,     0,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,    85,    86,
       0,     0,     0,     0,     0,     0,    87,    88,     0,     0,
      25,    72,    26,    73,     0,    89,   118,     0,     0,     0,
       0,    90,     0,     0,    91,    92,    74,    75,     0,     0,
       0,    93,     0,     0,    94,     0,     0,     0,    95,    77,
      78,     0,    79,     0,     0,     0,     0,     0,     0,    80,
      81,    82,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
      85,    86,    25,    72,    26,    73,     0,     0,    87,    88,
       0,     0,     0,     0,     0,     0,     0,    89,    74,    75,
       0,     0,     0,    90,     0,     0,    91,    92,     0,     0,
       0,    77,    78,    93,    79,     0,    94,     0,     0,     0,
     119,    80,    81,    82,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,    85,    86,    25,    72,    26,    73,     0,     0,
      87,    88,     0,     0,     0,     0,     0,     0,     0,    89,
      74,   154,     0,     0,     0,    90,     0,     0,    91,    92,
       0,     0,     0,    77,    78,    93,    79,     0,    94,     0,
       0,     0,    95,    80,    81,    82,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,    85,    86,    25,    72,    26,    73,
       0,     0,    87,    88,     0,     0,     0,     0,     0,     0,
       0,    89,    74,    75,     0,     0,     0,    90,     0,     0,
      91,    92,     0,     0,     0,    77,    78,    93,    79,     0,
      94,     0,     0,     0,    95,    80,    81,    82,     0,     0,
       0,     0,     0,    83,     0,     0,     0,    72,    84,    73,
       0,     0,     0,     0,     0,     0,    85,    86,     0,     0,
       0,     0,    74,   154,    87,    88,     0,     0,     0,     0,
       0,     0,     0,    89,     0,    77,    78,     0,    79,    90,
       0,     0,    91,    92,     0,    80,    81,    82,     0,    93,
       0,     0,    94,    83,     0,     0,   119,     0,    84,    77,
      78,     0,    79,     0,     0,     0,    85,    86,     0,    80,
      81,    82,     0,     0,    87,    88,     0,    83,     0,     0,
       0,     0,    84,    89,     0,     0,     0,     0,     0,    90,
      85,   169,    91,    92,     0,     0,     0,     0,    87,    93,
       0,     0,    94,     0,     0,     0,     0,    89,     0,     0,
       0,     0,     0,    90,     0,     0,    91,    92,     0,     0,
       0,     0,     0,    93,     0,     0,    94
};

static const yytype_int16 yycheck[] =
{
       3,   167,    64,   119,   126,    63,     9,    10,    54,    25,
       7,    59,     3,    27,     5,    19,    20,     7,     7,   109,
      53,    24,    75,     9,    36,    28,    29,    30,    31,    58,
     197,    75,    61,   200,    75,     1,    88,    66,    75,    38,
      69,    74,    75,    66,    56,    48,    49,    75,    51,    95,
      27,    57,   105,    82,    77,    58,    66,     3,    91,     5,
      63,   105,    28,    88,   105,    26,    78,    77,   105,    88,
     118,   119,    49,   119,    40,    41,   105,   105,   168,   246,
      46,    93,   144,    29,   130,    51,    72,   103,    87,   103,
      51,    75,    75,    92,    75,   211,    62,   100,    65,   145,
     104,     0,   224,    54,   104,   105,   109,   104,   111,   112,
     276,   157,   103,    79,   104,   104,    57,    68,    84,     9,
     242,   105,   105,    85,   105,   128,   174,   175,    94,    97,
     133,     3,    98,     5,   100,    95,    84,   105,   184,   185,
     143,    66,     3,   103,     5,   148,    36,    19,    20,    19,
      20,   105,    77,   156,    47,    45,   214,    29,    29,    52,
      30,    47,     4,   211,   280,   168,    52,   289,   103,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    48,    19,
      20,   100,    72,   102,     8,    37,   302,    39,    78,   235,
      37,    81,    39,   251,   197,    19,    20,   200,    58,    21,
      22,    61,     8,    93,    98,   321,    66,   265,   266,    69,
      97,   214,   103,    19,    20,   104,   105,   263,    10,   104,
     105,   103,    82,   339,   227,   341,   103,   343,     6,   345,
     104,   105,   280,   291,     6,   293,   103,   295,    64,   297,
     286,     4,   358,   246,   103,   361,     4,   363,   251,    19,
      20,   254,    64,    57,   302,   301,   104,   105,   104,   105,
     105,   319,   265,   266,   104,   323,   103,   325,     7,   315,
     104,   105,     8,   321,     9,    10,    11,    12,    13,    14,
      15,    16,    17,   104,    19,    20,   104,   105,   291,    18,
     293,   339,   295,   341,   297,   343,     6,   345,     6,   104,
     105,   347,   104,   105,   104,   105,   104,   105,   104,   105,
     358,   314,   370,   361,   103,   363,   319,    67,    67,   103,
     323,    17,   325,     4,   382,     3,     4,     5,     6,    95,
     104,   104,   378,    59,     4,   104,   103,   105,   103,    98,
      72,    19,    20,    21,    67,    72,   103,   350,   103,   352,
     353,    66,    34,    60,    32,    33,    31,    35,   103,    76,
      66,    66,    66,     4,    42,    43,    44,   370,   105,   103,
      34,    70,    50,   104,     6,   105,    73,    55,    81,   382,
     230,   103,   374,    49,   117,    63,    64,   128,    68,   145,
     256,    50,   254,    71,    72,   174,   378,   200,     3,     4,
       5,     6,    80,   149,   175,   118,   153,   107,    86,   301,
     289,    89,    90,   310,    19,    20,    21,    -1,    96,    -1,
      -1,    99,    -1,    -1,    -1,   103,   104,    32,    33,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    -1,    -1,
       3,     4,     5,     6,    -1,    80,     9,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    89,    90,    19,    20,    -1,    -1,
      -1,    96,    -1,    -1,    99,    -1,    -1,    -1,   103,    32,
      33,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,     3,     4,     5,     6,    -1,    -1,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    19,    20,
      -1,    -1,    -1,    86,    -1,    -1,    89,    90,    -1,    -1,
      -1,    32,    33,    96,    35,    -1,    99,    -1,    -1,    -1,
     103,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,     3,     4,     5,     6,    -1,    -1,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      19,    20,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,
      -1,    -1,    -1,    32,    33,    96,    35,    -1,    99,    -1,
      -1,    -1,   103,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    64,     3,     4,     5,     6,
      -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    19,    20,    -1,    -1,    -1,    86,    -1,    -1,
      89,    90,    -1,    -1,    -1,    32,    33,    96,    35,    -1,
      99,    -1,    -1,    -1,   103,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,     4,    55,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,
      -1,    -1,    19,    20,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    32,    33,    -1,    35,    86,
      -1,    -1,    89,    90,    -1,    42,    43,    44,    -1,    96,
      -1,    -1,    99,    50,    -1,    -1,   103,    -1,    55,    32,
      33,    -1,    35,    -1,    -1,    -1,    63,    64,    -1,    42,
      43,    44,    -1,    -1,    71,    72,    -1,    50,    -1,    -1,
      -1,    -1,    55,    80,    -1,    -1,    -1,    -1,    -1,    86,
      63,    64,    89,    90,    -1,    -1,    -1,    -1,    71,    96,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    89,    90,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    -1,    99
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    28,    40,    41,    46,    51,    62,    79,    94,
      98,   100,   107,   108,   109,   110,   111,   112,   125,   126,
     129,   130,   133,   134,    88,     3,     5,   179,    88,    57,
      88,    65,   179,   135,   136,   149,   179,     0,   100,   102,
      84,   137,   179,    57,   179,   179,   179,   179,    85,   105,
      29,   103,    27,    49,   138,    26,    51,     4,   103,    97,
     159,   160,    95,   103,   131,   132,   179,   136,   103,   146,
     178,   179,     4,     6,    19,    20,    21,    32,    33,    35,
      42,    43,    44,    50,    55,    63,    64,    71,    72,    80,
      86,    89,    90,    96,    99,   103,   115,   139,   140,   141,
     165,   166,   167,   168,   169,   171,   173,   175,   179,    37,
      39,    37,    39,    98,   127,   113,   114,   179,     9,   103,
     161,   162,   163,   164,   165,   173,   103,   178,   105,   159,
      10,   137,   104,   105,     6,     6,   103,    64,     4,   103,
      64,   165,     4,    57,   142,   105,    19,    20,    29,   176,
     179,    21,    22,   177,    20,   168,    25,   103,   113,    36,
      56,    78,    93,   119,   179,   179,   103,   104,   105,    64,
     115,   164,   161,   165,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,   174,    18,   171,   172,   104,
     132,   165,   104,   179,     6,     6,   104,   146,   147,   150,
     179,   159,   141,   179,   166,   167,   179,    21,   104,   165,
     170,   103,    67,    67,   103,    47,    52,   128,   119,   120,
     121,   113,     9,    36,    45,    72,    78,    81,    93,   116,
     117,   118,   104,   162,   163,    17,     4,   165,   165,     9,
      72,   104,   105,    95,   104,   104,    29,   148,   149,    58,
      61,    66,    69,    82,   105,   143,   144,   145,   148,    59,
     151,   104,   104,   105,   161,   103,   103,   178,     4,    53,
      74,    75,    91,   180,   104,   105,   105,    98,   122,    72,
     103,   171,    67,   179,   116,   165,     8,    72,   171,   103,
     149,    66,    77,    66,   178,    66,    77,    66,    77,   147,
     145,    34,    60,   152,   165,   104,   178,   178,   104,    47,
      52,   119,    31,   161,   103,     8,   165,   172,   178,    66,
     178,    75,   178,    66,   178,    66,   170,   161,    76,   153,
     104,   104,     4,   180,   103,   104,   179,   165,   104,    75,
     178,    75,   161,    75,   178,    75,   178,    34,    70,   154,
      81,    38,    87,    92,   123,   124,   104,   161,    75,   161,
     161,    75,   161,    75,   155,   156,   165,     6,   179,    27,
     103,   179,   179,   104,   105,   161,   161,   161,   105,    30,
      48,   157,   103,   178,   124,   156,    73,   158,   178,   104,
      54,    68,   104
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   106,   107,   107,   107,   107,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   109,   110,   110,   110,   110,
     111,   112,   113,   114,   114,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   116,   116,   116,   116,   116,   116,   116,
     117,   117,   118,   118,   119,   119,   119,   119,   120,   120,
     121,   121,   122,   122,   123,   123,   124,   124,   124,   124,
     125,   125,   126,   127,   127,   128,   128,   128,   128,   129,
     130,   131,   131,   132,   133,   134,   134,   135,   135,   136,
     137,   138,   138,   138,   139,   139,   140,   140,   141,   141,
     141,   142,   143,   143,   144,   144,   145,   145,   145,   145,
     145,   145,   145,   145,   146,   147,   147,   147,   148,   148,
     149,   149,   150,   150,   151,   151,   152,   152,   153,   153,
     154,   154,   155,   155,   156,   157,   157,   157,   158,   158,
     158,   159,   159,   160,   161,   161,   162,   162,   163,   163,
     164,   164,   164,   164,   164,   164,   164,   165,   165,   166,
     166,   167,   167,   168,   168,   168,   168,   169,   169,   169,
     170,   170,   171,   171,   171,   171,   171,   171,   171,   172,
     172,   173,   173,   174,   174,   174,   174,   174,   174,   175,
     176,   176,   177,   177,   178,   178,   179,   179,   180,   180,
     180,   180
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     6,     6,     6,     6,
       8,     3,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     4,     4,     1,     2,     1,     2,     2,     4,     5,
       2,     1,     0,     1,     4,     5,    10,     4,     3,     1,
       0,     1,     5,     0,     1,     3,     2,     2,     4,     2,
      10,     7,     5,     0,     4,     2,     2,     4,     4,     5,
       4,     3,     1,     3,     2,     0,     2,     1,     3,     3,
       9,     0,     1,     1,     1,     1,     1,     3,     3,     2,
       1,     3,     0,     1,     2,     1,     5,     4,     6,     5,
       6,     5,     6,     5,     3,     2,     2,     1,     1,     2,
       1,     4,     1,     3,     0,     3,     0,     2,     0,     3,
       0,     2,     1,     3,     3,     0,     1,     1,     0,     2,
       2,     0,     1,     2,     3,     1,     3,     1,     2,     1,
       5,     6,     4,     3,     3,     3,     3,     3,     1,     3,
       1,     2,     1,     1,     1,     1,     3,     3,     4,     4,
       1,     3,     1,     1,     2,     2,     1,     2,     2,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      yyerror (&yylloc, yyscanner, parsedStatement, YY_("syntax error: cannot back up")); \
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
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
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
                  Type, Value, Location, yyscanner, parsedStatement); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (yyscanner);
  YYUSE (parsedStatement);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, yyscanner, parsedStatement);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , yyscanner, parsedStatement);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, yyscanner, parsedStatement); \
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (yyscanner);
  YYUSE (parsedStatement);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 3: /* TOKEN_NAME  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 1702 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 4: /* TOKEN_STRING_SINGLE_QUOTED  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 1712 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 5: /* TOKEN_STRING_DOUBLE_QUOTED  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 1722 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 6: /* TOKEN_UNSIGNED_NUMVAL  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).numeric_literal_value_) != nullptr) {
    delete ((*yyvaluep).numeric_literal_value_);
  }
}
#line 1732 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 108: /* sql_statement  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).statement_) != nullptr) {
    delete ((*yyvaluep).statement_);
  }
}
#line 1742 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 109: /* quit_statement  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).quit_statement_) != nullptr) {
    delete ((*yyvaluep).quit_statement_);
  }
}
#line 1752 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 110: /* alter_table_statement  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).statement_) != nullptr) {
    delete ((*yyvaluep).statement_);
  }
}
#line 1762 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 111: /* create_table_statement  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).create_table_statement_) != nullptr) {
    delete ((*yyvaluep).create_table_statement_);
  }
}
#line 1772 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 112: /* drop_table_statement  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).drop_table_statement_) != nullptr) {
    delete ((*yyvaluep).drop_table_statement_);
  }
}
#line 1782 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 113: /* column_def  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_definition_) != nullptr) {
    delete ((*yyvaluep).attribute_definition_);
  }
}
#line 1792 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 114: /* column_def_commalist  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_definition_list_) != nullptr) {
    delete ((*yyvaluep).attribute_definition_list_);
  }
}
#line 1802 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 115: /* data_type  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).data_type_) != nullptr) {
    delete ((*yyvaluep).data_type_);
  }
}
#line 1812 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 116: /* column_constraint_def  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).column_constraint_) != nullptr) {
    delete ((*yyvaluep).column_constraint_);
  }
}
#line 1822 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 117: /* column_constraint_def_list  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).column_constraint_list_) != nullptr) {
    delete ((*yyvaluep).column_constraint_list_);
  }
}
#line 1832 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 118: /* opt_column_constraint_def_list  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).column_constraint_list_) != nullptr) {
    delete ((*yyvaluep).column_constraint_list_);
  }
}
#line 1842 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 122: /* opt_block_properties  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).block_properties_) != nullptr) {
    delete ((*yyvaluep).block_properties_);
  }
}
#line 1852 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 123: /* block_property_item_list  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).block_property_item_list_) != nullptr) {
    delete ((*yyvaluep).block_property_item_list_);
  }
}
#line 1862 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 124: /* block_property_item  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).block_property_item_) != nullptr) {
    delete ((*yyvaluep).block_property_item_);
  }
}
#line 1872 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 125: /* insert_statement  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).insert_statement_) != nullptr) {
    delete ((*yyvaluep).insert_statement_);
  }
}
#line 1882 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 126: /* copy_from_statement  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).copy_from_statement_) != nullptr) {
    delete ((*yyvaluep).copy_from_statement_);
  }
}
#line 1892 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 127: /* opt_copy_from_params  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).copy_from_params_) != nullptr) {
    delete ((*yyvaluep).copy_from_params_);
  }
}
#line 1902 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 128: /* copy_from_params  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).copy_from_params_) != nullptr) {
    delete ((*yyvaluep).copy_from_params_);
  }
}
#line 1912 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 129: /* update_statement  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).update_statement_) != nullptr) {
    delete ((*yyvaluep).update_statement_);
  }
}
#line 1922 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 130: /* delete_statement  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).delete_statement_) != nullptr) {
    delete ((*yyvaluep).delete_statement_);
  }
}
#line 1932 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 131: /* assignment_list  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).assignment_list_) != nullptr) {
    delete ((*yyvaluep).assignment_list_);
  }
}
#line 1942 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 132: /* assignment_item  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).assignment_) != nullptr) {
    delete ((*yyvaluep).assignment_);
  }
}
#line 1952 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 133: /* select_statement  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).select_statement_) != nullptr) {
    delete ((*yyvaluep).select_statement_);
  }
}
#line 1962 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 134: /* opt_with_clause  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).with_list_) != nullptr) {
    delete ((*yyvaluep).with_list_);
  }
}
#line 1972 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 135: /* with_list  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).with_list_) != nullptr) {
    delete ((*yyvaluep).with_list_);
  }
}
#line 1982 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 136: /* with_list_element  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).with_list_element_) != nullptr) {
    delete ((*yyvaluep).with_list_element_);
  }
}
#line 1992 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 137: /* select_query  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).select_query_) != nullptr) {
    delete ((*yyvaluep).select_query_);
  }
}
#line 2002 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 139: /* selection  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).selection_) != nullptr) {
    delete ((*yyvaluep).selection_);
  }
}
#line 2012 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 140: /* selection_item_commalist  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).selection_list_) != nullptr) {
    delete ((*yyvaluep).selection_list_);
  }
}
#line 2022 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 141: /* selection_item  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).selection_item_) != nullptr) {
    delete ((*yyvaluep).selection_item_);
  }
}
#line 2032 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 142: /* from_clause  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_list_) != nullptr) {
    delete ((*yyvaluep).table_reference_list_);
  }
}
#line 2042 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 146: /* subquery_expression  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).subquery_expression_) != nullptr) {
    delete ((*yyvaluep).subquery_expression_);
  }
}
#line 2052 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 147: /* table_reference  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_) != nullptr) {
    delete ((*yyvaluep).table_reference_);
  }
}
#line 2062 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 148: /* table_reference_signature  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_signature_) != nullptr) {
    delete ((*yyvaluep).table_reference_signature_);
  }
}
#line 2072 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 149: /* table_reference_signature_primary  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_signature_) != nullptr) {
    delete ((*yyvaluep).table_reference_signature_);
  }
}
#line 2082 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 150: /* table_reference_commalist  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_list_) != nullptr) {
    delete ((*yyvaluep).table_reference_list_);
  }
}
#line 2092 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 151: /* opt_group_by_clause  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_group_by_clause_) != nullptr) {
    delete ((*yyvaluep).opt_group_by_clause_);
  }
}
#line 2102 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 152: /* opt_having_clause  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_having_clause_) != nullptr) {
    delete ((*yyvaluep).opt_having_clause_);
  }
}
#line 2112 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 153: /* opt_order_by_clause  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_order_by_clause_) != nullptr) {
    delete ((*yyvaluep).opt_order_by_clause_);
  }
}
#line 2122 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 154: /* opt_limit_clause  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_limit_clause_) != nullptr) {
    delete ((*yyvaluep).opt_limit_clause_);
  }
}
#line 2132 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 155: /* order_commalist  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_commalist_) != nullptr) {
    delete ((*yyvaluep).order_commalist_);
  }
}
#line 2142 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 156: /* order_item  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_item_) != nullptr) {
    delete ((*yyvaluep).order_item_);
  }
}
#line 2152 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 157: /* opt_order_direction  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_direction_) != nullptr) {
    delete ((*yyvaluep).order_direction_);
  }
}
#line 2162 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 158: /* opt_nulls_first  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_direction_) != nullptr) {
    delete ((*yyvaluep).order_direction_);
  }
}
#line 2172 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 159: /* opt_where_clause  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2182 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 160: /* where_clause  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2192 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 161: /* or_expression  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2202 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 162: /* and_expression  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2212 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 163: /* not_expression  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2222 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 164: /* predicate_expression_base  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2232 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 165: /* add_expression  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2242 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 166: /* multiply_expression  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2252 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 167: /* unary_expression  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2262 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 168: /* expression_base  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2272 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 169: /* function_call  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).function_call_) != nullptr) {
    delete ((*yyvaluep).function_call_);
  }
}
#line 2282 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 170: /* expression_list  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_list_) != nullptr) {
    delete ((*yyvaluep).expression_list_);
  }
}
#line 2292 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 171: /* literal_value  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).literal_value_) != nullptr) {
    delete ((*yyvaluep).literal_value_);
  }
}
#line 2302 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 172: /* literal_value_commalist  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).literal_value_list_) != nullptr) {
    delete ((*yyvaluep).literal_value_list_);
  }
}
#line 2312 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 173: /* attribute_ref  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_) != nullptr) {
    delete ((*yyvaluep).attribute_);
  }
}
#line 2322 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 174: /* comparison_operation  */
#line 464 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2328 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 175: /* unary_operation  */
#line 465 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2334 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 176: /* add_operation  */
#line 466 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2340 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 177: /* multiply_operation  */
#line 466 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2346 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 178: /* name_commalist  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_list_) != nullptr) {
    delete ((*yyvaluep).string_list_);
  }
}
#line 2356 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 179: /* any_name  */
#line 468 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2366 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 180: /* boolean_value  */
#line 463 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2372 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

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

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
      yychar = yylex (&yylval, &yylloc, yyscanner);
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
| yyreduce -- Do a reduction.  |
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 477 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    *parsedStatement = (yyvsp[-1].statement_);
    YYACCEPT;
  }
#line 2669 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 481 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    *parsedStatement = (yyvsp[-1].statement_);
    YYACCEPT;
  }
#line 2678 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 485 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    YYABORT;
  }
#line 2686 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 488 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    // Regular yyparse() return codes are non-negative, so use a negative one here.
    return -1;
  }
#line 2695 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 495 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].statement_);
  }
#line 2703 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 498 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].copy_from_statement_);
  }
#line 2711 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 501 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].create_table_statement_);
  }
#line 2719 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 504 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].delete_statement_);
  }
#line 2727 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 507 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].drop_table_statement_);
  }
#line 2735 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 510 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].insert_statement_);
  }
#line 2743 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 513 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].quit_statement_);
  }
#line 2751 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 516 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].select_statement_);
  }
#line 2759 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 519 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.statement_) = (yyvsp[0].update_statement_);
  }
#line 2767 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 525 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.quit_statement_) = new quickstep::ParseStatementQuit((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 2775 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 531 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[0].attribute_definition_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 2787 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 538 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-3].string_value_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 2798 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 544 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[0].string_value_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 2810 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 551 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[0].string_value_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 2822 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 560 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.create_table_statement_) = new quickstep::ParseStatementCreateTable((yylsp[-7]).first_line, (yylsp[-7]).first_column, (yyvsp[-5].string_value_), (yyvsp[-3].attribute_definition_list_), (yyvsp[0].block_properties_));
  }
#line 2830 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 565 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.drop_table_statement_) = new quickstep::ParseStatementDropTable((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].string_value_));
  }
#line 2838 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 570 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_definition_) = new quickstep::ParseAttributeDefinition((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].string_value_), (yyvsp[-1].data_type_), (yyvsp[0].column_constraint_list_));
  }
#line 2846 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 575 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_definition_list_) = new quickstep::PtrList<quickstep::ParseAttributeDefinition>();
    (yyval.attribute_definition_list_)->push_back((yyvsp[0].attribute_definition_));
  }
#line 2855 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 579 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_definition_list_) = (yyvsp[-2].attribute_definition_list_);
    (yyval.attribute_definition_list_)->push_back((yyvsp[0].attribute_definition_));
  }
#line 2864 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 585 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = nullptr;
    NotSupported(&(yylsp[0]), yyscanner, "BIT data type");
    YYERROR;
  }
#line 2874 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 590 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDatetime));
  }
#line 2882 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 593 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDatetime));
  }
#line 2890 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 596 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = nullptr;
    NotSupported(&(yylsp[0]), yyscanner, "TIME data type");
    YYERROR;
  }
#line 2900 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 601 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDatetime));
  }
#line 2908 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 604 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDouble));
  }
#line 2916 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 607 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDouble));
  }
#line 2924 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 610 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDouble));
  }
#line 2932 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 613 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kFloat));
  }
#line 2940 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 616 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kInt));
  }
#line 2948 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 619 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kInt));
  }
#line 2956 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 622 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kLong));
  }
#line 2964 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 625 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kLong));
  }
#line 2972 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 628 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /**
     * NOTE(chasseur): This pattern exhibits a shift/reduce conflict with the
     * TOKEN_INTERVAL case in 'literal_value'. Bison prefers to shift rather
     * than reduce, so the case in 'literal_value' has precedence over this.
     **/
    (yyval.data_type_) = nullptr;
    quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr,
        "INTERVAL is ambiguous as a column type. Specify either DATETIME INTERVAL "
        "or YEARMONTH INTERVAL");
    YYERROR;
  }
#line 2989 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 640 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDatetimeInterval));
  }
#line 2997 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 643 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kYearMonthInterval));
  }
#line 3005 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 646 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].numeric_literal_value_)->float_like()) {
      delete (yyvsp[-1].numeric_literal_value_);
      (yyval.data_type_) = NULL;
      quickstep_yyerror(&(yylsp[-1]), yyscanner, nullptr, "Non-integer length supplied for CHAR type");
      YYERROR;
    } else {
      if ((yyvsp[-1].numeric_literal_value_)->long_value() <= 0) {
        delete (yyvsp[-1].numeric_literal_value_);
        (yyval.data_type_) = NULL;
        quickstep_yyerror(&(yylsp[-1]), yyscanner, nullptr, "Length for CHAR type must be at least 1");
        YYERROR;
      } else {
        (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kChar, (yyvsp[-1].numeric_literal_value_)->long_value(), false));
        delete (yyvsp[-1].numeric_literal_value_);
      }
    }
  }
#line 3028 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 664 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].numeric_literal_value_)->float_like()) {
      delete (yyvsp[-1].numeric_literal_value_);
      (yyval.data_type_) = NULL;
      quickstep_yyerror(&(yylsp[-1]), yyscanner, nullptr, "Non-integer length supplied for VARCHAR type");
      YYERROR;
    } else {
      if ((yyvsp[-1].numeric_literal_value_)->long_value() < 0) {
        delete (yyvsp[-1].numeric_literal_value_);
        (yyval.data_type_) = NULL;
        quickstep_yyerror(&(yylsp[-1]), yyscanner, nullptr, "Negative length supplied for VARCHAR type");
        YYERROR;
      } else {
        (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kVarChar, (yyvsp[-1].numeric_literal_value_)->long_value(), false));
        delete (yyvsp[-1].numeric_literal_value_);
      }
    }
  }
#line 3051 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 684 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = new quickstep::ParseColumnConstraintNull((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 3059 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 687 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = new quickstep::ParseColumnConstraintNotNull((yylsp[-1]).first_line, (yylsp[-1]).first_column);
  }
#line 3067 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 690 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = nullptr;
    NotSupported(&(yylsp[0]), yyscanner, "Column Constraints (UNIQUE)");
    YYERROR;
  }
#line 3077 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 695 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = nullptr;
    NotSupported(&(yylsp[-1]), yyscanner, "Column Constraints (PRIMARY KEY)");
    YYERROR;
  }
#line 3087 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 700 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = nullptr;
    delete (yyvsp[0].literal_value_);
    NotSupported(&(yylsp[-1]), yyscanner, "Column Constraints (DEFAULT)");
    YYERROR;
  }
#line 3098 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 706 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = nullptr;
    delete (yyvsp[-1].predicate_);
    NotSupported(&(yylsp[-3]), yyscanner, "Column Constraints (CHECK)");
    YYERROR;
  }
#line 3109 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 712 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_) = nullptr;
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[-1].string_value_);
    NotSupported(&(yylsp[-4]), yyscanner, "Foreign Keys");
    YYERROR;
  }
#line 3121 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 721 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_list_) = (yyvsp[-1].column_constraint_list_);
    (yyval.column_constraint_list_)->push_back((yyvsp[0].column_constraint_));
  }
#line 3130 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 725 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_list_) = new quickstep::PtrList<quickstep::ParseColumnConstraint>();
    (yyval.column_constraint_list_)->push_back((yyvsp[0].column_constraint_));
  }
#line 3139 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 731 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_list_) = nullptr;
  }
#line 3147 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 734 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.column_constraint_list_) = (yyvsp[0].column_constraint_list_);
  }
#line 3155 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 739 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-1].string_list_);
    NotSupported(&(yylsp[-3]), yyscanner, "Table Constraints (UNIQUE)");
    YYERROR;
  }
#line 3165 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 744 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-1].string_list_);
    NotSupported(&(yylsp[-4]), yyscanner, "Table Constraints (PRIMARY KEY)");
    YYERROR;
  }
#line 3175 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 749 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-6].string_list_);
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[-1].string_list_);
    NotSupported(&(yylsp[-9]), yyscanner, "Table Constraints (FOREIGN KEY)");
    YYERROR;
  }
#line 3187 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 756 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-1].predicate_);
    NotSupported(&(yylsp[-3]), yyscanner, "Table Constraints (CHECK)");
    YYERROR;
  }
#line 3197 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 763 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    NotSupported(&(yylsp[-2]), yyscanner, "Table Constraints");
    YYERROR;
  }
#line 3206 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 767 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    NotSupported(&(yylsp[0]), yyscanner, "Table Constraints");
    YYERROR;
  }
#line 3215 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 773 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /* $$ = nullptr; */
  }
#line 3223 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 776 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /* $$ = $1; */
  }
#line 3231 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 781 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.block_properties_) = new quickstep::ParseBlockProperties((yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-1].block_property_item_list_));
  }
#line 3239 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 784 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.block_properties_) = NULL;
  }
#line 3247 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 789 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.block_property_item_list_) = new quickstep::PtrList<quickstep::ParseBlockPropertyItem>();
    (yyval.block_property_item_list_)->push_back((yyvsp[0].block_property_item_));
  }
#line 3256 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 793 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.block_property_item_list_) = (yyvsp[-2].block_property_item_list_);
    (yyval.block_property_item_list_)->push_back((yyvsp[0].block_property_item_));    
  }
#line 3265 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 799 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.block_property_item_) = new quickstep::ParseBlockPropertyItem((yylsp[-1]).first_line, (yylsp[-1]).first_column,
                                               quickstep::ParseBlockPropertyItem::Property::kType, (yyvsp[0].string_value_));
  }
#line 3274 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 803 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.block_property_item_) = new quickstep::ParseBlockPropertyItem((yylsp[-1]).first_line, (yylsp[-1]).first_column,
                                               quickstep::ParseBlockPropertyItem::Property::kSort, (yyvsp[0].string_value_));
  }
#line 3283 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 807 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.block_property_item_) = new quickstep::ParseBlockPropertyItem((yylsp[-3]).first_line, (yylsp[-3]).first_column,
                                               quickstep::ParseBlockPropertyItem::Property::kCompress, (yyvsp[-1].string_list_));
  }
#line 3292 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 811 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.block_property_item_) = quickstep::ParseBlockPropertyItem::GetCompressAllItem((yylsp[-1]).first_line, (yylsp[-1]).first_column);
  }
#line 3300 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 817 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-7].string_value_);
    delete (yyvsp[-5].string_list_);
    delete (yyvsp[-1].literal_value_list_);
    (yyval.insert_statement_) = nullptr;
    NotSupported(&(yylsp[-6]), yyscanner, "list of column names in INSERT statement");
    YYERROR;
  }
#line 3313 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 825 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.insert_statement_) = new quickstep::ParseStatementInsert((yylsp[-6]).first_line, (yylsp[-6]).first_column, (yyvsp[-4].string_value_), (yyvsp[-1].literal_value_list_));
  }
#line 3321 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 830 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_statement_) = new quickstep::ParseStatementCopyFrom((yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].string_value_), (yyvsp[0].copy_from_params_));
  }
#line 3329 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 835 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_params_) = nullptr;
  }
#line 3337 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 838 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_params_) = (yyvsp[-1].copy_from_params_);
  }
#line 3345 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 843 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_params_) = new quickstep::ParseCopyFromParams((yylsp[-1]).first_line, (yylsp[-1]).first_column);
    (yyval.copy_from_params_)->set_delimiter((yyvsp[0].string_value_));
  }
#line 3354 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 847 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_params_) = new quickstep::ParseCopyFromParams((yylsp[-1]).first_line, (yylsp[-1]).first_column);
    (yyval.copy_from_params_)->escape_strings = (yyvsp[0].boolean_value_);
  }
#line 3363 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 851 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_params_) = (yyvsp[-3].copy_from_params_);
    (yyval.copy_from_params_)->set_delimiter((yyvsp[0].string_value_));
  }
#line 3372 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 855 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.copy_from_params_) = (yyvsp[-3].copy_from_params_);
    (yyval.copy_from_params_)->escape_strings = (yyvsp[0].boolean_value_);
  }
#line 3381 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 861 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.update_statement_) = new quickstep::ParseStatementUpdate((yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].assignment_list_), (yyvsp[0].predicate_));
  }
#line 3389 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 866 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.delete_statement_) = new quickstep::ParseStatementDelete((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].predicate_));
  }
#line 3397 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 871 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.assignment_list_) = (yyvsp[-2].assignment_list_);
    (yyval.assignment_list_)->push_back((yyvsp[0].assignment_));
  }
#line 3406 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 875 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.assignment_list_) = new quickstep::PtrList<quickstep::ParseAssignment>();
    (yyval.assignment_list_)->push_back((yyvsp[0].assignment_));
  }
#line 3415 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 881 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.assignment_) = new quickstep::ParseAssignment((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].string_value_), (yyvsp[0].expression_));
  }
#line 3423 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 887 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.select_statement_) = new quickstep::ParseStatementSelect((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].select_query_), (yyvsp[-1].with_list_));
  }
#line 3431 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 892 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.with_list_) = nullptr;
  }
#line 3439 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 895 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.with_list_) = (yyvsp[0].with_list_);
  }
#line 3447 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 900 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.with_list_) = new quickstep::PtrVector<quickstep::ParseSubqueryTableReference>();
    (yyval.with_list_)->push_back((yyvsp[0].with_list_element_));
  }
#line 3456 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 904 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.with_list_) = (yyvsp[-2].with_list_);
    (yyval.with_list_)->push_back((yyvsp[0].with_list_element_));
  }
#line 3465 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 910 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.with_list_element_) = new quickstep::ParseSubqueryTableReference((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].subquery_expression_));
    (yyval.with_list_element_)->set_table_reference_signature((yyvsp[-2].table_reference_signature_));
  }
#line 3474 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 917 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.select_query_) = new quickstep::ParseSelect((yylsp[-8]).first_line, (yylsp[-8]).first_column, (yyvsp[-6].selection_), (yyvsp[-5].table_reference_list_), (yyvsp[-4].predicate_), (yyvsp[-3].opt_group_by_clause_), (yyvsp[-2].opt_having_clause_), (yyvsp[-1].opt_order_by_clause_), (yyvsp[0].opt_limit_clause_));
  }
#line 3482 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 922 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /* $$ = nullptr; */
  }
#line 3490 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 925 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    NotSupported(&(yylsp[0]), yyscanner, "ALL in selection");
    YYERROR;
  }
#line 3499 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 929 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    NotSupported(&(yylsp[0]), yyscanner, "DISTINCT in selection");
    YYERROR;
  }
#line 3508 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 935 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_) = new quickstep::ParseSelectionStar((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 3516 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 938 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_) = (yyvsp[0].selection_list_);
  }
#line 3524 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 943 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_list_) = new quickstep::ParseSelectionList((yylsp[0]).first_line, (yylsp[0]).first_column);
    (yyval.selection_list_)->add((yyvsp[0].selection_item_));
  }
#line 3533 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 947 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_list_) = (yyvsp[-2].selection_list_);
    (yyval.selection_list_)->add((yyvsp[0].selection_item_));
  }
#line 3542 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 953 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_item_) = new quickstep::ParseSelectionItem((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].expression_), (yyvsp[0].string_value_));
  }
#line 3550 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 956 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_item_) = new quickstep::ParseSelectionItem((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].expression_), (yyvsp[0].string_value_));
  }
#line 3558 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 959 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.selection_item_) = new quickstep::ParseSelectionItem((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].expression_));
  }
#line 3566 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 964 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_list_) = (yyvsp[-1].table_reference_list_);
  }
#line 3574 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 969 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /* $$ = nullptr; */
  }
#line 3582 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 972 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    NotSupported(&(yylsp[0]), yyscanner, "alternate JOIN syntax (specify in WHERE clause instead)");
    YYERROR;
  }
#line 3591 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 978 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    NotSupported(&(yylsp[-1]), yyscanner, "alternate JOIN syntax (specify in WHERE clause instead)");
    YYERROR;
  }
#line 3600 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 982 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    NotSupported(&(yylsp[0]), yyscanner, "alternate JOIN syntax (specify in WHERE clause instead)");
    YYERROR;
  }
#line 3609 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 988 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-2].string_list_);
    delete (yyvsp[0].predicate_);
    NotSupported(&(yylsp[-4]), yyscanner, "alternate JOIN syntax (specify in WHERE clause instead)");
    YYERROR;
  }
#line 3620 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 994 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-2].string_list_);
    delete (yyvsp[0].predicate_);
    NotSupported(&(yylsp[-3]), yyscanner, "alternate JOIN syntax (specify in WHERE clause instead)");
    YYERROR;
  }
#line 3631 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 1000 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-2].string_list_);
    delete (yyvsp[0].predicate_);
    NotSupported(&(yylsp[-5]), yyscanner, "OUTER JOIN");
    YYERROR;
  }
#line 3642 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 1006 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-2].string_list_);
    delete (yyvsp[0].predicate_);
    NotSupported(&(yylsp[-4]), yyscanner, "OUTER JOIN");
    YYERROR;
  }
#line 3653 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 1012 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-2].string_list_);
    delete (yyvsp[0].predicate_);
    NotSupported(&(yylsp[-5]), yyscanner, "OUTER JOIN");
    YYERROR;
  }
#line 3664 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 1018 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-2].string_list_);
    delete (yyvsp[0].predicate_);
    NotSupported(&(yylsp[-4]), yyscanner, "OUTER JOIN");
    YYERROR;
  }
#line 3675 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 1024 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-2].string_list_);
    delete (yyvsp[0].predicate_);
    NotSupported(&(yylsp[-5]), yyscanner, "OUTER JOIN");
    YYERROR;
  }
#line 3686 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 1030 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-2].string_list_);
    delete (yyvsp[0].predicate_);
    NotSupported(&(yylsp[-4]), yyscanner, "OUTER JOIN");
    YYERROR;
  }
#line 3697 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 1038 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.subquery_expression_) = new quickstep::ParseSubqueryExpression((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-1].select_query_));
  }
#line 3705 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 1043 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_) = new quickstep::ParseSubqueryTableReference((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].subquery_expression_));
    (yyval.table_reference_)->set_table_reference_signature((yyvsp[0].table_reference_signature_));
  }
#line 3714 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 1047 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_) = new quickstep::ParseSimpleTableReference((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_));
    (yyval.table_reference_)->set_table_reference_signature((yyvsp[0].table_reference_signature_));
  }
#line 3723 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 1051 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_) = new quickstep::ParseSimpleTableReference((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string_value_));
  }
#line 3731 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 1056 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_signature_) = (yyvsp[0].table_reference_signature_);
  }
#line 3739 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 1059 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_signature_) = (yyvsp[0].table_reference_signature_);
  }
#line 3747 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 1064 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_signature_) = new ::quickstep::ParseTableReferenceSignature((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string_value_));
  }
#line 3755 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 1067 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_signature_) = new ::quickstep::ParseTableReferenceSignature((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].string_list_));
  }
#line 3763 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 1072 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_list_) = new quickstep::PtrList<quickstep::ParseTableReference>();
    (yyval.table_reference_list_)->push_back((yyvsp[0].table_reference_));
  }
#line 3772 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 1076 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.table_reference_list_) = (yyvsp[-2].table_reference_list_);
    (yyval.table_reference_list_)->push_back((yyvsp[0].table_reference_));
  }
#line 3781 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 1082 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_group_by_clause_) = nullptr;
  }
#line 3789 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 1085 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_group_by_clause_) = new quickstep::ParseGroupBy((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].expression_list_));
  }
#line 3797 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 1090 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_having_clause_) = nullptr;
  }
#line 3805 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 1093 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_having_clause_) = new quickstep::ParseHaving((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].predicate_));
  }
#line 3813 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 1098 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_order_by_clause_) = nullptr;
  }
#line 3821 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 1101 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_order_by_clause_) = new quickstep::ParseOrderBy((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].order_commalist_));
  }
#line 3829 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 1106 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.opt_limit_clause_) = nullptr;
  }
#line 3837 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 1109 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[0].numeric_literal_value_)->float_like()) {
      delete (yyvsp[0].numeric_literal_value_);
      (yyval.opt_limit_clause_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "LIMIT value must be an integer");
      YYERROR;
    } else {
      if ((yyvsp[0].numeric_literal_value_)->long_value() <= 0) {
        delete (yyvsp[0].numeric_literal_value_);
        (yyval.opt_limit_clause_) = nullptr;
        quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "LIMIT value must be positive");
        YYERROR;
      } else {
        (yyval.opt_limit_clause_) = new quickstep::ParseLimit((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].numeric_literal_value_));
      }
    }
  }
#line 3859 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 1128 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_commalist_) = new quickstep::PtrList<quickstep::ParseOrderByItem>();
    (yyval.order_commalist_)->push_back((yyvsp[0].order_item_));
  }
#line 3868 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 1132 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_commalist_) = (yyvsp[-2].order_commalist_);
    (yyval.order_commalist_)->push_back((yyvsp[0].order_item_));
  }
#line 3877 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 1138 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_item_) = new quickstep::ParseOrderByItem((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].expression_), (yyvsp[-1].order_direction_), (yyvsp[0].order_direction_));
    delete (yyvsp[-1].order_direction_);
    delete (yyvsp[0].order_direction_);
  }
#line 3887 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 1145 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_direction_) = nullptr;
  }
#line 3895 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 1148 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_direction_) = new bool(true);
  }
#line 3903 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 1151 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_direction_) = new bool(false);
  }
#line 3911 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 1156 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_direction_) = nullptr;
  }
#line 3919 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 1159 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_direction_) = new bool(true);
  }
#line 3927 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 1162 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.order_direction_) = new bool(false);
  }
#line 3935 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 1168 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = nullptr;
  }
#line 3943 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 1171 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 3951 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 1176 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 3959 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 1181 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[-2].predicate_)->getParsePredicateType() == quickstep::ParsePredicate::kDisjunction) {
      (yyval.predicate_) = (yyvsp[-2].predicate_);
    } else {
      (yyval.predicate_) = new quickstep::ParsePredicateDisjunction((yylsp[-2]).first_line, (yylsp[-2]).first_column);
      static_cast<quickstep::ParsePredicateDisjunction *>((yyval.predicate_))->addPredicate((yyvsp[-2].predicate_));
    }
    static_cast<quickstep::ParsePredicateDisjunction *>((yyval.predicate_))->addPredicate((yyvsp[0].predicate_));
  }
#line 3973 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 1190 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 3981 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 1195 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[-2].predicate_)->getParsePredicateType() == quickstep::ParsePredicate::kConjunction) {
      (yyval.predicate_) = (yyvsp[-2].predicate_);
    } else {
      (yyval.predicate_) = new quickstep::ParsePredicateConjunction((yylsp[-2]).first_line, (yylsp[-2]).first_column);
      static_cast<quickstep::ParsePredicateConjunction *>((yyval.predicate_))->addPredicate((yyvsp[-2].predicate_));
    }
    static_cast<quickstep::ParsePredicateConjunction *>((yyval.predicate_))->addPredicate((yyvsp[0].predicate_));
  }
#line 3995 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 1204 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 4003 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1209 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateNegation((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].predicate_));
  }
#line 4011 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1212 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 4019 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1217 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateBetween((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-4].expression_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 4027 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1220 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateNegation(
        (yylsp[-4]).first_line, (yylsp[-4]).first_column,
        new quickstep::ParsePredicateBetween((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-5].expression_), (yyvsp[-2].expression_), (yyvsp[0].expression_)));
  }
#line 4037 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1225 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-3].attribute_);
    (yyval.predicate_) = nullptr;
    NotSupported(&(yylsp[-2]), yyscanner, "NULL comparison predicates");
    YYERROR;
  }
#line 4048 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1231 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-2].attribute_);
    (yyval.predicate_) = nullptr;
    NotSupported(&(yylsp[-1]), yyscanner, "NULL comparison predicates");
    YYERROR;
  }
#line 4059 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1237 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    delete (yyvsp[-2].expression_);
    delete (yyvsp[0].string_value_);
    (yyval.predicate_) = nullptr;
    NotSupported(&(yylsp[-1]), yyscanner, "LIKE predicates");
    YYERROR;
  }
#line 4071 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 1244 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateComparison((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].comparison_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 4079 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1247 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.predicate_) = (yyvsp[-1].predicate_);
  }
#line 4087 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1254 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseBinaryExpression((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].binary_operation_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 4095 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1257 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 4103 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1262 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseBinaryExpression((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].binary_operation_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 4111 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1265 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 4119 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1270 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseUnaryExpression((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].unary_operation_), (yyvsp[0].expression_));
  }
#line 4127 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1273 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 4135 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1278 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].attribute_);
  }
#line 4143 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1281 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = new quickstep::ParseScalarLiteral((yyvsp[0].literal_value_));
  }
#line 4151 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1284 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[0].function_call_);
  }
#line 4159 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1287 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_) = (yyvsp[-1].expression_);
  }
#line 4167 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1292 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.function_call_) = new quickstep::ParseFunctionCall(
        (yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].string_value_), new quickstep::PtrList<quickstep::ParseExpression>());
  }
#line 4176 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1296 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.function_call_) = new quickstep::ParseFunctionCall(
        (yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-3].string_value_), new quickstep::ParseStar((yylsp[-1]).first_line, (yylsp[-1]).first_column));
  }
#line 4185 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1300 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.function_call_) = new quickstep::ParseFunctionCall((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].expression_list_));
  }
#line 4193 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1305 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_list_) = new quickstep::PtrList<quickstep::ParseExpression>();
    (yyval.expression_list_)->push_back((yyvsp[0].expression_));
  }
#line 4202 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1309 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.expression_list_) = (yyvsp[-2].expression_list_);
    (yyval.expression_list_)->push_back((yyvsp[0].expression_));
  }
#line 4211 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1315 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.literal_value_) = new quickstep::NullParseLiteralValue((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 4219 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1318 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.literal_value_) = (yyvsp[0].numeric_literal_value_);
  }
#line 4227 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1321 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.literal_value_) = (yyvsp[0].numeric_literal_value_);
  }
#line 4235 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1324 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /**
     * NOTE(chasseur): This case exhibits a shift/reduce conflict with the
     * minus character as a 'unary_operation' followed by a numeric literal.
     * Because Bison prefers to shift rather than reduce, this case has
     * precedence (i.e. the parser will prefer to interpret the ambiguous
     * pattern as a negative number literal rather than a unary minus operation
     * applied to a non-negative number literal).
     **/
    (yyvsp[0].numeric_literal_value_)->prependMinus();
    (yyval.literal_value_) = (yyvsp[0].numeric_literal_value_);
  }
#line 4252 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1336 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.literal_value_) = new quickstep::StringParseLiteralValue((yyvsp[0].string_value_),
                                                nullptr);  // No explicit type.
  }
#line 4261 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1340 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /**
     * NOTE(chasseur): This case exhibits a shift/reduce conflict with the
     * plain TOKEN_INTERVAL case in 'data_type' reduced and used in the case
     * below. Because Bison prefers to shift rather than reduce, this case has
     * precedence (i.e. the special
     * StringParseLiteralValue::ParseAmbiguousInterval() method will be used to
     * parse the string as either one of the interval types, rather than an
     * error being emitted because of an ambiguous type).
     **/
    quickstep::StringParseLiteralValue *parse_value;
    if (quickstep::StringParseLiteralValue::ParseAmbiguousInterval((yyvsp[0].string_value_), &parse_value)) {
      (yyval.literal_value_) = parse_value;
    } else {
      (yyval.literal_value_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Failed to parse literal as specified type");
      YYERROR;
    }
  }
#line 4285 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1359 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    quickstep::StringParseLiteralValue *parse_value
        = new quickstep::StringParseLiteralValue((yyvsp[0].string_value_), &((yyvsp[-1].data_type_)->getType()));
    delete (yyvsp[-1].data_type_);
    if (!parse_value->tryExplicitTypeParse()) {
      delete parse_value;
      (yyval.literal_value_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Failed to parse literal as specified type");
      YYERROR;
    } else {
      (yyval.literal_value_) = parse_value;
    }
  }
#line 4303 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1374 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.literal_value_list_) = new quickstep::PtrList<quickstep::ParseScalarLiteral>();
    (yyval.literal_value_list_)->push_back(new quickstep::ParseScalarLiteral((yyvsp[0].literal_value_)));
  }
#line 4312 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1378 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.literal_value_list_) = (yyvsp[-2].literal_value_list_);
    (yyval.literal_value_list_)->push_back(new quickstep::ParseScalarLiteral((yyvsp[0].literal_value_)));
  }
#line 4321 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1384 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_) = new quickstep::ParseAttribute((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string_value_));
  }
#line 4329 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1387 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.attribute_) = new quickstep::ParseAttribute((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].string_value_), (yyvsp[-2].string_value_));
  }
#line 4337 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1393 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kEqual);
  }
#line 4345 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1396 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kNotEqual);
  }
#line 4353 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1399 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kLess);
  }
#line 4361 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1402 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kLessOrEqual);
  }
#line 4369 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1405 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kGreater);
  }
#line 4377 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1408 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kGreaterOrEqual);
  }
#line 4385 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1413 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    /**
     * NOTE(chasseur): This case exhibits a shift/reduce conflict with the
     * '-' TOKEN_UNSIGNED_NUMVAL case in 'literal_value'. Because Bison prefers
     * to shift rather than reduce, the case in 'literal_value' has precedence
     * over this one.
     **/
    (yyval.unary_operation_) = &quickstep::UnaryOperationFactory::GetUnaryOperation(quickstep::UnaryOperationID::kNegate);
  }
#line 4399 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1424 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kAdd);
  }
#line 4407 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1427 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kSubtract);
  }
#line 4415 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1432 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kMultiply);
  }
#line 4423 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1435 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kDivide);
  }
#line 4431 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1441 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_list_) = new quickstep::PtrList<quickstep::ParseString>();
    (yyval.string_list_)->push_back((yyvsp[0].string_value_));
  }
#line 4440 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1445 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_list_) = (yyvsp[-2].string_list_);
    (yyval.string_list_)->push_back((yyvsp[0].string_value_));
  }
#line 4449 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1451 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.string_value_) = (yyvsp[0].string_value_);
  }
#line 4457 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1454 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    if ((yyvsp[0].string_value_)->value().empty()) {
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Zero-length identifier");
    }
    (yyval.string_value_) = (yyvsp[0].string_value_);
  }
#line 4468 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1462 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.boolean_value_) = true;
  }
#line 4476 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1465 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.boolean_value_) = true;
  }
#line 4484 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1468 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.boolean_value_) = false;
  }
#line 4492 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1471 "../SqlParser.ypp" /* yacc.c:1646  */
    {
    (yyval.boolean_value_) = false;
  }
#line 4500 "SqlParser_gen.cpp" /* yacc.c:1646  */
    break;


#line 4504 "SqlParser_gen.cpp" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
      yyerror (&yylloc, yyscanner, parsedStatement, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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
        yyerror (&yylloc, yyscanner, parsedStatement, yymsgp);
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
                      yytoken, &yylval, &yylloc, yyscanner, parsedStatement);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
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
                  yystos[yystate], yyvsp, yylsp, yyscanner, parsedStatement);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, yyscanner, parsedStatement, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, yyscanner, parsedStatement);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, yyscanner, parsedStatement);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1475 "../SqlParser.ypp" /* yacc.c:1906  */


void NotSupported(const YYLTYPE *location, yyscan_t yyscanner, const std::string &feature) {
  std::string msg;
  msg.append(feature);
  msg.append(" is not supported yet");

  quickstep_yyerror(location, yyscanner, nullptr, msg.c_str());
}

int quickstep_yyget_line_number(const YYLTYPE *yyloc) {
  return yyloc->first_line;
}

int quickstep_yyget_column_number(const YYLTYPE *yyloc) {
  return yyloc->first_column;
}
