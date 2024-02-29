//Find circumference of Triangle formula : triangle = a + b + c
#include<stdio.h>
int main()
{
	int a,b,h;
	printf("Enter the values to find area of triangle.\n");
	printf("Enter the value of b : ");
	scanf("%d",&b);
	printf("Enter the value of h : ");
	scanf("%d",&h);
	a=(b*h)/2;
	printf("The area of triangle is : %d",a);
	return 0;
}
