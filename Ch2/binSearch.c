#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int * randArr(int sz, int step);
int binSearch(int x, int v[], int n);

int main(void)
{
	/* 1) Prepare an array and a number */
	puts("1) Prepare an array and a number:");
	int sz = 6, x = 0, step = 10;
	srand(time(NULL));
	x = rand() % 100 + 1;
	int * v = randArr(sz,step);
	
	printf("v[%d] = ", sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%4d", v[i]);
	}
	putchar('\n');
	printf("x = %d\n", x);
	
	/* 2) Search */
	puts("2) Search:");
	int p = binSearch(x,v,sz);
	if (p >= 0)
		printf("Match at No.%d\n", p);
	else
		puts("No match!");
	free(v);

	return 0;
}

int * randArr(int sz, int step)
{
	int *v = malloc(sz*sizeof(int));
	int i = 0;
	/*for (i = 0; i < sz; i++){
		e = rand() % 50 + 1;
		if (i > 0 && e < *(v + i - 1))
			*(v + i) = *(v + i - 1) + e;
		else
			*(v + i) = e;
	}*/
	for (i = 0; i < sz; i++){
		*(v + i) = rand() % (step*(i + 1)) + 1;
		if (i > 0 && (*(v + i) < *(v + i - 1)))
			*(v + i)  = step*i + step*i - *(v + i - 1);
	}

	return v;
}

int binSearch(int x, int v[], int n)
{
	int low, high, mid;
	low = 0;
	high = n - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else
			return mid;
	}
	return -1;
}