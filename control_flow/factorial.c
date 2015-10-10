#include <stdio.h>

unsigned long fact(int n)
{
	unsigned long  f = 1, i = 1;
	for(; i <= n; ++i) 
		f *= i;
	return f; 
}

int main()
{
//	int n;
//	scanf("%d", &n);
	unsigned long i = 1;
	for(; i <= 50; i++)
	printf("i = %lu fact = %lu\n", i, fact(i));
	return 0;
}

