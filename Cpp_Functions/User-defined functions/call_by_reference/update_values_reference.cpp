#include<iostream>
using namespace std;

void swapValues(int &x,int &y){
	int temp=x;
	x=y;
	y=temp;
}

main()
{
	int n1=20,n2=30;
	cout<<"Values before swapped"<<endl;
	cout<<"Value of n1 : "<<n1<<endl;
	cout<<"Value of n2 : "<<n2<<endl;
	swapValues(n1,n2);
	cout<<endl<<"Values after swapped"<<endl;
	cout<<"Value of n1 : "<<n1<<endl;
	cout<<"Value of n2 : "<<n2<<endl;
	
}
