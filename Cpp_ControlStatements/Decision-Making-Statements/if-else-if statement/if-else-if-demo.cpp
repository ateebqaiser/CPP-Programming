#include<iostream>
using namespace std;
main()
{
	int number;
	cout<<"Enter a number : ";
	cin>>number;
	if(number>0){
		cout<<"Your entered number is positive";
	}
	else if(number<0){
		cout<<"Your entered number is negative";
	}
	else{
		cout<<"Your entered number is zero";
	}
}
