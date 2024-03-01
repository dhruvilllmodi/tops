#include<stdio.h>
int main()
{
	//intilization variable.
	char str[100];
	int i,lenght=0;
	
	//accepting input
	printf("enter a string: \n");
	scanf("%s",str);
	
	//intilation for loop
	for(i=0; str[i]!='\0';i++)
	{
		lenght++;//counting the lenght
	}
	printf("\nlenght of input string :%d",lenght);
	return 0;
}
