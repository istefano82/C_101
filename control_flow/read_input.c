#include <stdio.h>
#include <math.h>
int main(){
int c;
scanf("%d,\n", &c);
if (c >= 0)
    {
    printf("square root of %d is %4.2f\n", c , sqrt(c));
    }
else
    {
    printf("Cannot calculate square root of negative number");
    }
}


/*
while ((c = getchar()) != EOF)
    if (c >= 0)
    {
    root = sqrt(c);
    printf("%s %4.2f\n", "The side lenght doubled is",  root);
    }
    else
    printf("%s\n", "Error: Negative area.");
return 0;
}*/
