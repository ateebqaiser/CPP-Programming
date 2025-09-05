#include<iostream>
using namespace std;
main()
{
	int start,end,table;
	cout<<"Enter starting number : ";
	cin>>start;
    cout<<"Enter ending number : ";
	cin>>end;
	cout<<"Enter table number : ";
	cin>>table;
	while(start<=end){
		cout<<table<<" x "<<start<<" = "<<table*start<<endl;
		start++;
	}	
}
