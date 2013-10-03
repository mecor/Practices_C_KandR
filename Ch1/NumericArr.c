#include <stdio.h>

int main(void)
{
	puts("To give a statistics of input:");
	int c = 0, i = 0, nwhite = 0, nothers = 0, ntotal = 0;
	int ndigit[10] = {0};

	while ((c = getchar()) != EOF)
	{
		if ( c >= '0' && c <= '9')
			++ndigit[c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nothers;
		++ntotal;
	}
	puts("Totals in digit:\n  0  1  2  3  4  5  6  7  8  9  ");
	for (i = 0; i < 10; i++)
	{
		printf("%3d", ndigit[i]);
	}
	printf(" /%d\n", ntotal);
	printf("Total white spaces: %d /%d\n", nwhite, ntotal);
	printf("Total Others: %d /%d\n", nothers, ntotal);

	return 0;
}