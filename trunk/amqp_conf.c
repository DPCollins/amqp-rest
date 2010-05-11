/* Generated by re2c 0.13.3 on Fri May  7 19:03:46 2010 */
#line 1 "amqp_conf.re.c"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>

#define	EOI	0

//typedef unsigned int uint;
typedef unsigned char uchar;

#define	BSIZE	8192

#define	YYCTYPE		uchar
#define	YYCURSOR	cursor
#define	YYLIMIT		s->lim
#define	YYMARKER	s->ptr
#define	YYFILL(n)	{cursor = fill(s, cursor);}

#define	RET(i)	{s->cur = cursor; return i;}

#include "amqp-rest.h"

unsigned char *fill(Scanner *s, uchar *cursor){
	if(!s->eof) {
		unsigned int cnt = s->tok - s->bot;
		if(cnt){
			memcpy(s->bot, s->tok, s->lim - s->tok);
			s->tok = s->bot;
			s->ptr -= cnt;
			cursor -= cnt;
			s->pos -= cnt;
			s->lim -= cnt;
		}
		if((s->top - s->lim) < BSIZE){
			unsigned char *buf = (uchar*) malloc(((s->lim - s->bot) + BSIZE)*sizeof(uchar));
			memcpy(buf, s->tok, s->lim - s->tok);
			s->tok = buf;
			s->ptr = &buf[s->ptr - s->bot];
			cursor = &buf[cursor - s->bot];
			s->pos = &buf[s->pos - s->bot];
			s->lim = &buf[s->lim - s->bot];
			s->top = &s->lim[BSIZE];
			free(s->bot);
			s->bot = buf;
		}
		if((cnt = read(s->fd, (char*) s->lim, BSIZE)) != BSIZE){
			s->eof = &s->lim[cnt]; *(s->eof)++ = '\n';
		}
		s->lim += cnt;
	}
	return cursor;
}

int scan(Scanner *s){
	unsigned char *cursor = s->cur;
	int ret=0;
std:
	s->tok = cursor;
#line 78 "amqp_conf.re.c"



#line 69 "amqp_conf.c"
{
	YYCTYPE yych;

	if ((YYLIMIT - YYCURSOR) < 9) YYFILL(9);
	yych = *YYCURSOR;
	switch (yych) {
	case 0x09:	goto yy18;
	case 0x0A:	goto yy20;
	case 0x0B:
	case 0x0C:	goto yy11;
	case 0x0D:	goto yy13;
	case ' ':	goto yy16;
	case '#':	goto yy4;
	case '/':	goto yy2;
	case ';':	goto yy14;
	case 'a':	goto yy10;
	case 'd':	goto yy6;
	case 'h':	goto yy9;
	case 'l':	goto yy7;
	case 'p':	goto yy8;
	default:	goto yy22;
	}
yy2:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '*':	goto yy66;
	default:	goto yy3;
	}
yy3:
#line 134 "amqp_conf.re.c"
	{
		printf("unexpected character: %c line %d \n", *s->tok, s->line);
		goto std;
	    }
#line 104 "amqp_conf.c"
yy4:
	++YYCURSOR;
#line 83 "amqp_conf.re.c"
	{ goto unixcomment; }
#line 109 "amqp_conf.c"
yy6:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':	goto yy60;
	default:	goto yy3;
	}
yy7:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'o':	goto yy46;
	default:	goto yy3;
	}
yy8:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'i':	goto yy35;
	case 'o':	goto yy36;
	default:	goto yy3;
	}
yy9:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 't':	goto yy31;
	default:	goto yy3;
	}
yy10:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'm':	goto yy26;
	default:	goto yy3;
	}
yy11:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy25;
yy12:
#line 120 "amqp_conf.re.c"
	{ RET(8912); goto std; }
#line 148 "amqp_conf.c"
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x0A:	goto yy23;
	default:	goto yy25;
	}
yy14:
	++YYCURSOR;
#line 122 "amqp_conf.re.c"
	{  goto std; }
#line 159 "amqp_conf.c"
yy16:
	++YYCURSOR;
#line 123 "amqp_conf.re.c"
	{  goto std; }
