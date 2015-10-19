#include "stdio.h"

char search1(char s[])
{
	int alpha[256] = { 0 };
	int i;
	for (i = 0; s[i] != '\0'; i++)
		alpha[s[i]]++;

	int amax = 0;
	int imax = 0;
	for (i =1; i < 256; i++)
		if (alpha[i] > amax)
		{
			amax = alpha[i];
			imax = i;
		}
	return imax;
}

int main()
{
	char s[] = "";
	printf("%c \n", search1(s));
	return 0;
}