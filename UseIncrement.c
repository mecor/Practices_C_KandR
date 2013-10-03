#include <stdio.h>
/*#include <string.h>*/

void squeeze(char str[], int c);
/* strcat() is included in 'string.h'! */
void strCat(char s[], char t[]);

int main(void)
{
	/* 1) Squeeze a string by a character */
	puts("1) squeeze() a string");
	char s[] = "There are many c, c here," \
		" c there, and c somewhere...";
	puts("-The original sentence:");
	printf("%s\n", s);
	squeeze(s,'c');
	puts("-After squeeze(s,'c'):");
	printf("%s\n", s);

	/* 2) Concatenate strings */
	/*char *st1 = "Hello, ";
	char *st2 = "world!\n";*/
	/* ps: One cannot change a string unless 
	it's a local variable and  has enough space! */
	puts("2) strcat(st1,st2)");
	char st1[20] = "Hello, ";
	char *st2 = "world!\n";
	strCat(st1,st2);
	printf("%s", st1);

	return 0;
}

void squeeze(char str[], int c)
{
	int i = 0, j = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != c)
			str[j++] = str[i];
	}
	str[j] = '\0';
}
/* str[j++] = str[i]; means
   s[j] = s[i];
   ++j;
*/

void strCat(char s[], char t[])
{
	int i = 0, j = 0;
	while (s[i] != '\0')
		++i;
	while ((s[i++] = t[j++]) != '\0')
		;
}