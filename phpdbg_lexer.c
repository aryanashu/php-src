/* Generated by re2c 0.13.5 */
#line 1 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.l"
/*
 * phpdbg_lexer.l
 */

#include "phpdbg.h"
#include "phpdbg_cmd.h"

#include "phpdbg_parser.h"

#define LEX(v) (PHPDBG_G(lexer).v)

#define YYCTYPE unsigned char
#define YYSETCONDITION(x) LEX(state) = x;
#define YYGETCONDITION() LEX(state)
#define YYCURSOR LEX(cursor)
#define YYMARKER LEX(marker)
#define yyleng LEX(len)
#define yytext ((char*) LEX(text))
#undef YYDEBUG
#define YYDEBUG(a, b)
#define YYFILL(n)

#define NORMAL 0
#define RAW 1
#define INITIAL 2

ZEND_DECLARE_MODULE_GLOBALS(phpdbg);

void phpdbg_init_lexer (phpdbg_param_t *stack, char *input TSRMLS_DC) {
	PHPDBG_G(parser_stack) = stack;

	YYSETCONDITION(INITIAL);

	LEX(text) = YYCURSOR = (unsigned char *) input;
	LEX(len) = strlen(input);
}

int phpdbg_lex (phpdbg_param_t* yylval) {
	TSRMLS_FETCH(); /* Slow, but this is not a major problem here. TODO: Use TSRMLS_DC */

restart:
	LEX(text) = YYCURSOR;


#line 48 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.c"
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if (YYGETCONDITION() < 1) {
		goto yyc_NORMAL;
	} else {
		if (YYGETCONDITION() < 2) {
			goto yyc_RAW;
		} else {
			goto yyc_INITIAL;
		}
	}
/* *********************************** */
yyc_INITIAL:
	{
		static const unsigned char yybm[] = {
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0, 128, 128,   0,   0, 128,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			128,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
		};

		YYDEBUG(0, *YYCURSOR);
		YYFILL(3);
		yych = *YYCURSOR;
		if (yych <= 0x1F) {
			if (yych <= '\n') {
				if (yych <= 0x08) goto yy10;
				if (yych >= '\n') goto yy4;
			} else {
				if (yych != '\r') goto yy10;
			}
		} else {
			if (yych <= 'e') {
				if (yych <= ' ') goto yy2;
				if (yych <= 'd') goto yy10;
				goto yy6;
			} else {
				if (yych <= 'q') goto yy10;
				if (yych <= 'r') goto yy8;
				if (yych <= 's') goto yy7;
				goto yy10;
			}
		}
yy2:
		YYDEBUG(2, *YYCURSOR);
		++YYCURSOR;
		if (yybm[0+(yych = *YYCURSOR)] & 128) {
			goto yy18;
		}
yy3:
		YYDEBUG(3, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 161 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	YYSETCONDITION(NORMAL);

	YYCURSOR = LEX(text);
	goto restart;
}
#line 137 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy4:
		YYDEBUG(4, *YYCURSOR);
		++YYCURSOR;
		if (yybm[0+(yych = *YYCURSOR)] & 128) {
			goto yy18;
		}
		YYDEBUG(5, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 68 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	return 0;
}
#line 150 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy6:
		YYDEBUG(6, *YYCURSOR);
		yych = *++YYCURSOR;
		if (yych == 'v') goto yy16;
		goto yy3;
yy7:
		YYDEBUG(7, *YYCURSOR);
		yych = *++YYCURSOR;
		if (yych == 'h') goto yy14;
		goto yy3;
yy8:
		YYDEBUG(8, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'u') goto yy11;
yy9:
		YYDEBUG(9, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 155 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	YYSETCONDITION(RAW);
	phpdbg_init_param(yylval, EMPTY_PARAM);
	return T_RUN;
}
#line 175 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy10:
		YYDEBUG(10, *YYCURSOR);
		yych = *++YYCURSOR;
		goto yy3;
yy11:
		YYDEBUG(11, *YYCURSOR);
		yych = *++YYCURSOR;
		if (yych == 'n') goto yy13;
		YYDEBUG(12, *YYCURSOR);
		YYCURSOR = YYMARKER;
		goto yy9;
yy13:
		YYDEBUG(13, *YYCURSOR);
		yych = *++YYCURSOR;
		goto yy9;
yy14:
		YYDEBUG(14, *YYCURSOR);
		++YYCURSOR;
		YYDEBUG(15, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 150 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	YYSETCONDITION(RAW);
	phpdbg_init_param(yylval, EMPTY_PARAM);
	return T_SHELL;
}
#line 202 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy16:
		YYDEBUG(16, *YYCURSOR);
		++YYCURSOR;
		YYDEBUG(17, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 145 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	YYSETCONDITION(RAW);
	phpdbg_init_param(yylval, EMPTY_PARAM);
	return T_EVAL;
}
#line 214 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy18:
		YYDEBUG(18, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(19, *YYCURSOR);
		if (yybm[0+yych] & 128) {
			goto yy18;
		}
		YYDEBUG(20, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 139 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	/* ignore whitespace */

	goto restart;
}
#line 232 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.c"
	}
/* *********************************** */
yyc_NORMAL:
	{
		static const unsigned char yybm[] = {
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,   8,   8,  16,  16,   8,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			  8,  16,  16,   0,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  48,  16, 
			176, 176, 176, 176, 176, 176, 176, 176, 
			176, 176,   0,  16,  16,  16,  16,  16, 
			 16, 208, 208, 208, 208, 208, 208,  80, 
			 80,  80,  80,  80,  80,  80,  80,  80, 
			 80,  80,  80,  80,  80,  80,  80,  80, 
			 80,  80,  80,  16,  16,  16,  16,  16, 
			 16, 208, 208, 208, 208, 208, 208,  80, 
			 80,  80,  80,  80,  80,  80,  80,  80, 
			 80,  80,  80,  80,  80,  80,  80,  80, 
			 80,  80,  80,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
		};
		YYDEBUG(21, *YYCURSOR);
		YYFILL(11);
		yych = *YYCURSOR;
		if (yych <= 'Y') {
			if (yych <= '"') {
				if (yych <= '\f') {
					if (yych <= 0x08) goto yy30;
					if (yych <= '\t') goto yy23;
					if (yych <= '\n') goto yy26;
					goto yy30;
				} else {
					if (yych <= '\r') goto yy23;
					if (yych != ' ') goto yy30;
				}
			} else {
				if (yych <= '/') {
					if (yych <= '#') goto yy45;
					if (yych == '.') goto yy32;
					goto yy30;
				} else {
					if (yych <= '0') goto yy35;
					if (yych <= '9') goto yy32;
					if (yych <= ':') goto yy47;
					goto yy30;
				}
			}
		} else {
			if (yych <= 'm') {
				if (yych <= 'e') {
					if (yych <= 'Z') goto yy36;
					if (yych <= 'c') goto yy30;
					if (yych <= 'd') goto yy37;
					goto yy38;
				} else {
					if (yych <= 'f') goto yy39;
					if (yych == 'i') goto yy28;
					goto yy30;
				}
			} else {
				if (yych <= 't') {
					if (yych <= 'n') goto yy40;
					if (yych <= 'o') goto yy41;
					if (yych <= 's') goto yy30;
					goto yy42;
				} else {
					if (yych <= 'x') goto yy30;
					if (yych <= 'y') goto yy43;
					if (yych <= 'z') goto yy44;
					goto yy30;
				}
			}
		}
yy23:
		YYDEBUG(23, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(24, *YYCURSOR);
		if (yybm[0+yych] & 8) {
			goto yy23;
		}
		YYDEBUG(25, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 139 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	/* ignore whitespace */

	goto restart;
}
#line 340 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy26:
		YYDEBUG(26, *YYCURSOR);
		++YYCURSOR;
		if (yybm[0+(yych = *YYCURSOR)] & 8) {
			goto yy23;
		}
		YYDEBUG(27, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 68 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	return 0;
}
#line 353 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy28:
		YYDEBUG(28, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'f') goto yy92;
		goto yy31;
yy29:
		YYDEBUG(29, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 125 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	phpdbg_init_param(yylval, STR_PARAM);
	yylval->str = zend_strndup(yytext, yyleng);
	yylval->len = yyleng;
	return T_ID; 
}
#line 370 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy30:
		YYDEBUG(30, *YYCURSOR);
		yyaccept = 0;
		YYMARKER = ++YYCURSOR;
		YYFILL(3);
		yych = *YYCURSOR;
yy31:
		YYDEBUG(31, *YYCURSOR);
		if (yybm[0+yych] & 16) {
			goto yy30;
		}
		if (yych <= '9') goto yy29;
		goto yy52;
yy32:
		YYDEBUG(32, *YYCURSOR);
		yyaccept = 1;
		YYMARKER = ++YYCURSOR;
		YYFILL(3);
		yych = *YYCURSOR;
		YYDEBUG(33, *YYCURSOR);
		if (yybm[0+yych] & 32) {
			goto yy32;
		}
		if (yych <= 0x1F) {
			if (yych <= '\n') {
				if (yych <= 0x08) goto yy30;
			} else {
				if (yych != '\r') goto yy30;
			}
		} else {
			if (yych <= '#') {
				if (yych <= ' ') goto yy34;
				if (yych <= '"') goto yy30;
			} else {
				if (yych == ':') goto yy52;
				goto yy30;
			}
		}
yy34:
		YYDEBUG(34, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 106 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	phpdbg_init_param(yylval, NUMERIC_PARAM);
	yylval->num = atoi(yytext);
	return T_DIGITS;
}
#line 418 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy35:
		YYDEBUG(35, *YYCURSOR);
		yyaccept = 1;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yybm[0+yych] & 32) {
			goto yy32;
		}
		if (yych <= 0x1F) {
			if (yych <= '\n') {
				if (yych <= 0x08) goto yy31;
				goto yy34;
			} else {
				if (yych == '\r') goto yy34;
				goto yy31;
			}
		} else {
			if (yych <= '#') {
				if (yych <= ' ') goto yy34;
				if (yych <= '"') goto yy31;
				goto yy34;
			} else {
				if (yych == 'x') goto yy88;
				goto yy31;
			}
		}
yy36:
		YYDEBUG(36, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'E') goto yy85;
		goto yy31;
yy37:
		YYDEBUG(37, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'i') goto yy79;
		goto yy31;
yy38:
		YYDEBUG(38, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'n') goto yy74;
		goto yy31;
yy39:
		YYDEBUG(39, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'a') goto yy71;
		goto yy31;
yy40:
		YYDEBUG(40, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'o') goto yy69;
		goto yy31;
yy41:
		YYDEBUG(41, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'f') goto yy68;
		if (yych == 'n') goto yy64;
		goto yy31;
yy42:
		YYDEBUG(42, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'r') goto yy66;
		goto yy31;
yy43:
		YYDEBUG(43, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'e') goto yy63;
		goto yy31;
yy44:
		YYDEBUG(44, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'e') goto yy51;
		goto yy31;
yy45:
		YYDEBUG(45, *YYCURSOR);
		++YYCURSOR;
		YYDEBUG(46, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 84 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	return T_POUND;
}
#line 508 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy47:
		YYDEBUG(47, *YYCURSOR);
		++YYCURSOR;
		if ((yych = *YYCURSOR) == ':') goto yy49;
		YYDEBUG(48, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 90 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	return T_COLON;
}
#line 519 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy49:
		YYDEBUG(49, *YYCURSOR);
		++YYCURSOR;
		YYDEBUG(50, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 87 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	return T_DCOLON;
}
#line 529 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy51:
		YYDEBUG(51, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'n') goto yy57;
		goto yy31;
yy52:
		YYDEBUG(52, *YYCURSOR);
		yych = *++YYCURSOR;
		if (yych == '/') goto yy54;
yy53:
		YYDEBUG(53, *YYCURSOR);
		YYCURSOR = YYMARKER;
		if (yyaccept <= 3) {
			if (yyaccept <= 1) {
				if (yyaccept <= 0) {
					goto yy29;
				} else {
					goto yy34;
				}
			} else {
				if (yyaccept <= 2) {
					goto yy62;
				} else {
					goto yy65;
				}
			}
		} else {
			if (yyaccept <= 5) {
				if (yyaccept <= 4) {
					goto yy70;
				} else {
					goto yy91;
				}
			} else {
				goto yy93;
			}
		}
yy54:
		YYDEBUG(54, *YYCURSOR);
		yych = *++YYCURSOR;
		if (yych != '/') goto yy53;
		YYDEBUG(55, *YYCURSOR);
		++YYCURSOR;
		YYDEBUG(56, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 78 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	phpdbg_init_param(yylval, STR_PARAM);
	yylval->str = zend_strndup(yytext, yyleng);
	yylval->len = yyleng;
	return T_PROTO;
}
#line 583 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy57:
		YYDEBUG(57, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != 'd') goto yy31;
		YYDEBUG(58, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != '_') goto yy31;
yy59:
		YYDEBUG(59, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yybm[0+yych] & 64) {
			goto yy60;
		}
		goto yy31;
yy60:
		YYDEBUG(60, *YYCURSOR);
		yyaccept = 2;
		YYMARKER = ++YYCURSOR;
		YYFILL(3);
		yych = *YYCURSOR;
		YYDEBUG(61, *YYCURSOR);
		if (yybm[0+yych] & 64) {
			goto yy60;
		}
		if (yych <= 0x1F) {
			if (yych <= '\n') {
				if (yych <= 0x08) goto yy30;
			} else {
				if (yych != '\r') goto yy30;
			}
		} else {
			if (yych <= '#') {
				if (yych <= ' ') goto yy62;
				if (yych <= '"') goto yy30;
			} else {
				if (yych == ':') goto yy52;
				goto yy30;
			}
		}
yy62:
		YYDEBUG(62, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 118 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	phpdbg_init_param(yylval, OP_PARAM);
	yylval->str = zend_strndup(yytext, yyleng);
	yylval->len = yyleng;
	return T_OPCODE;
}
#line 636 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy63:
		YYDEBUG(63, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != 's') goto yy31;
yy64:
		YYDEBUG(64, *YYCURSOR);
		yyaccept = 3;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych <= '\r') {
			if (yych <= 0x08) goto yy31;
			if (yych <= '\n') goto yy65;
			if (yych <= '\f') goto yy31;
		} else {
			if (yych <= ' ') {
				if (yych <= 0x1F) goto yy31;
			} else {
				if (yych != '#') goto yy31;
			}
		}
yy65:
		YYDEBUG(65, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 94 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	phpdbg_init_param(yylval, NUMERIC_PARAM);
	yylval->num = 1;		
	return T_TRUTHY;
}
#line 666 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy66:
		YYDEBUG(66, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != 'u') goto yy31;
		YYDEBUG(67, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'e') goto yy64;
		goto yy31;
yy68:
		YYDEBUG(68, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != 'f') goto yy31;
yy69:
		YYDEBUG(69, *YYCURSOR);
		yyaccept = 4;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych <= '\r') {
			if (yych <= 0x08) goto yy31;
			if (yych <= '\n') goto yy70;
			if (yych <= '\f') goto yy31;
		} else {
			if (yych <= ' ') {
				if (yych <= 0x1F) goto yy31;
			} else {
				if (yych != '#') goto yy31;
			}
		}
yy70:
		YYDEBUG(70, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 100 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	phpdbg_init_param(yylval, NUMERIC_PARAM);
	yylval->num = 0;
	return T_FALSY;
}
#line 706 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy71:
		YYDEBUG(71, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != 'l') goto yy31;
		YYDEBUG(72, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != 's') goto yy31;
		YYDEBUG(73, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'e') goto yy69;
		goto yy31;
yy74:
		YYDEBUG(74, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != 'a') goto yy31;
		YYDEBUG(75, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != 'b') goto yy31;
		YYDEBUG(76, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != 'l') goto yy31;
		YYDEBUG(77, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != 'e') goto yy31;
		YYDEBUG(78, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'd') goto yy64;
		goto yy31;
yy79:
		YYDEBUG(79, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != 's') goto yy31;
		YYDEBUG(80, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != 'a') goto yy31;
		YYDEBUG(81, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != 'b') goto yy31;
		YYDEBUG(82, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != 'l') goto yy31;
		YYDEBUG(83, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != 'e') goto yy31;
		YYDEBUG(84, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'd') goto yy69;
		goto yy31;
yy85:
		YYDEBUG(85, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != 'N') goto yy31;
		YYDEBUG(86, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != 'D') goto yy31;
		YYDEBUG(87, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == '_') goto yy59;
		goto yy31;
yy88:
		YYDEBUG(88, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yybm[0+yych] & 128) {
			goto yy89;
		}
		goto yy31;
yy89:
		YYDEBUG(89, *YYCURSOR);
		yyaccept = 5;
		YYMARKER = ++YYCURSOR;
		YYFILL(3);
		yych = *YYCURSOR;
		YYDEBUG(90, *YYCURSOR);
		if (yybm[0+yych] & 128) {
			goto yy89;
		}
		if (yych <= 0x1F) {
			if (yych <= '\n') {
				if (yych <= 0x08) goto yy30;
			} else {
				if (yych != '\r') goto yy30;
			}
		} else {
			if (yych <= '#') {
				if (yych <= ' ') goto yy91;
				if (yych <= '"') goto yy30;
			} else {
				if (yych == ':') goto yy52;
				goto yy30;
			}
		}
yy91:
		YYDEBUG(91, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 112 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	phpdbg_init_param(yylval, ADDR_PARAM);
	yylval->addr = strtoul(yytext, 0, 16);
	return T_ADDR;
}
#line 825 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy92:
		YYDEBUG(92, *YYCURSOR);
		yyaccept = 6;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych <= '\r') {
			if (yych <= 0x08) goto yy31;
			if (yych <= '\n') goto yy93;
			if (yych <= '\f') goto yy31;
		} else {
			if (yych <= ' ') {
				if (yych <= 0x1F) goto yy31;
			} else {
				if (yych != '#') goto yy31;
			}
		}
