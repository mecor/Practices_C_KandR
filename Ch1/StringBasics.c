#include <stdio.h>

/* Concept:
s1                 temp              s2 
|s|t|r|i|n|g| |...|s|t|r|i|n|g| |...|0x...|
 1 1 1 1 1 1 1     1 1 1 1 1 1 1     8     (byte)
s2 = temp (%p)

s3
| | | | | | | | | | |
insert:
|s|t|r|i|n|g| | | | |
*/

int main(void)
{
	/* 1) 1st method to store a string */
	puts("1) 1st method to store a string");
	char s1[] = "hello1";
	printf("char s1[] = \042%s\042; (length = %ld)\n", s1, \
		sizeof(s1)/sizeof(s1[0]));

	/* 2) 2nd method to store a string */
	puts("2) 2nd method to store a string");
	char *s2 = "hello2";
	printf("char *s2 = \042%s\042;", s2);
	puts(" in a temp arr[] of length 7");

	/* 3) Put a string into a char array */
	puts("3) Put a string into a char array");
	char s3[10] = {'\0'};
	int i = 0;
	printf("char s3[10] = %s;\n", s3);
	printf("After insert s2 into s3: s3 = ");
	for (i = 0; i < (signed) sizeof(s3); i++)
	{
		if (i < 7)
		/* Don't use 'i < (signed) sizeof(s2)'!
		   Since sizeof(ptr) = 8 (byte)! */
			s3[i] = s2[i];
		printf("%c", s3[i]);
	}
	putchar('\n');
	
	/* 4) Finally, prepare a char array of size 5 for getchar() */
	puts("4) Finally, prepare a char array of size 5 for getchar()");
	char s4[5] = {'\0'};
	int j = 0, c = 0;
	while ((c = getchar()) != EOF && j < 5)
	{
		s4[j] = c;
		++j;
	}
	printf("%s", s4);

	return 0;
}