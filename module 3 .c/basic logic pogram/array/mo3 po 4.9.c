// WAP to show difference between Structure and Union

#include<stdio.h>
#include<string.h>
struct stud{
	int rollno; 
	char name[100]; 
	float pr; 
};
union stud1{
	int rollno; 
	char name[100]; 
	float pr; 
};
int main()
{
	struct stud s1 = {1,"xyz",55};
	union stud1 u1;
	printf("%d %s %f",s1.rollno,s1.name,s1.pr);
	u1.rollno=5;
	printf("\n %d",u1.rollno);
	strcpy(u1.name,"abc");
	printf("%s",u1.name);
	u1.pr=80;
	printf("%f",u1.pr);
	printf("\n%d is size of structure",sizeof(s1));
	printf("\n%d is size of union",sizeof(u1));
}
