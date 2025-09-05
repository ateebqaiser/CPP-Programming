#include<iostream>
using namespace std;
main ()
{
	int fact=1;
	int number;
	cout<<"Enter number you want to take factorial : ";
	cin>>number;
	for(int i=1;i<=number;i++){
		fact=fact*i;
	}
	cout<<endl<<"Factorial of "<<number<<" is "<<fact<<endl;
}
