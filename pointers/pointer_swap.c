#include "stdio.h"

void swap(int *px, int *py) /* interchange *px and *py */ 
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}

int main(int argc, char const *argv[])
{
	int a = 5, b = 6;
	swap(&a, &b);
	printf("a = %d, b = %d \n", a, b);

	return 0;
}