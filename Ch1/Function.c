#include <stdio.h>

/* This is called the "function prototype".
   The self-defined function correponding to it
   should abbey it rule.*/
int power(int m, int n);

int main(void)
{
	puts("To compute powers of numbers:");

	int b1 = 2, b2 = -3, i = 0;
	puts("2's\t   3's");
	for (i = 0; i < 10; i++)
	{
		printf("%3d\t%6d\n", power(b1,i), power(b2,i));
	}

	return 0;
}

/* 參數名字可以改變, 但是型態必須符合函式原型! */
int power(int m, int n)
{
	int i = 1, p = 1;
	for (i = 1; i <= n; i++)
	{
		p *= m;
	}

	return p;
}