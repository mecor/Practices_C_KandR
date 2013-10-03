#include <stdio.h>

#define MAXLINE 1000

/* Functions prototype */
int getLine(char line[], int maxline);
void copy(char to[], char from[]);

/*
Outline:
while (there's another line)
	if (it's longest than the previous longest)
	{
		save it
		save its length
	}
print longest line
*/

int main(void)
{
	int len = 0, max = 0;
	char line[MAXLINE] = {'\0'}, longest[MAXLINE] = {'\0'};
	/* Initialzing arrays of types:
	   int var[n] =  {0}
	   char var[n] = {'\0'}
	   float var[n] = {0.0}
	*/
	/* Note that a char array end with a '\0'! */

	while ((len = getLine(line, MAXLINE)) > 0){
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0)
	{
		puts("The 1st longest line is:");
		printf("%s", longest);
	}

	return 0;
}

/* Note that 'getline' is a default function in 'stdio.h'! */
/* Passing variable length array by 'type var[]' is a trick! */
int getLine(char s[], int lim)
{
	int c = 0, i = 0;
	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	if (c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* variables 'longest' and 'line' are called-by-addresses! */
void copy(char to[], char from[])
{
	int i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}