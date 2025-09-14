#include<iostream>
using namespace std;

void helloFunction(){
	cout<<"Hello World"<<endl;
}

main()
{
	void(*functionPointer)()=helloFunction;
	functionPointer();
}
