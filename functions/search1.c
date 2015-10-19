#include "stdio.h"

int search1(char s[], char c)
{	
	int i;
	//printf("%d\n", i );
	for (i = 0; s[i] != '\0'; i++)
		//printf("%d %c\n", i, s[i]);
		if (s[i] == c) return 1;
	return 0;
}

int main()
{
	char s[] = "alabala";
	char c = 'l';
	printf("%d\n", search1(s, c));
	return 0;
}