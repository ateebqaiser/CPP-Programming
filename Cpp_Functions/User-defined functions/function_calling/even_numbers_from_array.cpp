#include<iostream>
using namespace std;

void findEven(int num[],int size){
	for(int i=0;i<size;i++){
		if(num[i]%2==0){
				cout<<num[i]<<endl;
		}
	}
}

main()
{
	int array[]={1,2,3,4,5,6,7};
	int size = sizeof(array)/sizeof(array[0]);
	findEven(array,size);
}
