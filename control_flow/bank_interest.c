#include <stdio.h>

//initialize sum to 10000, years to 0, months to 0,

int main() {
int sum = 10000;
float years = 0;
int months = 0;
double interest = 1 + 5.0/12/100
while(sum <= 20000)
	{
	sum *= interest;
	months += 1;
	}
	years = months/12.0;
	printf("%f\n", years);
	return 0;

}
