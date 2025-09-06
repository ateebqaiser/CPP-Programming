#include<iostream>
using namespace std;
main()
{
	int array[5];
	int i=0;
	while(i<5){
		cout<<"Enter value in index "<<i<<" : ";
		cin>>array[i];
		i++;	
	}
	cout<<endl;
	i=0;
	while(i<5){
		cout<<"Value at index "<<i<<" : "<<array[i]<<endl;	
		i++;
	}
	
}
