#include<iostream>
using namespace std;

void selectionSort(int array[],int size){
	for(int i=0;i<size-1;i++) {
        int minIndex=i;
        for(int j=i+1;j<size;j++){
            if(array[j]<array[minIndex]){
                minIndex=j;
            }
        }
        int temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
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
	selectionSort(array,size);
}
