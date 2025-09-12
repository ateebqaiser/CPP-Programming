#include<iostream>
using namespace std;

void bubbleSort(int array[],int size){
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1;j++){
			if(array[j]>array[j+1]){
				int temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	cout<<"Sorted Array : "<<endl;
	for(int k=0;k<size-1;k++){
		cout<<array[k]<<" ";
	}
}

main()
{
	int array[]={30,10,40,13,414,2,4,14,13};
	int size= sizeof(array)/sizeof(array[0]);
	bubbleSort(array,size);
}
