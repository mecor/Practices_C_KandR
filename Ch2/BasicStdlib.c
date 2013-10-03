#include <stdio.h>
#include <math.h>
#include <string.h>
/*#include <stdlib.h>*/

/* These 2 functions are included in 'stdlib.h'! */
int rand(void);
void srand(unsigned int);

unsigned long int next = 1;

int main(void)
{
	/* 1) Math square root */
	puts("1) sqrt() in math.h");
	float x = 2;
	printf("sqrt(2) = %5.4f\n", sqrt(x));

	/* 2) String length */
	puts("2) strlen() in string.h");
	char *s1 = "hello1", s2[] = "hello22";
	printf("strlen(\"hello1\") = %ld\n", strlen(s1));
	printf("strlen(\"hello22\") = %ld\n", strlen(s2));

	/* 3) Generate random numbers */
	puts("3) rand() and srand()");
	int r[6] = {0}, i = 0;
	srand((unsigned) (i = 1));
	printf("r = [");
	for (i = 0; i <6; i++)
	{
		r[i] = (int) rand() % 100;
		printf("%d ", r[i]);
	}
	puts("\b]");

	return 0;
}

/* return pseudo-random interger on 0..32767 */
int rand(void)
{
	next = next * 1103515245 + 12345;
	return (unsigned int) (next / 65536) % 32768;
}

/* set seed for rand() */
void srand(unsigned int seed)
{
	next = seed;
}