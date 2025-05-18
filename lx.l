%{
#include "y.tab.h"  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

char* removeUnderline(const char* str);

%}
%option noyywrap
%option never-interactive


%x COMMENT
%x STRINGD
%x STRINGS
%x STRINGB
%x TEMPLATE
%x COMMENTONE

DIGIT [0-9]

%%
%{ 
    char str[1000];
    char bufferString[1000];
%}

abstract { return ABSTRACT; }
any { return ANY; }
as { return AS; }
bool { return BOOLEAN; }
break { return BREAK; }
case { return CASE; }
catch { return CATCH; }
class { return CLASS; }
const { return CONST; }
constructor { return CONSTRUCTOR; }
continue { return CONTINUE; }
debugger { return DEBUGGER; }
default { return DEFAULT; }
delete { return DELETE; }
do { return DO; }
dynamic { return DYNAMIC; }
else { return ELSE; }
enum { return ENUM; }
export { return EXPORT; }
extends { return EXTENDS; }
extension { return EXTENSION; }
external { return EXTERNAL; }
factory { return FACTORY; }
false { return _FALSE; }
finally { return FINALLY; }
for { return FOR; }
from { return FROM; }
function { return FUNCTION; }
get { return GET; }
if { return IF; }
implements { return IMPLEMENTS; }
import { return IMPORT; }
in { return IN; }
instanceof { return INSTANCEOF; }
is { return IS; }
int { return INT; }
double { return DOUBLE; }
num { return NUM; }
void { return VOID; }
late { return LATE; }
let { return LET; }
module { return MODULE; }
mixin { return MIXIN; }
never { return NEVER; }
Never { return NEVER; }
new { return NEW; }
null { return _NULL; }
number { return NUMBER; }
object { return OBJECT; }
of { return OF; }
package { return PACKAGE; }
private { return PRIVATE; }
protected { return PROTECTED; }
public { return PUBLIC; }
readonly { return READONLY; }
require { return REQUIRE; }
return { return RETURN; }
set { return SET; }
static { return STATIC; }
string { return STRING; }
super { return SUPER; }
switch { return SWITCH; }
symbol { return SYMBOL; }
this { return THIS; }
throw { return THROW; }
true { return _TRUE; }
try { return TRY; }
typeof { return TYPEOF; }
typedef { return TYPEDEF; }
unknown { return UNKNOWN; }
var { return VAR; }
while { return WHILE; }

"?" { return OPT_PARAM; }
"%" { return MOD; }
"%=" { return MOD_ASSIGNMENT; }
"+" { return PLUS; }
"+=" { return PLUS_ASSIGNMENT; }
"++" { return INCREMENT; }
"-" { return MINUS; }
"-=" { return MINUS_ASSIGNMENT; }
"--" { return DECREMENT; }
"*" { return MUL; }
"*=" { return MUL_ASSIGNMENT; }
"=" { return ASSIGNMENT; }
"==" { return EQUAL; }
"!" { return BIT_NOT; }
"!=" { return NOT_EQUAL; }
">" { return MORE; }
">=" { return MORE_OR_EQUAL; }
"<" { return LESS; }
"<=" { return LESS_OR_EQUAL; }
"/" { return DIV; }
"/=" { return DIV_ASSIGNMENT; }
"^" { return BIT_XOR; }
"~" { return BIT_NOT; }
"&" { return BIT_AND; }
"&&" { return AND; }
"|" { return BIT_OR; }
"||" { return OR; }
"[" { return LEFT_SQUARE_BRACKET; }
"]" { return RIGHT_SQUARE_BRACKET; }
"(" { return LEFT_ROUND_BRACKET; }
")" { return RIGHT_ROUND_BRACKET; }
"{" { return LEFT_FIGURE_BRACKET; }
"}" { return RIGHT_FIGURE_BRACKET; }
"??" { return NULL_COALESCE; }
"?." { return SAFE_NAVIGATE; }
".." { return CASCADE; }
"~/" { return INT_DIV; }
"as" { return CAST; }
"is" { return IS; }
":" { return COLON; }
";" { return SEMICOLON; }
"\n" { return ENTER; }
"@" { return DOG; }
"," { return COMMA; }

\" { 
    BEGIN(STRINGD);
    str[0] = 0;
}
<STRINGD>\\[xX][^0-9a-fA-F] {printf("ERROR! Invalid hexadecimal escape sequence.\n");}
<STRINGD>\\[xX][0-9a-fA-F]{1,2} {
    char* end;
    long int num = strtol(yytext+2, &end, 16);
    char asciiChar = static_cast<char>(num);
    strncat(str, &asciiChar, 1);
}
<STRINGD>\\[0-7]{1,2} {
    char* end;
    long int num = strtol(yytext+1, &end, 8);
    char asciiChar = static_cast<char>(num);
    strncat(str, &asciiChar, 1);
}
<STRINGD>[^\\\"\'\n]+ {strcat(str, yytext);}
<STRINGD>\\n {strcat(str, "\n");}
<STRINGD>\\t {strcat(str, "\t");}
<STRINGD>\\\\ {strcat(str, "\\");}
<STRINGD>\\\" {strcat(str, "\"");}
<STRINGD>\\\' {strcat(str, "\'");}
<STRINGD>\" {
    yylval.Str = strdup(str);
    BEGIN(INITIAL);
    return STRING_LITERAL;
}
<STRINGD>\n {
    printf("ERROR! Line break inside literal.\n");
    exit(1);
}
<STRINGD><<EOF>> {
    printf("ERROR! Unterminated string literal.\n");
    exit(1);
}


