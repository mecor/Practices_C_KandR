#include <stdio.h>

int main(void)
{
	int g = 0;
	/* 1) Value of EOF */
	printf("EOF = %d\n", EOF);

	/* 2) Value of getchar() */
	g = getchar();
	putchar(g);
	putchar('\n');
	printf("getchar() = %2c(%cc)\n", g, 37);
	printf("getchar() = %2d(%cd)\n", g, 37);
	puts("Done!");

	return 0;
}