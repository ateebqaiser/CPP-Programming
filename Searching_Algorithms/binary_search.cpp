#include<iostream>
using namespace std;

int binarySearch(int array[],int size,int key);

main()
{
	int array[]={10,30,50,90,250};  //Must be sorted array
	int size,key;
	size=sizeof(array)/sizeof(array[0]);
	cout<<"Enter value for search : ";
	cin>>key;
	int found= binarySearch(array,size,key);
	if(found!=-1){
		cout<<"Value found at index  : "<<found;
	}
	else{
		cout<<"Value not found";
	}
}

int binarySearch(int array[],int size,int key){
	int start=0,end=size-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(array[mid]==key){
			return mid;
		}
		else if(array[mid]<key){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
	}
	return -1;
}


