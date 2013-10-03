#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Some tricks using condition expressions */

int maximum(int x, int y);
int * genRandMat(int r, int c, int m);

int main(void)
{
	/* 1) Basic */
	puts("1) basic:");
	printf("3 > 2 ? %s\n", (3 > 2) ? "yes" : "no");
	/* ? 1 : 0 */

	/* 2) Choose maximum */
	puts("2) max:");
	printf("max(10,-1) = %d\n", maximum(-1,10));

	/* 3) Efficient linefeed */
	puts("3) efficient linefeed:");
	int r = 5, c = 3;
	int *ra = genRandMat(r,c,100);
	/* 5 * 3 matrix up to 100 */
	int i = 0;
	for (i = 0; i < 5*3; i++)
		printf("%2d%c", *(ra+i), \
			((i%c == c-1) || (i == r*c-1)) ? '\n':' ');
	free(ra);

	return 0;
}

int maximum(int x, int y)
{
	return ((x > y) ? x : y);
}

int * genRandMat(int r, int c, int m)
{
	int *mat = malloc(r*c*sizeof(int));
	srand(time(NULL));
	int i = 0;
	for (i = 0; i < r*c; i++)
		mat[i] = rand() % m;
	return mat;
}