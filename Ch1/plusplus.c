#include <stdio.h>

int main(void)
{
	/* 1) For single variable: */
	puts("1) For single variable:");
	int N = 0;
	printf("N = %d; N++ = ", N);
	N++;
	printf("%d\n", N);
	N = 0;
	printf("N = %d; ++N = ", N);
	++N;
	printf("%d\n", N);

	/* 2) For assignment: case 1 */
	puts("2) For assignment: case 1");
	N = 0;
	int pre = 0;
	printf("N = %d; ", N);
	pre = ++N;
	printf("pre = ++N = %d; N = %d\n", pre, N);
	N = 0;
	int post = 0;
	printf("N = %d; ", N);
	post = N++;
	printf("post = N++ = %d; N = %d\n", post, N);

	/* 3) For assignment: case 2 */
	puts("3) For assignment: case 2");
	N = 2;
	pre = 1;
	printf("N = %d; pre = %d; pre = ++N + pre; pre = ", N, pre);
	pre = ++N + pre;
	printf("%d; N = %d\n", pre, N);
	N = 2;
	post = 1;
	printf("N = %d; post = %d; post = N++ + post; post = ", N, post);
	post = N++ + post;
	printf("%d; N = %d\n", post, N);

	/* 4) In an expression: */
	puts("4) In an expression:");
	int x = 1, y = 2, z = 0;
	printf("x = %d; y = %d;\n", x, y);
	z = (x + y++) * 3;
	printf("z = (x + y++) * 3; z = %d\n", z);
	x = 1, y = 2, z = 0;
	printf("x = %d; y = %d;\n", x, y);
	z = (x + ++y) * 3;
	printf("z = (x + ++y) * 3; z = %d\n", z);

	return 0;
}