#include<iostream>
using namespace std;

void merge(int array[],int left,int mid,int right){
    int n1=mid-left + 1;
    int n2=right-mid;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++){
        L[i]=array[left+i];
    }
    for(int j=0; j<n2; j++){
        R[j]=array[mid+1+j];
    }
    int i=0,j=0,k=left;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            array[k++]=L[i++];
        } else {
            array[k++]=R[j++];
        }
    }
    while(i<n1){
    	array[k++] = L[i++];
	} 
    while(j<n2) {
    	array[k++] = R[j++];
	}
}

void mergeSort(int array[], int left, int right) {
    if(left < right) {
        int mid = left + (right-left)/2;
        mergeSort(array, left, mid);
        mergeSort(array, mid+1, right);
        merge(array, left, mid, right);
    }
}
	
	

main()
{
	int array[] = {30,10,40,13,414,2,4,14,13};
    int size = sizeof(array)/sizeof(array[0]);
	mergeSort(array,0,size-1);
	
	cout << "Sorted Array : " << endl;
    for(int k=0; k<size; k++) {
        cout << array[k] << " ";
    }
}
