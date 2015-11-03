#include "stdio.h"

int search1(char s[])
{
	int alpha[256] = { 0 };
	int i,j;
	for (i = 0; s[i] != '\0'; i++)
		alpha[s[i]]++;

	int amax = 0;
	int imax = 0;
	for (i =1; i < 256; i++)
	{
		if (alpha[i] > amax)
		{
			amax = alpha[i];
			imax = i;
		}
	}

int *p;

	for(j = 0; j < 256; j ++){
		if (alpha[j] > 0){
			printf("%c ", j);
		}
	}
	printf("\n");
	
	for(i = amax; i > 0; i--){
		for(j = 0; j < 256; j ++){
			if ((alpha[j] >= i)){
				//printf("%c ", j);
				printf("x ");
				
			}
			//else
				//printf(" ");
		}

		printf("\n");
	}	

	return 0;
}

int main()
{
	char s[] = "assssssssssdasdasddfgbgdgfderrnm";
	//printf("%s\n", s);
	search1(s);
	return 0;
}