yy93:
		YYDEBUG(93, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 72 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	YYSETCONDITION(RAW);
	phpdbg_init_param(yylval, EMPTY_PARAM);
	return T_IF;
}
#line 850 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.c"
	}
/* *********************************** */
yyc_RAW:
	{
		static const unsigned char yybm[] = {
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64, 224, 128,  64,  64, 224,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			224,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
		};
		YYDEBUG(94, *YYCURSOR);
		YYFILL(2);
		yych = *YYCURSOR;
		if (yybm[0+yych] & 32) {
			goto yy96;
		}
		if (yych == '\n') goto yy99;
		goto yy101;
yy96:
		YYDEBUG(96, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(97, *YYCURSOR);
		if (yybm[0+yych] & 32) {
			goto yy96;
		}
		if (yych == '\n') goto yy103;
		goto yy101;
yy98:
		YYDEBUG(98, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 132 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	phpdbg_init_param(yylval, STR_PARAM);
	yylval->str = zend_strndup(yytext, yyleng);
	yylval->len = yyleng;
	return T_INPUT;
}
#line 918 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy99:
		YYDEBUG(99, *YYCURSOR);
		++YYCURSOR;
		if (yybm[0+(yych = *YYCURSOR)] & 128) {
			goto yy103;
		}
		YYDEBUG(100, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 68 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	return 0;
}
#line 931 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy101:
		YYDEBUG(101, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(102, *YYCURSOR);
		if (yybm[0+yych] & 64) {
			goto yy101;
		}
		goto yy98;
yy103:
		YYDEBUG(103, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(104, *YYCURSOR);
		if (yybm[0+yych] & 128) {
			goto yy103;
		}
		YYDEBUG(105, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 139 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	/* ignore whitespace */

	goto restart;
}
#line 959 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.c"
	}
}
#line 168 "/home/pi/php-src/sapi/phpdbg/phpdbg_lexer.l"

}
