/* Generated by re2c */
#line 1 "unicode_group_Pd.u--encoding-policy(ignore).re"
#include <stdio.h>
#define YYCTYPE unsigned int
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Pd:
	
#line 12 "<stdout>"
{
	YYCTYPE yych;

	yych = *YYCURSOR;
	if (yych <= 0x00002E19) {
		if (yych <= 0x000013FF) {
			if (yych <= 0x00000589) {
				if (yych != '-') goto yy4;
			} else {
				if (yych <= 0x0000058A) goto yy2;
				if (yych != 0x000005BE) goto yy4;
			}
		} else {
			if (yych <= 0x0000200F) {
				if (yych <= 0x00001400) goto yy2;
				if (yych != 0x00001806) goto yy4;
			} else {
				if (yych <= 0x00002015) goto yy2;
				if (yych != 0x00002E17) goto yy4;
			}
		}
	} else {
		if (yych <= 0x0000FE30) {
			if (yych <= 0x0000302F) {
				if (yych <= 0x00002E1A) goto yy2;
				if (yych != 0x0000301C) goto yy4;
			} else {
				if (yych <= 0x00003030) goto yy2;
				if (yych != 0x000030A0) goto yy4;
			}
		} else {
			if (yych <= 0x0000FE62) {
				if (yych <= 0x0000FE32) goto yy2;
				if (yych != 0x0000FE58) goto yy4;
			} else {
				if (yych <= 0x0000FE63) goto yy2;
				if (yych != 0x0000FF0D) goto yy4;
			}
		}
	}
yy2:
	++YYCURSOR;
#line 11 "unicode_group_Pd.u--encoding-policy(ignore).re"
	{ goto Pd; }
#line 57 "<stdout>"
yy4:
	++YYCURSOR;
#line 12 "unicode_group_Pd.u--encoding-policy(ignore).re"
	{ return YYCURSOR == limit; }
#line 62 "<stdout>"
}
#line 13 "unicode_group_Pd.u--encoding-policy(ignore).re"

}
static const char buffer_Pd [] = "\x2D\x00\x00\x00\x8A\x05\x00\x00\xBE\x05\x00\x00\x00\x14\x00\x00\x06\x18\x00\x00\x10\x20\x00\x00\x11\x20\x00\x00\x12\x20\x00\x00\x13\x20\x00\x00\x14\x20\x00\x00\x15\x20\x00\x00\x17\x2E\x00\x00\x1A\x2E\x00\x00\x1C\x30\x00\x00\x30\x30\x00\x00\xA0\x30\x00\x00\x31\xFE\x00\x00\x32\xFE\x00\x00\x58\xFE\x00\x00\x63\xFE\x00\x00\x0D\xFF\x00\x00\x00\x00\x00\x00";
int main ()
{
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Pd), reinterpret_cast<const YYCTYPE *> (buffer_Pd + sizeof (buffer_Pd) - 1)))
		printf("test 'Pd' failed\n");
}