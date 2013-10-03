#include <stdio.h>

/* Preprocessing variable */
#define MAXLINE 1000

/* Extern variables */
int max = 0;
char line[MAXLINE] = {'\0'};
char longest[MAXLINE] = {'\0'};

/* Functions' prototype */
int getLine(void);
void copy(void);

int main(void)
{
	int len = 0;
	extern int max;
	extern char longest[];

	max = 0;
	while ((len = getLine()) > 0)
	{
		if (len > max)
		{
			max = len;
			copy();
		}
	}
	if (max > 0)
	{
		puts("The 1st longest line is:");
		printf("%s", longest);
	}

	return 0;
}

int getLine(void)
{
	int c = 0, i = 0;
	extern char line[];

	for (i = 0; i < MAXLINE -1 && \
		(c = getchar()) != EOF && c!= '\n'; i++)
		line[i] = c;
	if (c == '\n')
	{
		line[i] = c;
		++i;
	}
	line[i] = '\0';

	return i;
}

void copy(void)
{
	int i = 0;
	extern char line[], longest[];

	while ((longest[i] = line[i]) != '\0')
		++i;
}