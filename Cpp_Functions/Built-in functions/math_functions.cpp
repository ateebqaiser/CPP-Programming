#include<iostream>
#include<cmath>
using namespace std;
main()
{
	int number=5;
	cout<<"Square root of 5 : "<<sqrt(number)<<endl;
	cout<<"Cube of 5 : "<<pow(number,3)<<endl;
	cout<<"Absolute value of -10 : "<<abs(-10)<<endl;
	cout<<"Round of 5.5 : "<<round(5.5)<<endl;
	cout<<"Cieling of 3.2 : "<<ceil(3.2)<<endl;
	cout<<"Floor of 3.8 : "<<floor(3.8)<<endl;
	cout<<"Maximum : "<<fmax(20,30)<<endl;
	cout<<"Minimum : "<<fmin(20,30)<<endl;
	cout<<"Floating Remainder : "<<fmod(10,3)<<endl;
	cout<<"Remainder : "<<remainder(10,3)<<endl;
}
