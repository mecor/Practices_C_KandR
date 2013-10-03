#include <stdio.h>

/* This program aims at intro'ing
   binary representation of integral number */

unsigned getbits(int x, int p, int n);
void printbits(int x, int l);

int main(void)
{
	int x = 010; /* 8 in octal form */
	char y = '\010';
	short z = 010;
	int n = 0;

	n = (int) sizeof(x);
	printbits(x,n);
	n = (int) sizeof(y);
	printbits(y,n);
	n = (int) sizeof(z);
	printbits(z,n);

	return 0;
}

unsigned getbits(int x, int p, int n)
{
	return (x >> (p + 1 -n)) & ~(~0 << n);
}

void printbits(int x, int l)
{
	int n = 0;
	l = l * 8 -1;
	for (n = l; n >= 0; n--)
		printf("%d", getbits(x,n,1));
	putchar('\n');
}