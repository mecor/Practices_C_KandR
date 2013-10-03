#include <stdio.h>

/* prototype */
int power(int b, int m);

int main(void)
{
	int b = 2, m = 10;
	printf("%d^%d = %d\n", b, m, power(b,m));
	printf("The call-by-value argument m %s\n", \
		(m==10) ? "Unchanged":"Changed");

	return 0;
}

/* The call-by-value argument m will be unchanged
   after passing into power() */
/* To change the value of a variable as functions' argument,
   one should pass it by address, i.e. using pointers! */
int power(int b, int m)
{
	int p = 1;
	for (p = 1; m > 0; --m)
		p *= b;
	return p;
}