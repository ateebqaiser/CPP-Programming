#include<iostream>
using namespace std;

void greet(string name="user"){
	cout<<"Hello,"<<name<<endl;
}

main()
{
	greet();
	greet("Ateeb");
}
