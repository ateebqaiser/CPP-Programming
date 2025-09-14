#include<iostream>
using namespace std;
main()
{
	const int x=20;
	const int *pointer1=&x;   //Pointer to const
	
	cout<<"Value of x using pointer to const : "<<*pointer1<<endl;
	
	int y=30,z=40;
	int *const pointer2=&y;   //const Pointer
	cout<<"Value of y using const pointer : "<<*pointer2<<endl;
	
	const int *const pointer3=&z;   //const Pointer to const
	cout<<"Value of z using const pointer : "<<*pointer3<<endl;
}
