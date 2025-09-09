#include<iostream>
using namespace std;
main()
{
	int array[5];
	cout<<"Enter 5 numbers : "<<endl;
	for(int i=0;i<5;i++){
		cout<<"Enter value at "<<i<<" index : ";
		cin>>array[i];
	}
	cout<<endl;
	for(int j=0;j<5;j++){
		cout<<"Value at "<<j<<" index : "<<array[j]<<endl;
	}	
}
