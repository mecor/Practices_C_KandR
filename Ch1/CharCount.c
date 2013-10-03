#include <stdio.h>

int main(void)
{
	long nc = 0;
	/*while (getchar() != EOF)
		++nc;*/
	for (nc = 0; getchar() != EOF; nc++)
		;

	printf("\ntotal: %ld characters\n", nc);

	return 0;
}
/* ps1: A concept:
   ++n preincrement;
   n++ increase after the rest of the expression has been complete. */
/* ps2: About EOF key-in:
   control+D twice to halt the program. */