\' { 
    BEGIN(STRINGS);
    str[0] = 0;
}
<STRINGS>\\[xX][^0-9a-fA-F] {printf("ERROR! Invalid hexadecimal escape sequence.\n");}
<STRINGS>\\[xX][0-9a-fA-F]{1,2} {
    char* end;
    long int num = strtol(yytext+2, &end, 16);
    char asciiChar = static_cast<char>(num);
    strncat(str, &asciiChar, 1);
}
<STRINGS>\\[0-7]{1,2} {
    char* end;
    long int num = strtol(yytext+1, &end, 8);
    char asciiChar = static_cast<char>(num);
    strncat(str, &asciiChar, 1);
}
<STRINGS>[^\\\"\'\n]+ {strcat(str, yytext);}
<STRINGS>\\n {strcat(str, "\n");}
<STRINGS>\\t {strcat(str, "\t");}
<STRINGS>\\\\ {strcat(str, "\\");}
<STRINGS>\\\" {strcat(str, "\"");}
<STRINGS>\\\' {strcat(str, "\'");}
<STRINGS>\\0 {strcat(str, "\0");}
<STRINGS>\' {
    yylval.Str = strdup(str);
    BEGIN(INITIAL);
    return STRING_LITERAL;
}
<STRINGS>\n {
    printf("ERROR! Line break inside literal.\n");
    exit(1);
}
<STRINGS><<EOF>> {
    printf("ERROR! Unterminated string literal.\n");
    exit(1);
}


