#include<stdio.h>
int main()
{
	int choice;
	char countorder;
	int quantity;
	int totalamount;
	
	    
	
	do{
		printf("1.pizza");
		printf("price=180rs/pcs");
		printf("2.burger");
		printf("price=100rs/pcs");
		printf("3.dosa");
		printf("price=120rs/pcs");
		printf("4.idali");
		printf("price=50/pcs");
		
		switch(choice)
		{
			case 1:
			printf("pizza");
			printf("enter quantity");
			scanf("%d",&quantity);
			totalamount += 180*quantity;
			break;
			
			case 2:
			printf("burger");
			printf("enter quantity");
			scanf("%d",&quantity);
			totalamount += 100*quantity;
			break;
			
			case 3:
			printf("pizza");
			printf("enter quantity");
			scanf("%d",&quantity);
			totalamount += 120*quantity;
			break;
				
			case 4:printf("idali");
			printf("enter quantity");
			scanf("%d",&quantity);
			totalamount += 50*quantity;
			break;
			
			default:
			printf(" enter valid choice");
		}
		printf("%d",totalamount);
		
		printf("do you want place more ordar");
		scanf("%c",&countorder);
	}
	  while(countorder =='y' || countorder =='y');
	 
	 printf("totalamount %d",totalamount);
	 return 0;
}
