#include<iostream>
using namespace std;

void insertionSort(int array[],int size){
	
	for(int i=1;i<size;i++){
        int key=array[i];
        int j=i-1;
        while(j>=0 && array[j]>key){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=key;
    }	
	cout<<"Sorted array : "<<endl;
	for(int k=0;k<size-1;k++){
		cout<<array[k]<<" ";
	}
}

main()
{
	int array[] = {30,10,40,13,414,2,4,14,13};
    int size = sizeof(array)/sizeof(array[0]);
    insertionSort(array,size);
}
