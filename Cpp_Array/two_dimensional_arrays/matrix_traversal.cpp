#include<iostream>
using namespace std;
main()
{
	int array[2][3]={
	{1,2,3},
	{4,5,6}
};
	cout<<"Matrix Elements : "<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
		}
	}
