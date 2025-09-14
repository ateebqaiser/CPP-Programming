#include<iostream>
using namespace std;
main()
{
	int array[5]={10,20,30,40,50};
	int *pointer=array;
	for(int i=0;i<5;i++){
		cout<<*(pointer+i)<<" ";
	}
}
