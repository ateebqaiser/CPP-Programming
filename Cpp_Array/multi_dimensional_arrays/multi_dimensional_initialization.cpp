#include<iostream>
using namespace std;
main()
{
	int array[2][2][2]={
	{{2,4},{3,4}},
	{{3,10},{5,10}}
	};
	cout<<"3D Array Elements"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<2;k++){
					cout<<array[i][j][k]<<" ";
			}
		}
		cout<<endl;
	}
}
