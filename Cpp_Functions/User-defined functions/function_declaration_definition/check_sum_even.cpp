#include<iostream>
using namespace std;

bool is_sumEven(int,int);

main()
{
	int n1,n2;
	cout<<"Enter first number : ";
	cin>>n1;
	cout<<"Enter second number : ";
	cin>>n2;
	cout<<"Is sum of first and second number is even : "<<is_sumEven(n1,n2);
}

bool is_sumEven(int x,int y){
	if((x+y)%2==0){
		return true;
	}
	else{
		return false;
	}
}


