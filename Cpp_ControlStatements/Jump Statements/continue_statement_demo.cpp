#include<iostream>
using namespace std;
main()
{
	int array[7]={-1,3,20,44,-13,4,-45};
	for(int i=0;i<7;i++){
		if(array[i]<0){
			continue;
		}
		cout<<array[i]<<endl;
	}
}
