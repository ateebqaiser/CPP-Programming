#include<iostream>
using namespace std;

void is_sumEven();

main()
{
	is_sumEven();
}

void is_sumEven(){
	int n1,n2;
	cout<<"Enter first number : ";
	cin>>n1;
	cout<<"Enter second number : ";
	cin>>n2;
	if((n1+n2)%2==0){
		cout<<"Sum of "<<n1<<" and "<<n2<<" is even";
	}
	else{
		cout<<"Sum of "<<n1<<" and "<<n2<<" is not even";
	}
}


