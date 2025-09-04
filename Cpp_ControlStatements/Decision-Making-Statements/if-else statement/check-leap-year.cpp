#include<iostream>
using namespace std;
main()
{
	int leap_year;
	cout<<"Enter year : ";
	cin>>leap_year;
	if(leap_year%4==0){
		cout<<leap_year<<" is a Leap year";
	}
	else{
		cout<<leap_year<<" is not a Leap year";
	}
}
