#include <iostream>
using namespace std;
main()
{
	int number;
	cout<<"Enter number : ";
	cin>>number;
	if(number>=0){
		if(number==0){
			cout<<"Your entered number is zero";
		}
		else{
			cout<<"Your entered number is positive";
		}
	}
	else{
		cout<<"Your entered number is negative";
	}
}
