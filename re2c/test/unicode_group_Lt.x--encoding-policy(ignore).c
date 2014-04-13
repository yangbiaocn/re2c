/* Generated by re2c */
#line 1 "unicode_group_Lt.x--encoding-policy(ignore).re"
#include <stdio.h>
#define YYCTYPE unsigned short
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Lt:
	
#line 12 "<stdout>"
{
	YYCTYPE yych;

	yych = *YYCURSOR;
	if (yych <= 0x1F97) {
		if (yych <= 0x01CA) {
			if (yych <= 0x01C5) {
				if (yych <= 0x01C4) goto yy4;
			} else {
				if (yych != 0x01C8) goto yy4;
			}
		} else {
			if (yych <= 0x01F2) {
				if (yych <= 0x01CB) goto yy2;
				if (yych <= 0x01F1) goto yy4;
			} else {
				if (yych <= 0x1F87) goto yy4;
				if (yych >= 0x1F90) goto yy4;
			}
		}
	} else {
		if (yych <= 0x1FCB) {
			if (yych <= 0x1FAF) {
				if (yych <= 0x1F9F) goto yy2;
				if (yych <= 0x1FA7) goto yy4;
			} else {
				if (yych != 0x1FBC) goto yy4;
			}
		} else {
			if (yych <= 0x1FFC) {
				if (yych <= 0x1FCC) goto yy2;
				if (yych <= 0x1FFB) goto yy4;
			} else {
				if (yych <= 0xD7FF) goto yy4;
				if (yych <= 0xDBFF) goto yy6;
				goto yy4;
			}
		}
	}
yy2:
	++YYCURSOR;
#line 11 "unicode_group_Lt.x--encoding-policy(ignore).re"
	{ goto Lt; }
#line 56 "<stdout>"
yy4:
	++YYCURSOR;
yy5:
#line 12 "unicode_group_Lt.x--encoding-policy(ignore).re"
	{ return YYCURSOR == limit; }
#line 62 "<stdout>"
yy6:
	++YYCURSOR;
	if ((yych = *YYCURSOR) <= 0xDBFF) goto yy5;
	if (yych <= 0xDFFF) goto yy4;
	goto yy5;
}
#line 13 "unicode_group_Lt.x--encoding-policy(ignore).re"

}
static const char buffer_Lt [] = "\xC5\x01\xC8\x01\xCB\x01\xF2\x01\x88\x1F\x89\x1F\x8A\x1F\x8B\x1F\x8C\x1F\x8D\x1F\x8E\x1F\x8F\x1F\x98\x1F\x99\x1F\x9A\x1F\x9B\x1F\x9C\x1F\x9D\x1F\x9E\x1F\x9F\x1F\xA8\x1F\xA9\x1F\xAA\x1F\xAB\x1F\xAC\x1F\xAD\x1F\xAE\x1F\xAF\x1F\xBC\x1F\xCC\x1F\xFC\x1F\x00\x00";
int main ()
{
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Lt), reinterpret_cast<const YYCTYPE *> (buffer_Lt + sizeof (buffer_Lt) - 1)))
		printf("test 'Lt' failed\n");
}