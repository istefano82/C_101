#include "stdio.h"
int fib(int n)
{
    printf("Entering fib: n = %d \n", n);
    int f;
    if (n <= 2)
        f = 1;
    else
        f = fib(n - 1) + fib(n - 2);
    printf("Exiting fib: n = %d return value = %d \n", n, f);
    return f;
}

int fib3(int n)
{
    if (n <= 2) return 1;
    int fold = 1, fold2 = 1, fnew;
    int i;
    for (i = 3; i <= n; i++) {
        fnew = fold + fold2;
        fold2 = fold;
        fold = fnew;
    }
    return fnew;
}

int main(int argc, char const *argv[])
{
		printf("%d\n", fib3(20));
		return 0;
	
}