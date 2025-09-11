#include<iostream>
using namespace std;
main()
{
	int array[2][2]={
	{2,4},
	{3,10}
	};
	cout<<"Matrix after replaxing odd numberes with zero"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			if(array[i][j]%2 !=0){
				array[i][j]=0;
			}
		cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
}
