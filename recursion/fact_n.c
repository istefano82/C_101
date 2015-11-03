// fact.c
#include <stdio.h>

unsigned long fact1(unsigned i)
{
    if (1 == i) return 1;
    return i * fact1(i - 1);
}

unsigned long fact2(unsigned n)
{
    unsigned i = 1;
    unsigned long res = 1;
    for (; i <= n; ++i)
        res *= i;
    return res;
}

const unsigned n = 6;

int main(int argc, char const *argv[])
{
    printf("fact1: %u! = %lu \n", n, fact1(n));
    printf("fact2: %u! = %lu \n", n, fact2(n));
    return 0;
}