//WAP to Find Area And Circumference of Circle
#include<stdio.h>
int main()
{
	float pi=3.14,r,a;
	printf("Enter the value of r to find area of circle : ");
	scanf("%f",&r);
	a=pi*r*r;
	printf("The area of circle is : %f",a);
	return 0;
}
