#include <stdio.h>

/* In this program, just 8-bit unsigned int considered */

int bitcount_v1(unsigned x);
/* Check for right to the left most nonzero */
int bitcount_v2(unsigned x);
/* x & (x - 1) remove right most 1
   e.g. x = 00110010 (50) => x - 1 = 00110001 (49)
        x & (x - 1) = 00110000
   Each time, delete a 1.
*/

int main(void)
{
	unsigned char arr[] = \
		{255, 127, 63, 31, 15, 7, 3, 1};
	int i = 0;
	for (i = 0; i < (int) sizeof(char) * 8; i++)
	{
		printf("v1: There are %d 1's in %d\t", \
			bitcount_v1(arr[i]), arr[i]);
		printf("v2: There are %d 1's in %d\n", \
			bitcount_v2(arr[i]), arr[i]);
	}

	return 0;
}

int bitcount_v1(unsigned x)
{
	int b = 0;
	for (b = 0; x != 0; x >>= 1)
	{
		if (x & 1)
			++b;
	}
	/*while (x != 0)
	{
		if (x & 1)
			x >>= 1;
			++b;
	}*/
	return b;
}
/* ps: In this version, using for is clear and simple. */

int bitcount_v2(unsigned x)
{
	int b = 0;
	while ( (x != 0) | (x &= (x - 1)) )
		++b;
	return b;
}
/* ps: In this version, using while is clear and reduced. */