#line 164 "amqp_conf.c"
yy18:
	++YYCURSOR;
#line 124 "amqp_conf.re.c"
	{ goto std;  }
#line 169 "amqp_conf.c"
yy20:
	++YYCURSOR;
yy21:
#line 127 "amqp_conf.re.c"
	{
		if(cursor == s->eof) RET(EOI);
		s->pos = cursor; s->line++;
		goto std;
	    }
#line 179 "amqp_conf.c"
yy22:
	yych = *++YYCURSOR;
	goto yy3;
yy23:
	yych = *++YYCURSOR;
	goto yy21;
yy24:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy25:
	switch (yych) {
	case 0x0B:
	case 0x0C:
	case 0x0D:	goto yy24;
	default:	goto yy12;
	}
yy26:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'q':	goto yy28;
	default:	goto yy27;
	}
yy27:
	YYCURSOR = YYMARKER;
	goto yy3;
yy28:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'p':	goto yy29;
	default:	goto yy27;
	}
yy29:
	++YYCURSOR;
#line 108 "amqp_conf.re.c"
	{
						s->parm = 4;
						goto param;
					}
#line 219 "amqp_conf.c"
yy31:
	yych = *++YYCURSOR;
	switch (yych) {
	case 't':	goto yy32;
	default:	goto yy27;
	}
yy32:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'p':	goto yy33;
	default:	goto yy27;
	}
yy33:
	++YYCURSOR;
#line 104 "amqp_conf.re.c"
	{
						s->parm = 6;
						goto ip_param;
					}
#line 239 "amqp_conf.c"
yy35:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy40;
	default:	goto yy27;
	}
yy36:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'r':	goto yy37;
	default:	goto yy27;
	}
yy37:
	yych = *++YYCURSOR;
	switch (yych) {
	case 't':	goto yy38;
	default:	goto yy27;
	}
yy38:
	++YYCURSOR;
#line 99 "amqp_conf.re.c"
	{
						s->parm = 3;
						goto dparam;
					}
#line 265 "amqp_conf.c"
yy40:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'f':	goto yy41;
	default:	goto yy27;
	}
yy41:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'i':	goto yy42;
	default:	goto yy27;
	}
yy42:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'l':	goto yy43;
	default:	goto yy27;
	}
yy43:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'e':	goto yy44;
	default:	goto yy27;
	}
yy44:
	++YYCURSOR;
#line 113 "amqp_conf.re.c"
	{
						s->parm = 7;
						goto param;
					}
#line 297 "amqp_conf.c"
yy46:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'g':	goto yy47;
	default:	goto yy27;
	}
yy47:
	yych = *++YYCURSOR;
	switch (yych) {
	case '_':	goto yy48;
	case 'f':	goto yy49;
	default:	goto yy27;
	}
yy48:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'l':	goto yy54;
	default:	goto yy27;
	}
yy49:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'i':	goto yy50;
	default:	goto yy27;
	}
yy50:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'l':	goto yy51;
	default:	goto yy27;
	}
yy51:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'e':	goto yy52;
	default:	goto yy27;
	}
yy52:
	++YYCURSOR;
#line 90 "amqp_conf.re.c"
	{
						s->parm = 2;
						goto param;
					}
#line 342 "amqp_conf.c"
yy54:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'e':	goto yy55;
	default:	goto yy27;
	}
yy55:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'v':	goto yy56;
	default:	goto yy27;
	}
yy56:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'e':	goto yy57;
	default:	goto yy27;
	}
yy57:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'l':	goto yy58;
	default:	goto yy27;
	}
yy58:
	++YYCURSOR;
#line 95 "amqp_conf.re.c"
	{
						s->parm = 5;
						goto lparam;
					}
#line 374 "amqp_conf.c"
yy60:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'e':	goto yy61;
	default:	goto yy27;
	}
yy61:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'm':	goto yy62;
	default:	goto yy27;
	}
yy62:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'o':	goto yy63;
	default:	goto yy27;
	}
yy63:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'n':	goto yy64;
	default:	goto yy27;
	}
yy64:
	++YYCURSOR;
