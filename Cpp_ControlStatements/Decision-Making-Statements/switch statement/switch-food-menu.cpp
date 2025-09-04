#include<iostream>
using namespace std;
main()
{
	int choice,quantity;
	cout<<"\t\t=================== Menu ==================="<<endl;
	cout<<"\t\t\t\t 1.Burger : 200"<<endl;
	cout<<"\t\t\t\t 2.Sandwitch : 150"<<endl;
	cout<<"\t\t\t\t 3.Pizza : 500"<<endl;
	cout<<"\t\t\t\t 4.French Fries : 300"<<endl;
	cout<<"\t\t============================================"<<endl<<endl;

	cout<<"Press 1 for Burger"<<endl;
	cout<<"Press 2 for Sandwitch"<<endl;
	cout<<"Press 3 for Pizza"<<endl;
	cout<<"Press 4 for French Fries"<<endl;
	cout<<"Enter your choice : ";
	cin>>choice;
	cout<<endl;
	switch(choice){
	case 1:
		cout<<"Your order is Burger"<<endl;
		cout<<"Please enter your quantity : ";
		cin>>quantity;
		cout<<"Your total charge is "<<quantity*200;
		break;
	case 2:
		cout<<"Your order is Sandwitch"<<endl;
		cout<<"Please enter your quantity : ";
		cin>>quantity;
		cout<<"Your total charge is "<<quantity*150;
		break;
	case 3:
		cout<<"Your order is Pizza"<<endl;
		cout<<"Please enter your quantity : ";
		cin>>quantity;
		cout<<"Your total charge is "<<quantity*500;
		break;
	case 4:
		cout<<"Your order is French Fries"<<endl;
		cout<<"Please enter your quantity : ";
		cin>>quantity;
		cout<<"Your total charge is "<<quantity*300;
		break;
	default:
		cout<<"Invalid choice";	
	}
}
