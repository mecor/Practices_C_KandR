#include <stdio.h>

int main(void)
{
	float fahrenheit, celsius;
	int step_f = 20, up_f = 300, step_c = 10, up_c = 100;
	printf("Fahrenheit\tCelsius\n");

	/* 1) fah2cel: */
	fahrenheit = 0;
	while (fahrenheit <= up_f)
	{
		celsius = (fahrenheit - 32) * 5 / 9;
		printf("%6.2f\t\t%6.2f\n", fahrenheit, celsius);
		fahrenheit += step_f;
	}

	printf("===================\n");
	/* 2) cel2fah: */
	celsius = 0;
	while (celsius <= up_c)
	{
		fahrenheit = celsius * 9 / 5 + 32;
		printf("%6.2f\t\t%6.2f\n", fahrenheit, celsius);
		celsius += step_c;
	}

	return 0;
}