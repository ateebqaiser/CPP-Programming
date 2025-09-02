#include<iostream>
using namespace std;
main()
{
//Logical operators : "&&,||,!"
	
	int number1=50,number2=40;
	cout<<number1<<" > "<<number2<<" and "<<number1<<" == "<<number2<<" : "<<(number1>number2 && number1==number2)<<endl; 
	cout<<number1<<" > "<<number2<<" or "<<number1<<" == "<<number2<<" : "<<(number1>number2 || number1==number2)<<endl; 
	cout<<number1<<" > "<<number2<<" : "<<(!(number1>number2))<<endl; 
}
