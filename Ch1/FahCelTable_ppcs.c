#include <stdio.h>

#define STEP_F 20
#define UP_F 300
#define STEP_C 10
#define UP_C 100

int main(void)
{
	float fahrenheit, celsius;
	printf("Fahrenheit\tCelsius\n");
	/* 1) fah2cel: */
	for (fahrenheit=0; fahrenheit<=UP_F; fahrenheit += STEP_F)
	{
		celsius = (fahrenheit - 32) * 5 / 9;
		printf("%6.2f\t\t%6.2f\n", fahrenheit, celsius);
	}

	printf("===================\n");
	/* 2) cel2fah: */
	celsius = 0;
	while (celsius <= UP_C)
	{
		fahrenheit = celsius * 9 / 5 + 32;
		printf("%6.2f\t\t%6.2f\n", fahrenheit, celsius);
		celsius += STEP_C;
	}

	return 0;
}