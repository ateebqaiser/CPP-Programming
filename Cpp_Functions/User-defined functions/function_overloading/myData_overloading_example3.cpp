#include<iostream>
using namespace std;

void greet(string name){
	cout<<"Hello,"<<name<<"!"<<endl;
}
void greet(string name,int age){
	cout<<"Hello,"<<name<<"!You are "<<age<<" years old"<<endl;
}

main()
{
	greet("Ateeb",21);
	greet("Zain");
}
