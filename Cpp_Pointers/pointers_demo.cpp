#include<iostream>
using namespace std;
main()
{
	int a=40;
	int *pointer=&a;
	
	cout<<"Value of a : "<<a<<endl;
	cout<<"Address of a : "<<&a<<endl;
	cout<<"Address of a using pointer : "<<pointer<<endl;
	cout<<"Value of a using pointer : "<<*pointer;
}
