#include <stdio.h>

int main(void)
{
	int c = 0, nl = 0;
	while ((c = getchar())!=EOF)
	{
		if (c == '\n')
			nl++;
	}
	printf("\nTotal: %d lines\n", nl);

	return 0;
}