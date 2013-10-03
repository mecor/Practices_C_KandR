#include <stdio.h>

#define NUMBER 1
int x = 2;

int main(void)
{
	/* 1) external variable and preprocessing constant */
	puts("1) extern and preprocessor:");
	extern int x;
	printf("Preprocessing NUMBER + external x =" \
		" %d + %d = %d\n", NUMBER, x, NUMBER + x);
	/* ps: Strings can be concatenated by '\'-back slash. */

	/* 2) enumeration constant */
	puts("2) enum constants:");
	enum boolean { NO, YES};
	enum boolean n = NO, y = YES;
	printf("NO is %d, YES is %d\n", n, y);
	enum escapes { BELL = '\a', BACKSPACE = '\b',\
		TAB = '\t', NEWLINE = '\n' };
	enum escapes e1 = TAB, e2 = NEWLINE;
	printf("e1 is ^%c_, and e2 is ^%c_\n", e1, e2);
	/* ps: enum can only list integral numbers
	   - include char! */

	return 0;
}