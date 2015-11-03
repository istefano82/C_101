#include "stdio.h"

int k()
{
	printf("aaaa \n");
	return 1;
}

void test(int (*pk)())
{
	pk();
}

int main(int argc, char const *argv[])
{
	test(*k);
	return 0;
}