#include<iostream>
using namespace std;
main()
{
	int array[5]={10,20,30,40,50};
	int *pointer= array;  //By default 0 index value assign
	
	cout<<"Value at index 0 : "<<*pointer<<endl;
	cout<<"Value at index 1 : "<<*(pointer+1)<<endl;
	cout<<"Value at index 2 : "<<*(pointer+2)<<endl;
	cout<<"Addition of index 3 and index 4 values : "<<*(pointer+3)+*(pointer+4)<<endl;	
	
}
