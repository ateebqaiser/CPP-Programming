#include<iostream>
using namespace std;
main()
{
//Arthimetic operators : "+,-,*,/,%,++,--"
	int number1,number2;
	cout<<"Enter first number : ";
	cin>>number1;
	cout<<"Enter second number : ";
	cin>>number2;
	cout<<"Addition of two numbers : "<<number1+number2<<endl;
	cout<<"Subtraction of two numbers : "<<number1-number2<<endl;
	cout<<"Multiplication of two numbers : "<<number1*number2<<endl;
	cout<<"Division of two numbers : "<<number1/number2<<endl;
	cout<<"Remainder  : "<<number1%number2<<endl;
	number1++;
	cout<<"Increment : "<<number1<<endl;
	number2--;
	cout<<"Decrement : "<<number2<<endl;
}
