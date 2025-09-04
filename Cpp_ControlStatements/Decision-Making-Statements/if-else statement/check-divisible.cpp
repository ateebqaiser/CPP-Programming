#include<iostream>
using namespace std;
main()
{
	int num;
	cout<<"Enter number : ";
	cin>>num;
	if(num%5==0 && num%11==0){
		cout<<"Number is divisble by both 5 and 11";
	}
	else{
		cout<<"Number is not divisble by both 5 and 11";
	}
}
