/* Generated by re2c */
#line 1 "unicode_group_No.x--encoding-policy(ignore).re"
#include <stdio.h>
#define YYCTYPE unsigned short
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
No:
	
#line 12 "<stdout>"
{
	YYCTYPE yych;

	yych = *YYCURSOR;
	if (yych <= 0x2188) {
		if (yych <= 0x0D75) {
			if (yych <= 0x09F9) {
				if (yych <= 0x00B9) {
					if (yych <= 0x00B1) goto yy11;
					if (yych <= 0x00B3) goto yy2;
					if (yych <= 0x00B8) goto yy11;
				} else {
					if (yych <= 0x00BB) goto yy11;
					if (yych <= 0x00BE) goto yy2;
					if (yych <= 0x09F3) goto yy11;
				}
			} else {
				if (yych <= 0x0BF2) {
					if (yych <= 0x0B71) goto yy11;
					if (yych <= 0x0B77) goto yy2;
					if (yych <= 0x0BEF) goto yy11;
				} else {
					if (yych <= 0x0C77) goto yy11;
					if (yych <= 0x0C7E) goto yy2;
					if (yych <= 0x0D6F) goto yy11;
				}
			}
		} else {
			if (yych <= 0x19DA) {
				if (yych <= 0x137C) {
					if (yych <= 0x0F29) goto yy11;
					if (yych <= 0x0F33) goto yy2;
					if (yych <= 0x1368) goto yy11;
				} else {
					if (yych <= 0x17EF) goto yy11;
					if (yych <= 0x17F9) goto yy2;
					if (yych <= 0x19D9) goto yy11;
				}
			} else {
				if (yych <= 0x2079) {
					if (yych == 0x2070) goto yy2;
					if (yych <= 0x2073) goto yy11;
				} else {
					if (yych <= 0x2089) {
						if (yych <= 0x207F) goto yy11;
					} else {
						if (yych <= 0x214F) goto yy11;
						if (yych >= 0x2160) goto yy11;
					}
				}
			}
		}
	} else {
		if (yych <= 0x327F) {
			if (yych <= 0x2CFC) {
				if (yych <= 0x24E9) {
					if (yych <= 0x2189) goto yy2;
					if (yych <= 0x245F) goto yy11;
					if (yych >= 0x249C) goto yy11;
				} else {
					if (yych <= 0x24FF) goto yy2;
					if (yych <= 0x2775) goto yy11;
					if (yych >= 0x2794) goto yy11;
				}
			} else {
				if (yych <= 0x321F) {
					if (yych <= 0x2CFD) goto yy2;
					if (yych <= 0x3191) goto yy11;
					if (yych >= 0x3196) goto yy11;
				} else {
					if (yych <= 0x3229) goto yy2;
					if (yych <= 0x3250) goto yy11;
					if (yych >= 0x3260) goto yy11;
				}
			}
		} else {
			if (yych <= 0xD801) {
				if (yych <= 0xA82F) {
					if (yych <= 0x3289) goto yy2;
					if (yych <= 0x32B0) goto yy11;
					if (yych >= 0x32C0) goto yy11;
				} else {
					if (yych <= 0xA835) goto yy2;
					if (yych <= 0xD7FF) goto yy11;
					if (yych <= 0xD800) goto yy4;
					goto yy12;
				}
			} else {
				if (yych <= 0xD833) {
					if (yych <= 0xD802) goto yy6;
					if (yych <= 0xD803) goto yy7;
					if (yych <= 0xD804) goto yy8;
					goto yy12;
				} else {
					if (yych <= 0xD83B) {
						if (yych <= 0xD834) goto yy9;
						goto yy12;
					} else {
						if (yych <= 0xD83C) goto yy10;
						if (yych <= 0xDBFF) goto yy12;
						goto yy11;
					}
				}
			}
		}
	}
yy2:
	++YYCURSOR;
#line 11 "unicode_group_No.x--encoding-policy(ignore).re"
	{ goto No; }
#line 123 "<stdout>"
yy4:
	++YYCURSOR;
	if ((yych = *YYCURSOR) <= 0xDD78) {
		if (yych <= 0xDD06) {
			if (yych >= 0xDC00) goto yy11;
		} else {
			if (yych <= 0xDD33) goto yy2;
			if (yych <= 0xDD74) goto yy11;
			goto yy2;
		}
	} else {
		if (yych <= 0xDF1F) {
			if (yych == 0xDD8A) goto yy2;
			goto yy11;
		} else {
			if (yych <= 0xDF23) goto yy2;
			if (yych <= 0xDFFF) goto yy11;
		}
	}
yy5:
#line 12 "unicode_group_No.x--encoding-policy(ignore).re"
	{ return YYCURSOR == limit; }
#line 146 "<stdout>"
yy6:
	yych = *++YYCURSOR;
	if (yych <= 0xDE47) {
		if (yych <= 0xDC5F) {
			if (yych <= 0xDBFF) goto yy5;
			if (yych <= 0xDC57) goto yy11;
			goto yy2;
		} else {
			if (yych <= 0xDD15) goto yy11;
			if (yych <= 0xDD1B) goto yy2;
			if (yych <= 0xDE3F) goto yy11;
			goto yy2;
		}
	} else {
		if (yych <= 0xDF5F) {
			if (yych <= 0xDE7C) goto yy11;
			if (yych <= 0xDE7E) goto yy2;
			if (yych <= 0xDF57) goto yy11;
			goto yy2;
		} else {
			if (yych <= 0xDF77) goto yy11;
			if (yych <= 0xDF7F) goto yy2;
			if (yych <= 0xDFFF) goto yy11;
			goto yy5;
		}
	}
yy7:
	yych = *++YYCURSOR;
	if (yych <= 0xDBFF) goto yy5;
	if (yych <= 0xDE5F) goto yy11;
	if (yych <= 0xDE7E) goto yy2;
	if (yych <= 0xDFFF) goto yy11;
	goto yy5;
yy8:
	yych = *++YYCURSOR;
	if (yych <= 0xDBFF) goto yy5;
	if (yych <= 0xDC51) goto yy11;
	if (yych <= 0xDC65) goto yy2;
	if (yych <= 0xDFFF) goto yy11;
	goto yy5;
yy9:
	yych = *++YYCURSOR;
	if (yych <= 0xDBFF) goto yy5;
	if (yych <= 0xDF5F) goto yy11;
	if (yych <= 0xDF71) goto yy2;
	if (yych <= 0xDFFF) goto yy11;
	goto yy5;
yy10:
	yych = *++YYCURSOR;
	if (yych <= 0xDBFF) goto yy5;
	if (yych <= 0xDCFF) goto yy11;
	if (yych <= 0xDD0A) goto yy2;
	if (yych >= 0xE000) goto yy5;
yy11:
	yych = *++YYCURSOR;
	goto yy5;
yy12:
	++YYCURSOR;
	if ((yych = *YYCURSOR) <= 0xDBFF) goto yy5;
	if (yych <= 0xDFFF) goto yy11;
	goto yy5;
}
#line 13 "unicode_group_No.x--encoding-policy(ignore).re"

}
static const char buffer_No [] = "\xB2\x00\xB3\x00\xB9\x00\xBC\x00\xBD\x00\xBE\x00\xF4\x09\xF5\x09\xF6\x09\xF7\x09\xF8\x09\xF9\x09\x72\x0B\x73\x0B\x74\x0B\x75\x0B\x76\x0B\x77\x0B\xF0\x0B\xF1\x0B\xF2\x0B\x78\x0C\x79\x0C\x7A\x0C\x7B\x0C\x7C\x0C\x7D\x0C\x7E\x0C\x70\x0D\x71\x0D\x72\x0D\x73\x0D\x74\x0D\x75\x0D\x2A\x0F\x2B\x0F\x2C\x0F\x2D\x0F\x2E\x0F\x2F\x0F\x30\x0F\x31\x0F\x32\x0F\x33\x0F\x69\x13\x6A\x13\x6B\x13\x6C\x13\x6D\x13\x6E\x13\x6F\x13\x70\x13\x71\x13\x72\x13\x73\x13\x74\x13\x75\x13\x76\x13\x77\x13\x78\x13\x79\x13\x7A\x13\x7B\x13\x7C\x13\xF0\x17\xF1\x17\xF2\x17\xF3\x17\xF4\x17\xF5\x17\xF6\x17\xF7\x17\xF8\x17\xF9\x17\xDA\x19\x70\x20\x74\x20\x75\x20\x76\x20\x77\x20\x78\x20\x79\x20\x80\x20\x81\x20\x82\x20\x83\x20\x84\x20\x85\x20\x86\x20\x87\x20\x88\x20\x89\x20\x50\x21\x51\x21\x52\x21\x53\x21\x54\x21\x55\x21\x56\x21\x57\x21\x58\x21\x59\x21\x5A\x21\x5B\x21\x5C\x21\x5D\x21\x5E\x21\x5F\x21\x89\x21\x60\x24\x61\x24\x62\x24\x63\x24\x64\x24\x65\x24\x66\x24\x67\x24\x68\x24\x69\x24\x6A\x24\x6B\x24\x6C\x24\x6D\x24\x6E\x24\x6F\x24\x70\x24\x71\x24\x72\x24\x73\x24\x74\x24\x75\x24\x76\x24\x77\x24\x78\x24\x79\x24\x7A\x24\x7B\x24\x7C\x24\x7D\x24\x7E\x24\x7F\x24\x80\x24\x81\x24\x82\x24\x83\x24\x84\x24\x85\x24\x86\x24\x87\x24\x88\x24\x89\x24\x8A\x24\x8B\x24\x8C\x24\x8D\x24\x8E\x24\x8F\x24\x90\x24\x91\x24\x92\x24\x93\x24\x94\x24\x95\x24\x96\x24\x97\x24\x98\x24\x99\x24\x9A\x24\x9B\x24\xEA\x24\xEB\x24\xEC\x24\xED\x24\xEE\x24\xEF\x24\xF0\x24\xF1\x24\xF2\x24\xF3\x24\xF4\x24\xF5\x24\xF6\x24\xF7\x24\xF8\x24\xF9\x24\xFA\x24\xFB\x24\xFC\x24\xFD\x24\xFE\x24\xFF\x24\x76\x27\x77\x27\x78\x27\x79\x27\x7A\x27\x7B\x27\x7C\x27\x7D\x27\x7E\x27\x7F\x27\x80\x27\x81\x27\x82\x27\x83\x27\x84\x27\x85\x27\x86\x27\x87\x27\x88\x27\x89\x27\x8A\x27\x8B\x27\x8C\x27\x8D\x27\x8E\x27\x8F\x27\x90\x27\x91\x27\x92\x27\x93\x27\xFD\x2C\x92\x31\x93\x31\x94\x31\x95\x31\x20\x32\x21\x32\x22\x32\x23\x32\x24\x32\x25\x32\x26\x32\x27\x32\x28\x32\x29\x32\x51\x32\x52\x32\x53\x32\x54\x32\x55\x32\x56\x32\x57\x32\x58\x32\x59\x32\x5A\x32\x5B\x32\x5C\x32\x5D\x32\x5E\x32\x5F\x32\x80\x32\x81\x32\x82\x32\x83\x32\x84\x32\x85\x32\x86\x32\x87\x32\x88\x32\x89\x32\xB1\x32\xB2\x32\xB3\x32\xB4\x32\xB5\x32\xB6\x32\xB7\x32\xB8\x32\xB9\x32\xBA\x32\xBB\x32\xBC\x32\xBD\x32\xBE\x32\xBF\x32\x30\xA8\x31\xA8\x32\xA8\x33\xA8\x34\xA8\x35\xA8\x00\xD8\x07\xDD\x00\xD8\x08\xDD\x00\xD8\x09\xDD\x00\xD8\x0A\xDD\x00\xD8\x0B\xDD\x00\xD8\x0C\xDD\x00\xD8\x0D\xDD\x00\xD8\x0E\xDD\x00\xD8\x0F\xDD\x00\xD8\x10\xDD\x00\xD8\x11\xDD\x00\xD8\x12\xDD\x00\xD8\x13\xDD\x00\xD8\x14\xDD\x00\xD8\x15\xDD\x00\xD8\x16\xDD\x00\xD8\x17\xDD\x00\xD8\x18\xDD\x00\xD8\x19\xDD\x00\xD8\x1A\xDD\x00\xD8\x1B\xDD\x00\xD8\x1C\xDD\x00\xD8\x1D\xDD\x00\xD8\x1E\xDD\x00\xD8\x1F\xDD\x00\xD8\x20\xDD\x00\xD8\x21\xDD\x00\xD8\x22\xDD\x00\xD8\x23\xDD\x00\xD8\x24\xDD\x00\xD8\x25\xDD\x00\xD8\x26\xDD\x00\xD8\x27\xDD\x00\xD8\x28\xDD\x00\xD8\x29\xDD\x00\xD8\x2A\xDD\x00\xD8\x2B\xDD\x00\xD8\x2C\xDD\x00\xD8\x2D\xDD\x00\xD8\x2E\xDD\x00\xD8\x2F\xDD\x00\xD8\x30\xDD\x00\xD8\x31\xDD\x00\xD8\x32\xDD\x00\xD8\x33\xDD\x00\xD8\x75\xDD\x00\xD8\x76\xDD\x00\xD8\x77\xDD\x00\xD8\x78\xDD\x00\xD8\x8A\xDD\x00\xD8\x20\xDF\x00\xD8\x21\xDF\x00\xD8\x22\xDF\x00\xD8\x23\xDF\x02\xD8\x58\xDC\x02\xD8\x59\xDC\x02\xD8\x5A\xDC\x02\xD8\x5B\xDC\x02\xD8\x5C\xDC\x02\xD8\x5D\xDC\x02\xD8\x5E\xDC\x02\xD8\x5F\xDC\x02\xD8\x16\xDD\x02\xD8\x17\xDD\x02\xD8\x18\xDD\x02\xD8\x19\xDD\x02\xD8\x1A\xDD\x02\xD8\x1B\xDD\x02\xD8\x40\xDE\x02\xD8\x41\xDE\x02\xD8\x42\xDE\x02\xD8\x43\xDE\x02\xD8\x44\xDE\x02\xD8\x45\xDE\x02\xD8\x46\xDE\x02\xD8\x47\xDE\x02\xD8\x7D\xDE\x02\xD8\x7E\xDE\x02\xD8\x58\xDF\x02\xD8\x59\xDF\x02\xD8\x5A\xDF\x02\xD8\x5B\xDF\x02\xD8\x5C\xDF\x02\xD8\x5D\xDF\x02\xD8\x5E\xDF\x02\xD8\x5F\xDF\x02\xD8\x78\xDF\x02\xD8\x79\xDF\x02\xD8\x7A\xDF\x02\xD8\x7B\xDF\x02\xD8\x7C\xDF\x02\xD8\x7D\xDF\x02\xD8\x7E\xDF\x02\xD8\x7F\xDF\x03\xD8\x60\xDE\x03\xD8\x61\xDE\x03\xD8\x62\xDE\x03\xD8\x63\xDE\x03\xD8\x64\xDE\x03\xD8\x65\xDE\x03\xD8\x66\xDE\x03\xD8\x67\xDE\x03\xD8\x68\xDE\x03\xD8\x69\xDE\x03\xD8\x6A\xDE\x03\xD8\x6B\xDE\x03\xD8\x6C\xDE\x03\xD8\x6D\xDE\x03\xD8\x6E\xDE\x03\xD8\x6F\xDE\x03\xD8\x70\xDE\x03\xD8\x71\xDE\x03\xD8\x72\xDE\x03\xD8\x73\xDE\x03\xD8\x74\xDE\x03\xD8\x75\xDE\x03\xD8\x76\xDE\x03\xD8\x77\xDE\x03\xD8\x78\xDE\x03\xD8\x79\xDE\x03\xD8\x7A\xDE\x03\xD8\x7B\xDE\x03\xD8\x7C\xDE\x03\xD8\x7D\xDE\x03\xD8\x7E\xDE\x04\xD8\x52\xDC\x04\xD8\x53\xDC\x04\xD8\x54\xDC\x04\xD8\x55\xDC\x04\xD8\x56\xDC\x04\xD8\x57\xDC\x04\xD8\x58\xDC\x04\xD8\x59\xDC\x04\xD8\x5A\xDC\x04\xD8\x5B\xDC\x04\xD8\x5C\xDC\x04\xD8\x5D\xDC\x04\xD8\x5E\xDC\x04\xD8\x5F\xDC\x04\xD8\x60\xDC\x04\xD8\x61\xDC\x04\xD8\x62\xDC\x04\xD8\x63\xDC\x04\xD8\x64\xDC\x04\xD8\x65\xDC\x34\xD8\x60\xDF\x34\xD8\x61\xDF\x34\xD8\x62\xDF\x34\xD8\x63\xDF\x34\xD8\x64\xDF\x34\xD8\x65\xDF\x34\xD8\x66\xDF\x34\xD8\x67\xDF\x34\xD8\x68\xDF\x34\xD8\x69\xDF\x34\xD8\x6A\xDF\x34\xD8\x6B\xDF\x34\xD8\x6C\xDF\x34\xD8\x6D\xDF\x34\xD8\x6E\xDF\x34\xD8\x6F\xDF\x34\xD8\x70\xDF\x34\xD8\x71\xDF\x3C\xD8\x00\xDD\x3C\xD8\x01\xDD\x3C\xD8\x02\xDD\x3C\xD8\x03\xDD\x3C\xD8\x04\xDD\x3C\xD8\x05\xDD\x3C\xD8\x06\xDD\x3C\xD8\x07\xDD\x3C\xD8\x08\xDD\x3C\xD8\x09\xDD\x3C\xD8\x0A\xDD\x00\x00";
int main ()
{
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_No), reinterpret_cast<const YYCTYPE *> (buffer_No + sizeof (buffer_No) - 1)))
		printf("test 'No' failed\n");
}