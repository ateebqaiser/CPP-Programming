#include<iostream>
using namespace std;
main()
{
	int n=5;
	for(int row=n;row>0;row--){
		for(int space=0;space<n-row;space++){
			cout<<" ";
		}
		for(int column=0;column<row;column++){
			cout<<"*";
		}
	cout<<endl;
	}
}
