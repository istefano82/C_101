#include "stdio.h"

int search1(char s[], char c)
{	
	int i;
	int k = -1;
	//printf("%d\n", i );
	for (i = 0; s[i] != '\0'; i++)
		//printf("%d %c\n", i, s[i]);
		if (s[i] == c) k = i;
	return k;
}

int main()
{
	char s[] = "alabalk";
	char c = 'l';
	printf("%d\n", search1(s, c));
	return 0;
}