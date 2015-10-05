#include <stdio.h>
#include <math.h>
int main(){
int c;
float root;
while ((c = getchar()) != EOF)
    if (c >= 0)
    {
    root = 2*c;
    printf("%s %4.2f\n", "The side lenght doubled is",  root);
    }
    else
    printf("%s\n", "Error: Negative area.");
return 0;
}
