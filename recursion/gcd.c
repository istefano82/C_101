// gcd.c
#include <stdio.h> 

unsigned gcd1(unsigned a, unsigned b) 
{ unsigned swap; 
  while (b > 0) { swap = b; b = a%b; a = swap; } 
  return a; 
}

unsigned gcd2(unsigned a, unsigned b) 
{ 
    return (0 == b) ? a : gcd2(b, a%b); 
}

int main() 
{ 
    const unsigned a = -5, b = -5; 
    printf("%d \n", gcd1(a, b)); 
    printf("%d \n", gcd2(a, b)); 
    return 0; 
} 