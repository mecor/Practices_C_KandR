#include <stdio.h>

unsigned getbits(long int x, int n);
void printbits(long int x, int l);
/* shortage: It should pass long into the functions */

int main(void)
{
	int x = 0x11; /* 17 in hexa-decimal form */
	char y = '\x11';
	short z = 011; /* 9 in octal form */
	long int w = 011;
	int n = 0;

	n = (int) sizeof(x);
	printbits(x,n);
	n = (int) sizeof(y);
	printbits(y,n);
	n = (int) sizeof(z);
	printbits(z,n);
	n = (int) sizeof(w);
	printbits(w,n);

	return 0;
}

unsigned getbits(long int x, int n)
{
	return (x >> n) & 1;
	/* It's a more easily understanding version */
}

void printbits(long int x, int l)
{
	int n = 0;
	l = l * 8 -1;
	/* Because 0 ~ n(digits) - 1, totally n */
	for (n = l; n >= 0; n--)
		printf("%d", getbits(x,n));
	putchar('\n');
}