#include "stdio.h"

int main(int argc, char const *argv[])
{
	int a[3] = {10, 20, 30};  
	int *pa = a;
	void *vv; //void pointer

	char ch = 'i';

	vv = &ch;

	printf("%c %d %d \n", (*(char*)vv)[0], pa[0], *pa); 
	return 0;
}
