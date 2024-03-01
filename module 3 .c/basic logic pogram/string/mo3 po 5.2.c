#include<stdio.h>
#include<stdlib.h>


void main()
{
	char str[100];
	int l=0;
	
	printf("\n\nseparate the individual characters from a string");
	printf("------------------------------\n");
	printf("input the string:");
	//scanf("%s",&str);
	fgets(str,sizeof str,stdin);
	printf("the characters of the string are :\n");
	while(str[l]!='\0')
	{
		printf("%c\n",str[l]);
		l++;
	}
	printf("\n");
}
