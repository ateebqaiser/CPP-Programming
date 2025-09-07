#include<iostream>
using namespace std;

inline int square(int n){
	return n*n;
}

main()
{
	int number;
	cout<<"Enter any number for square : ";
	cin>>number;
	cout<<"Sqaure of "<<number<<" is "<<square(number);
}
