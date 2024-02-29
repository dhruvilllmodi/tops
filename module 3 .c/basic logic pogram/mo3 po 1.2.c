//Write a program to make Simple calculator (to make addition, subtraction,multiplication, division and modulo)
#include<stdio.h>
int main()
{
	int value1,value2;
	char choice;
	printf("enter choice (+,-,*,/,%)");
	scanf("%c",&choice);
	printf("enter a value");
	scanf("%d",&value1);
	printf("enter a value2");
	scanf("%d",&value2);
	
	switch (choice)
	
	{
		case'+':
		printf("addition of %d",value1+value2);
		break;
		case'-':
		printf("subtraction of %d",value1-value2);
		break;
		case'*':
		printf("multiplication of %d",value1*value2);
		break;
		case'/':
		printf("divison of %d",value1/value2);
		break;
		case'%':
		printf("modulo of %d",value1%value2);
		break;
		
	}
	return 0;
}