\` { 
    BEGIN(STRINGB);
    str[0] = 0;
}
<STRINGB>\\[xX][^0-9a-fA-F] {printf("ERROR! Invalid hexadecimal escape sequence.\n");}
<STRINGB>\\[xX][0-9a-fA-F]{1,2} {
    char* end;
    long int num = strtol(yytext+2, &end, 16);
    char asciiChar = static_cast<char>(num);
    strncat(str, &asciiChar, 1);
}
<STRINGB>\\n {strcat(str, "\n");}
<STRINGB>\\t {strcat(str, "\t");}
<STRINGB>\\\\ {strcat(str, "\\");}
<STRINGB>\\\" {strcat(str, "\"");}
<STRINGB>\\\' {strcat(str, "\'");}
<STRINGB>\n {strcat(str, "\n");}
<STRINGB>\$\{ {
    strcat(str, "${");
    BEGIN(TEMPLATE);
}
<STRINGB>\$\{\s*\} {
    printf("ERROR! Unexpected '}'.\n");
    exit(1);
}
<STRINGB>[\$\{\}]+ {strcat(str, yytext);} ////// 
<STRINGB>\\[0-7]{2} {
    printf("ERROR! Octal escapes not allowed.\n");
    exit(1);
}
<STRINGB>[^\\\`\n] {strcat(str, yytext);}
<STRINGB>\\` {strcat(str, "`");}
<STRINGB>\` {
    yylval.Str = strdup(str);
    BEGIN(INITIAL);
    return STRING_LITERAL;
}
<STRINGB><<EOF>> {
    printf("ERROR! Unterminated string literal.\n");
    exit(1);
}

<TEMPLATE>\} {
    printf("WARNING! Template not supported.\n");
    strcat(str, yytext);
    BEGIN(STRINGB);
}
<TEMPLATE>[^\}]* {strcat(str, yytext);}
<TEMPLATE><<EOF>> {
    printf("ERROR! Missing }.\n");
    exit(1);
}

\/\/ {BEGIN(COMMENTONE);}
<COMMENTONE>[^\n]* {}
<COMMENTONE>\n {BEGIN(INITIAL);}
<COMMENTONE><<EOF>> {BEGIN(INITIAL);}

"/*" {BEGIN(COMMENT);}
<COMMENT>[^*]+ {}
<COMMENT>"*"+[^*/] {}
<COMMENT>"*"+"/" {BEGIN(INITIAL);}
<COMMENT><<EOF>> {
    printf("ERROR! Unclosed comment.\n");
    exit(1);
}

{DIGIT}(\_?{DIGIT})* { /*Десятичное число правильное*/
    bufferString[0] = 0;
    strcat(bufferString, yytext);
    int buffLen = strlen(bufferString);
    if (bufferString[0] == '0' && buffLen > 1)
    {
        printf("ERROR: illegal using of zero in INT in line %s.\n", yytext);
		exit(1);
    }
    else
    {
        char* buffer = removeUnderline(bufferString);
        int res = atoi(buffer);
        fprintf(yyout, "INT: %d\n", res);
    }
}

{DIGIT}(\_*{DIGIT})*\_+ {
    printf("ERROR: illegal underscore in INT in line %s.\n", yytext);
	exit(1);
}

0(x|X)[0-9a-fA-F](_?[0-9a-fA-F]+)* { /* Число шестнадцатеричное правильное */
    bufferString[0] = 0;
    strcat(bufferString, yytext);
    char* buffer = removeUnderline(bufferString);
    char* end, numStr[20];
    long int res = strtol(buffer+2, &end, 16);
    snprintf(numStr, sizeof(numStr), "%ld", res);
    fprintf(yyout, "INT: %s\n", numStr);
}

((0\_*(x|X){2,}|(0\_*(x|X)))\_*[0-9a-fA-F](\_*[0-9a-fA-F]+)*\_*)|(0\_*(x|X){2,})\_* {
    printf("ERROR: hex syntax error %s.\n", yytext);
	exit(1);
}

0(o|O)[0-7](_?[0-7]+)* { /* Число восьмеричное правильное */
    bufferString[0] = 0;
    strcat(bufferString, yytext);
    char* buffer = removeUnderline(bufferString);
    char* end, numStr[20];
    long int res = strtol(buffer+2, &end, 8);
    snprintf(numStr, sizeof(numStr), "%ld", res);
    fprintf(yyout, "INT: %s\n", numStr);
}

((0\_*(o|O){2,}|(0\_*(o|O)))\_*[0-7](\_*[0-7]+)*\_*)|(0\_*(o|O){2,})\_* {
    printf("ERROR: octal syntax error %s.\n", yytext);
	exit(1);
}

0(b|B)[01](_?[01]+)* { /* Число двоичное правильное */
    bufferString[0] = 0;
    strcat(bufferString, yytext);
    char* buffer = removeUnderline(bufferString);
    char* end, numStr[20];
    long int res = strtol(buffer+2, &end, 2);
    snprintf(numStr, sizeof(numStr), "%ld", res);
    fprintf(yyout, "INT: %s\n", numStr);
}

((0\_*(b|B){2,}|(0\_*(b|B)))\_*[01](\_*[01]+)*\_*)|(0\_*(b|B){2,})\_* {
    printf("ERROR: octal syntax error %s.\n", yytext);
	exit(1);
}

(([0-9](\_?[0-9])*)?\.[0-9](\_?[0-9])*|[0-9](\_?[0-9])*\.?)((e|E)(\+|\-)?[0-9](\_?[0-9])*)? {
    /* Число с плавающей запятой правильное */
    bufferString[0] = 0;
    strcat(bufferString, yytext);
    char* buffer = removeUnderline(bufferString);
    char numStr[20];
    float res = strtof(buffer, NULL);
    snprintf(numStr, sizeof(numStr), "%f", res);
    fprintf(yyout, "FLOAT: %s\n", numStr);
}

({DIGIT}(\_*{DIGIT})*\_+)\.{DIGIT}(\_*{DIGIT})*((e|E)(\+|\-)?{DIGIT}(\_*{DIGIT})*)? {
    printf("ERROR: float syntax error %s.\n", yytext);
    exit(1);
}

({DIGIT}(\_*{DIGIT})*)?\.{DIGIT}(\_*{DIGIT})*\_+((e|E)(\+|\-)?{DIGIT}(\_*{DIGIT})*)? {
    printf("ERROR: float syntax error %s.\n", yytext);
    exit(1);
}

(({DIGIT}(\_*{DIGIT})*)?\.)?{DIGIT}(\_*{DIGIT})*((e|E)(\+|\-)?\_+{DIGIT}(\_*{DIGIT})*) {
    printf("ERROR: float syntax error %s.\n", yytext);
    exit(1);
}

(({DIGIT}(\_*{DIGIT})*)?\.)?{DIGIT}(\_*{DIGIT})*((e|E)(\+|\-)?{DIGIT}(\_*{DIGIT})*\_+) {
    printf("ERROR: float syntax error %s.\n", yytext);
    exit(1);
}

(({DIGIT}(\_*{DIGIT})*)?\.)?{DIGIT}(\_*{DIGIT})*((e|E)(\+|\-)?)(\_)* {
    printf("ERROR: float syntax error %s.\n", yytext);
    exit(1);
}

[_A-Za-z]+[_0-9A-Za-z]* {fprintf(yyout, "Found ID: %s\n", yytext);}

.|\n {}

%%

char* removeUnderline(const char* str) {
    int len = strlen(str);
    char* result = (char*)malloc(len + 1);
    int result_index = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] != '_') {
            result[result_index] = str[i];
            result_index++;
        }
    }

    result[result_index] = '\0';
    return result;
}