#line 85 "amqp_conf.re.c"
	{
						s->parm = 1;
						goto _bool;
					}
#line 406 "amqp_conf.c"
yy66:
	++YYCURSOR;
#line 82 "amqp_conf.re.c"
	{ goto comment; }
#line 411 "amqp_conf.c"
}
#line 138 "amqp_conf.re.c"

//s->tok = cursor; s->parm =3; goto param; 
//(PATH)*";"		{ RET(2001); }
//
	


param:
 s->ptok=cursor;

#line 424 "amqp_conf.c"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case '-':	goto yy70;
	case '.':
	case '/':	goto yy72;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy73;
	case ':':
	case '@':	goto yy76;
	case ';':	goto yy74;
	default:	goto yy77;
	}
yy70:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '-':
	case '.':
	case '/':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy88;
	case ';':	goto yy90;
	default:	goto yy71;
	}
yy71:
#line 153 "amqp_conf.re.c"
	{  goto param; }
#line 576 "amqp_conf.c"
yy72:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '-':	goto yy88;
	case '.':
	case '/':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy86;
	case ':':
	case '@':	goto yy80;
	case ';':	goto yy91;
	default:	goto yy71;
	}
yy73:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '-':	goto yy88;
	case '.':
	case '/':	goto yy86;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy84;
	case ':':
	case '@':	goto yy80;
	case ';':	goto yy83;
	default:	goto yy71;
	}
yy74:
	++YYCURSOR;
yy75:
#line 149 "amqp_conf.re.c"
	{ RET(303); }
#line 730 "amqp_conf.c"
yy76:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '.':
	case '/':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case ':':
	case ';':
	case '@':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy81;
	default:	goto yy71;
	}
yy77:
	yych = *++YYCURSOR;
	goto yy71;
yy78:
	++YYCURSOR;
#line 150 "amqp_conf.re.c"
	{ RET(301 ); }
#line 811 "amqp_conf.c"
yy80:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy81:
	switch (yych) {
	case '.':
	case '/':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case ':':
	case '@':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy80;
	case ';':	goto yy78;
	default:	goto yy82;
	}
yy82:
	YYCURSOR = YYMARKER;
	goto yy71;
yy83:
	yych = *++YYCURSOR;
	goto yy75;
yy84:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '-':	goto yy88;
	case '.':
	case '/':	goto yy86;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy84;
	case ':':
	case '@':	goto yy80;
	case ';':	goto yy83;
	default:	goto yy82;
	}
yy86:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '-':	goto yy88;
	case '.':
	case '/':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy86;
	case ':':
	case '@':	goto yy80;
	case ';':	goto yy91;
	default:	goto yy82;
	}
yy88:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '-':
	case '.':
	case '/':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy88;
	case ';':	goto yy90;
	default:	goto yy82;
	}
yy90:
	yych = *++YYCURSOR;
	goto yy75;
yy91:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy75;
}
#line 155 "amqp_conf.re.c"


_bool: 
 s->ptok=cursor;

#line 1134 "amqp_conf.c"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':	goto yy98;
	case '1':	goto yy96;
	case ';':	goto yy100;
	case 'o':	goto yy94;
	default:	goto yy102;
	}
yy94:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'f':	goto yy103;
	case 'n':	goto yy105;
	default:	goto yy95;
	}
yy95:
#line 167 "amqp_conf.re.c"
	{  goto _bool; }
#line 1156 "amqp_conf.c"
yy96:
	++YYCURSOR;
#line 162 "amqp_conf.re.c"
	{ RET(101); }
#line 1161 "amqp_conf.c"
yy98:
	++YYCURSOR;
#line 163 "amqp_conf.re.c"
	{ RET(102); }
#line 1166 "amqp_conf.c"
yy100:
	++YYCURSOR;
#line 165 "amqp_conf.re.c"
	{ goto std; }
#line 1171 "amqp_conf.c"
yy102:
	yych = *++YYCURSOR;
	goto yy95;
yy103:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'f':	goto yy107;
	default:	goto yy104;
	}
yy104:
	YYCURSOR = YYMARKER;
	goto yy95;
yy105:
	++YYCURSOR;
