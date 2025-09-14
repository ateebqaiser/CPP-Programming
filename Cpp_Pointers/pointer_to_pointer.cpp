#include<iostream>
using namespace std;
main()
{
	int a=30;
	int *pointer=&a;
	int **double_pointer=&pointer;
	
	cout<<"Value of a : "<<a<<endl;
	cout<<"Address of a: "<<&a<<endl;
	cout<<"Value of a by single pointer : "<<*pointer<<endl;
	cout<<"Value of a by double pointer : "<<**double_pointer<<endl;
	cout<<"Address of a by single pointer : "<<pointer<<endl;
	cout<<"Address of \"single pointer\" by double pointer : "<<double_pointer<<endl;
}
