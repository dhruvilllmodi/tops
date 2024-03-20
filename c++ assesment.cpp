#include<iostream>
using namespace std;

int main()
{
	string name;
	char cont_order;
	int choice,option,quantity,total_bill;
	
	cout<<"-------tops tec. fast food------";
	cout<<"\n";
	cout<<"\n";
	cout<<"Enter your name: ";
	cin>>name;
	cout<<"\n";
	cout<<"Hello,"<<name;
	cout<<"\n";
	cout<<"\n";
	cout<<"What you would like to order? ";
	cout<<"\n";
	cout<<"\n";
	cout<<"------menu------";
	
	do{
		cout<<"\n 1).pizza\n";
		cout<<"\n 2).Burger\n";
		cout<<"\n 3).sandwich\n";
		cout<<"\n 4).rolls\n";	
		cout<<"\nPlease Enter your choice: ";
		cin>>choice;
		
		if(choice==1)
		{
			cout<<"\n1.Margherita pizza		\t 90rs";
			cout<<"\n2.double cheese pizza	 \t 120rs";
			cout<<"\n3.veggie fresh pizza	 \t 130rs";
			
			cout<<"\n \n Enter your choice from above option";
			cin>>option;
			
			cout<<"\n Enter quantity: ";
			cin>>quantity;
			
			switch(option)
				{
					case 1:
						total_bill += 90 * quantity;
						cout<<"You have selected margherita pizza";
						break;
					case 2:
						total_bill += 120 * quantity;
						cout<<"You have selected double cheese pizza";
						break;
					case 3:
						total_bill += 130 * quantity;
						cout<<"You have selected veggie fresh pizza";
						break;
					default:
						cout<<"Invalid choice";			
						
				}
				cout<<endl;
				cout<<"Your total bill is: "<<total_bill;
				
				cout<<"\nDo you want place more order?(Y/N): ";
				cin>>cont_order;
			
		}
		else if(choice==2)
		{
			cout<<"\n1.Monster burger 	\t 150rs";
			cout<<"\n2.Aloo tikki burger\t 120rs";
			cout<<"\n3.veg burger		\t 100rs";
			
			cout<<"\n \n Enter your choice from above option";
			cin>>option;
			
			cout<<"\n Enter quantity: ";
			cin>>quantity;
			
			switch(option)
				{
					case 1:
						total_bill += 150 * quantity;
						cout<<"You have selected Monster burger";
						break;
					case 2:
						total_bill += 120 * quantity;
						cout<<"You have selected Aloo tikki burger";
						break;
					case 3:
						total_bill += 100 * quantity;
						cout<<"You have selected veg burger";
						break;
					default:
						cout<<"Invalid choice";			
						
				}
				cout<<endl;
				cout<<"Your total bill is: "<<total_bill;
				
				cout<<"\nDo you want place more order?(Y/N): ";
				cin>>cont_order;
		}
		else if(choice==3)
		{
			cout<<"\n1.club sandwich	   \t 60rs";
			cout<<"\n2.veg.crispy snadwich  \t 80rs";
			cout<<"\n3.chesse sandwich	   \t 100rs";

			cout<<"\n \n Enter your choice from above option";
			cin>>option;
			
			cout<<"\n Enter quantity: ";
			cin>>quantity;
			switch(option)
				{
					case 1:
						total_bill += 60 * quantity;
						cout<<"You have selected club sandwich";
						break;
					case 2:
						total_bill += 80 * quantity;
						cout<<"You have selected veg.crispy sandwich";
						break;
					case 3:
						total_bill += 100 * quantity;
						cout<<"You have selected Cheese sandwich";
						break;
					default:
						cout<<"Invalid choice";			
						
				}
				cout<<endl;
				cout<<"Your total bill is: "<<total_bill;
				
				cout<<"\nDo you want place more order?(Y/N): ";
				cin>>cont_order;
		}
		else if(choice==4)
		{
			cout<<"\n1.sp.roll	\t 40rs";
			cout<<"\n2.crispy rool\t 40rs";
			cout<<"\n3.veg. roll	\t 50rs";
			
			cout<<"\n \n Enter your choice from above option";
			cin>>option;
			
			cout<<"\n Enter quantity: ";
			cin>>quantity;
			switch(option)
				{
					case 1:
						total_bill += 40 * quantity;
						cout<<"You have selected sp.roll";
						break;
					case 2:
						total_bill += 40 * quantity;
						cout<<"You have selected crispy roll";
						break;
					case 3:
						total_bill += 50 * quantity;
						cout<<"You have selected veg.roll";
						break;
					default:
						cout<<"Invalid choice";			
					}
				cout<<endl;
				cout<<"Your total bill is: "<<total_bill;
				
				cout<<"\nDo you want place more order?(Y/N): ";
				cin>>cont_order;
		}
		
	}
	while(cont_order == 'y' || cont_order == 'Y');
	
		cout<<"Your revised bill is: "<<total_bill;

	return 0;
}
