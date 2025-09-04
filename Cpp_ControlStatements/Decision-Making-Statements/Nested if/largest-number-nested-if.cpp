#include<iostream>
using namespace std;
main()
{
	int n1,n2,n3;
	cout<<"Enter first number : ";
	cin>>n1;
	cout<<"Enter second number : ";
	cin>>n2;
	cout<<"Enter third number : ";
	cin>>n3;
	if(n1>n2){
		if(n1>n3){
			cout<<"Number "<<n1<<" is largest";
		}
		else{
			cout<<"Number "<<n3<<" is largest";
		}
	}
	else{
		if(n2>n3){
			cout<<"Number "<<n2<<" is largest";
		}
		else{
			cout<<"Number "<<n3<<" is largest";
		}
	}
}
