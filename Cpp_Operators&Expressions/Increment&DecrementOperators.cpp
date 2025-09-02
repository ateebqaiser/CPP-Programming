#include<iostream>
using namespace std;
main()
{
//Increment operators : "Pre-inc , Post-inc"
	cout<<"Pre-increment"<<endl;
	int n1=10;
	int n2=++n1;
	cout<<"Value of n1 : "<<n1<<endl;
	cout<<"Value of n2 : "<<n2<<endl<<endl;
	
	cout<<"Post-increment"<<endl;
	int n3=20;
	int n4=n3++;
	cout<<"Value of n3 : "<<n3<<endl;
	cout<<"Value of n4 : "<<n4<<endl<<endl;

//Decrement operators : "Pre-dec , Post-dec"
	cout<<"Pre-decrement"<<endl;
	int n5=30;
	int n6=--n5;
	cout<<"Value of n5 : "<<n5<<endl;
	cout<<"Value of n6 : "<<n6<<endl<<endl;
	
	cout<<"Post-decrement"<<endl;
	int n7=40;
	int n8=n7--;
	cout<<"Value of n7 : "<<n7<<endl;
	cout<<"Value of n8 : "<<n8<<endl;


}
