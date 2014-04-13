#include <stdio.h>
#define YYCTYPE unsigned char
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Co:
	/*!re2c
		re2c:yyfill:enable = 0;
		Co = [\ue000-\uf8ff\U000f0000-\U000ffffd\U00100000-\U0010fffd];
		Co { goto Co; }
		[^] { return YYCURSOR == limit; }
	*/
}
int main ()
{
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Co), reinterpret_cast<const YYCTYPE *> (buffer_Co + sizeof (buffer_Co) - 1)))
		printf("test 'Co' failed\n");
}