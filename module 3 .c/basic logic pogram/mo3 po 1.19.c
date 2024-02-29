// Calculate compound interest 

#include<stdio.h>
int main()
{
	float principal,rate,time,cp;
	
	printf("Enter value of principle:");
	scanf("%f",&principal);
	
	printf("Enter value of rate:");
	scanf("%f",&rate);
	
	printf("Enter value of time:");
	scanf("%f",&time);
	
	rate = rate / 100;
	
	cp = principal * pow(1 + rate, time) - principal;
	
	printf("Compound interest is:%f",cp);
	return 0;
}
