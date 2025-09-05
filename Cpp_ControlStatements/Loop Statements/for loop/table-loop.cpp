#include<iostream>
using namespace std;
main()
{
	int table;
    cout<<"Enter table number : ";
    cin>>table;
    cout<<endl;
	for(int i=1;i<=10;i++){
		cout<<table<<" x "<<i<<" = "<<table*i<<endl;
	}
}
