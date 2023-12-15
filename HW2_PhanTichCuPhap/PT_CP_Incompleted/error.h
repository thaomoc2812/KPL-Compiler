/* 
 * @copyright (c) 2008, Hedspi, Hanoi University of Technology
 * @author Huu-Duc Nguyen
 * @version 1.0
 */

#ifndef __ERROR_H__
#define __ERROR_H__
#include "token.h"

typedef enum {
  ERR_ENDOFCOMMENT,
  ERR_IDENTTOOLONG,
  ERR_NUMBERTOOLONG,
  ERR_INVALIDCHARCONSTANT,
  ERR_INVALIDSYMBOL,
  ERR_INVALIDCONSTANT,
  ERR_INVALIDTYPE,
  ERR_INVALIDBASICTYPE,
  ERR_INVALIDPARAM,
  ERR_INVALIDSTATEMENT,
  ERR_INVALIDARGUMENTS,
  ERR_INVALIDCOMPARATOR,
  ERR_INVALIDEXPRESSION,
  ERR_INVALIDTERM,
  ERR_INVALIDFACTOR
} ErrorCode;


#define ERM_ENDOFCOMMENT "End of comment expected!" // (* comment
#define ERM_IDENTTOOLONG "Identification too long!" // aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
#define ERM_NUMBERTOOLONG "Value of integer number exceeds the range!" //10000000000000000000000000000000000000000000000
#define ERM_INVALIDCHARCONSTANT "Invalid const char!" // 'ab';
#define ERM_INVALIDSYMBOL "Invalid symbol!" // !
#define ERM_INVALIDCONSTANT "Invalid constant!" //Program TEST;const a =:integer; Begin;End.
#define ERM_INVALIDTYPE "Invalid type!" // Program Test; VAR c: 1234;
#define ERM_INVALIDBASICTYPE "Invalid basic type!" //Program Test;Var n : string;Function F(n : string) : string;Begin;End.
#define ERM_INVALIDPARAM "Invalid parameter!" //Program Test;Var n : string;Function F();Begin;End.
#define ERM_INVALIDSTATEMENT "Invalid statement!" //Program TEST;Begin;VAR c: CHAR;VAR i: integer;c := i;End.
#define ERM_INVALIDARGUMENTS "Invalid arguments!" //Program Test;Var n : Integer;Begin;call a b;End.
#define ERM_INVALIDCOMPARATOR "Invalid comparator!" //Program TEST;VAR c: Integer;Begin while c then c :== 6;End.
#define ERM_INVALIDEXPRESSION "Invalid expression!"
#define ERM_INVALIDTERM "Invalid term!" //Program TEST;VAR c: Integer;Begin c := 1 2;End.
#define ERM_INVALIDFACTOR "Invalid factor!" //Program TEST;VAR c: Integer;Begin if c == 5 then c := 6;End.

void error(ErrorCode err, int lineNo, int colNo);
void missingToken(TokenType tokenType, int lineNo, int colNo);
void assert(char *msg);

#endif
