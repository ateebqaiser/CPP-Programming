#include<iostream>
using namespace std;
main()
{
	int *pointer=new int(10);
	delete pointer;
	pointer=NULL;
	if(pointer==NULL){
		cout<<"Pointer reset : "<<pointer;
	}
	else{
		cout<<"Invalid value : "<<*pointer;
	}
}
