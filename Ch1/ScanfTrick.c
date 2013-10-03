#include <stdio.h>

int main(void)
{
	char s[100];
	puts("Input a string:");
	scanf("%[^\n]s", s);
	printf("Your input is:\n%s\n", s);

	return 0;
}