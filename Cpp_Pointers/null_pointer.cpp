#include<iostream>
using namespace std;
main()
{
	int *pointer=NULL;
	if(pointer==NULL){
		cout<<"Pointer is Null";
	}
	else{
		cout<<"Value in Pointer : "<<*pointer;
	}
}