#line 160 "amqp_conf.re.c"
	{ RET( 101); }
#line 1188 "amqp_conf.c"
yy107:
	++YYCURSOR;
#line 161 "amqp_conf.re.c"
	{ RET( 102); }
#line 1193 "amqp_conf.c"
}
#line 169 "amqp_conf.re.c"


lparam: 
 s->ptok=cursor;

#line 1201 "amqp_conf.c"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 7) YYFILL(7);
	yych = *YYCURSOR;
	switch (yych) {
	case ';':	goto yy118;
	case 'a':	goto yy114;
	case 'c':	goto yy113;
	case 'd':	goto yy117;
	case 'e':	goto yy111;
	case 'n':	goto yy116;
	case 'w':	goto yy115;
	default:	goto yy120;
	}
yy111:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'r':	goto yy152;
	default:	goto yy112;
	}
yy112:
#line 183 "amqp_conf.re.c"
	{  goto lparam; }
#line 1225 "amqp_conf.c"
yy113:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'o':	goto yy145;
	default:	goto yy112;
	}
yy114:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'l':	goto yy140;
	default:	goto yy112;
	}
yy115:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'a':	goto yy133;
	default:	goto yy112;
	}
yy116:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'o':	goto yy127;
	default:	goto yy112;
	}
yy117:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'e':	goto yy121;
	default:	goto yy112;
	}
yy118:
	++YYCURSOR;
#line 181 "amqp_conf.re.c"
	{ goto std; }
#line 1260 "amqp_conf.c"
yy120:
	yych = *++YYCURSOR;
	goto yy112;
yy121:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':	goto yy123;
	default:	goto yy122;
	}
yy122:
	YYCURSOR = YYMARKER;
	goto yy112;
yy123:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'u':	goto yy124;
	default:	goto yy122;
	}
yy124:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'g':	goto yy125;
	default:	goto yy122;
	}
yy125:
	++YYCURSOR;
#line 179 "amqp_conf.re.c"
	{ RET(6); }
#line 1289 "amqp_conf.c"
yy127:
	yych = *++YYCURSOR;
	switch (yych) {
	case 't':	goto yy128;
	default:	goto yy122;
	}
yy128:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'i':	goto yy129;
	default:	goto yy122;
	}
yy129:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'c':	goto yy130;
	default:	goto yy122;
	}
yy130:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'e':	goto yy131;
	default:	goto yy122;
	}
yy131:
	++YYCURSOR;
#line 178 "amqp_conf.re.c"
	{ RET(5); }
#line 1318 "amqp_conf.c"
yy133:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'r':	goto yy134;
	default:	goto yy122;
	}
yy134:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'n':	goto yy135;
	default:	goto yy122;
	}
yy135:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'i':	goto yy136;
	default:	goto yy122;
	}
yy136:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'n':	goto yy137;
	default:	goto yy122;
	}
yy137:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'g':	goto yy138;
	default:	goto yy122;
	}
yy138:
	++YYCURSOR;
#line 177 "amqp_conf.re.c"
	{ RET(4); }
#line 1353 "amqp_conf.c"
yy140:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'e':	goto yy141;
	default:	goto yy122;
	}
yy141:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'r':	goto yy142;
	default:	goto yy122;
	}
yy142:
	yych = *++YYCURSOR;
	switch (yych) {
	case 't':	goto yy143;
	default:	goto yy122;
	}
yy143:
	++YYCURSOR;
#line 176 "amqp_conf.re.c"
	{ RET(3); }
#line 1376 "amqp_conf.c"
yy145:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'n':	goto yy146;
	default:	goto yy122;
	}
yy146:
	yych = *++YYCURSOR;
	switch (yych) {
	case 't':	goto yy147;
	default:	goto yy122;
	}
yy147:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'e':	goto yy148;
	default:	goto yy122;
	}
yy148:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'n':	goto yy149;
	default:	goto yy122;
	}
yy149:
	yych = *++YYCURSOR;
	switch (yych) {
	case 't':	goto yy150;
	default:	goto yy122;
	}
yy150:
	++YYCURSOR;
