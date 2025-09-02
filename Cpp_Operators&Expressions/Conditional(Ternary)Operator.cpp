#include<iostream>
#include<string>
using namespace std;
main()
{
//Ternary operators : "(condition)?expression1:expression2;"
	int n1=20,n2=10;
	int maximum=(n1>n2)?n1:n2;
	cout<<"Maximum Number : "<<maximum<<endl<<endl;
	
	string evenChecker=(n1%2==0)?"Even":"Odd";
	cout<<"Number "<<n1<<" is "<<evenChecker;
	
}
