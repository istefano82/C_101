#include "stdio.h"

int g = 0;
void f();

int test()
{
	static int u = 0;
	int a = 22;
	a++;
	u++;
	g++;
	printf("%d %d %d\n", u , a, g);
}

#include "aaa.c";

int main()
{
	test();
	test();
	test();
	f();
	return 0;
}