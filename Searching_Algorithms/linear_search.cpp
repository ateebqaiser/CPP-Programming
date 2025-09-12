#include<iostream>
using namespace std;

int linearSearch(int array[],int size,int key);

int main()
{
	int array[]={10,20,30,40,50,60};
	int size= sizeof(array) / sizeof(array[0]);
	int key;
	cout<<"Enter value for search : ";
	cin>>key;
	int found=linearSearch(array,size,key);
	if(found!=-1){
		cout<<"Value found at index : "<<found;
	}
	else{
		cout<<"Value not found";
	}
}

int linearSearch(int array[],int size,int key){
	for(int i=0;i<size;i++){
		if(array[i]==key){
			return i;
		}
	}
	return -1;		
}


