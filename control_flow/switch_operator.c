#include <stdio.h>




int main()
{
	double sum;
	int n;
	char a[10];
	printf("Type? ");
	scanf("%s", a);
	printf("Number? ");
	scanf("%d", &n);
	switch (a[0]) {
case 'd': 
	sum = n * 0.1;
	break;
case 'p':
	sum = n * 0.01;
	break;
case 'n':
	sum = n * 0.05;
	break;
case 'q':
	sum = n * 0.25;
	break;
default:
	sum = -1;
	}
	printf("sum = %5.2f\n", sum);
	return 0;
}
