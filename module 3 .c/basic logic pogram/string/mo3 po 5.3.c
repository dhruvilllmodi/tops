#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	char str [100]; //declare a strfing of size 100
	int l,i;
	printf("\nprintf individual character of string in reverse ordar");
	printf("--------------------------------------------------------\n");
	printf("input the string:");
	fgets(str,sizeof str,stdin);
	l=strlen(str);
	printf("the characters of the string in reverce are :\n");
	for(i=l;i>=0;i--)
	{
		printf("%c ",str[i]);
	}
	printf("\n");
}