#line 175 "amqp_conf.re.c"
	{ RET(2); }
#line 1411 "amqp_conf.c"
yy152:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'r':	goto yy153;
	default:	goto yy122;
	}
yy153:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'o':	goto yy154;
	default:	goto yy122;
	}
yy154:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'r':	goto yy155;
	default:	goto yy122;
	}
yy155:
	++YYCURSOR;
#line 174 "amqp_conf.re.c"
	{ RET(1); }
#line 1434 "amqp_conf.c"
}
#line 185 "amqp_conf.re.c"



ip_param:
 s->ptok=cursor;
 ret =  100;

#line 1444 "amqp_conf.c"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case '.':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case ':':	goto yy159;
	case ';':	goto yy161;
	default:	goto yy163;
	}
yy159:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '.':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case ':':
	case ';':	goto yy166;
	default:	goto yy160;
	}
yy160:
#line 193 "amqp_conf.re.c"
	{  goto ip_param; }
#line 1482 "amqp_conf.c"
yy161:
	++YYCURSOR;
yy162:
#line 192 "amqp_conf.re.c"
	{ RET(ret); }
#line 1488 "amqp_conf.c"
yy163:
	yych = *++YYCURSOR;
	goto yy160;
yy164:
	yych = *++YYCURSOR;
	goto yy162;
yy165:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy166:
	switch (yych) {
	case '.':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case ':':	goto yy165;
	case ';':	goto yy164;
	default:	goto yy167;
	}
yy167:
	YYCURSOR = YYMARKER;
	goto yy160;
}
#line 194 "amqp_conf.re.c"


dparam:
 s->ptok=cursor;
 ret =  200;

#line 1525 "amqp_conf.c"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy170;
	case ';':	goto yy172;
	default:	goto yy174;
	}
yy170:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy176;
	case ';':	goto yy175;
	default:	goto yy171;
	}
yy171:
#line 201 "amqp_conf.re.c"
	{  goto dparam; }
#line 1563 "amqp_conf.c"
yy172:
	++YYCURSOR;
yy173:
#line 200 "amqp_conf.re.c"
	{ RET(ret); }
#line 1569 "amqp_conf.c"
yy174:
	yych = *++YYCURSOR;
	goto yy171;
yy175:
	yych = *++YYCURSOR;
	goto yy173;
yy176:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy176;
	case ';':	goto yy175;
	default:	goto yy178;
	}
yy178:
	YYCURSOR = YYMARKER;
	goto yy171;
}
#line 202 "amqp_conf.re.c"



unixcomment:	

#line 1604 "amqp_conf.c"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case 0x0A:	goto yy183;
	case 0x0D:	goto yy181;
	default:	goto yy185;
	}
yy181:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case 0x0A:	goto yy186;
	default:	goto yy182;
	}
yy182:
#line 208 "amqp_conf.re.c"
	{ goto unixcomment; }
#line 1623 "amqp_conf.c"
yy183:
	++YYCURSOR;
yy184:
#line 207 "amqp_conf.re.c"
	{  s->line++; goto std; }
#line 1629 "amqp_conf.c"
yy185:
	yych = *++YYCURSOR;
	goto yy182;
yy186:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy184;
}
#line 209 "amqp_conf.re.c"


comment:

#line 1643 "amqp_conf.c"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case 0x0A:	goto yy191;
	case '*':	goto yy189;
	default:	goto yy193;
	}
yy189:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '/':	goto yy194;
	default:	goto yy190;
	}
yy190:
#line 221 "amqp_conf.re.c"
	{ goto comment; }
#line 1662 "amqp_conf.c"
yy191:
	++YYCURSOR;
#line 216 "amqp_conf.re.c"
	{
		if(cursor == s->eof) RET(EOI);
		s->tok = s->pos = cursor; s->line++;
		goto comment;
	    }
#line 1671 "amqp_conf.c"
yy193:
	yych = *++YYCURSOR;
	goto yy190;
yy194:
	++YYCURSOR;
#line 213 "amqp_conf.re.c"
	{ goto std; }
#line 1679 "amqp_conf.c"
}
#line 222 "amqp_conf.re.c"

}


