#include<iostream>
using namespace std;
main()
{
	int array[5],sum=0;
	for(int i=0;i<5;i++){
		cout<<"Enter "<<i+1<<" value : ";
		cin>>array[i];
	}
	for(int j=0;j<5;j++){
		if(array[j]%2==0){
			sum+=array[j];
		}
	}
	cout<<endl<<"Sum of even numbers : "<<sum;
	
}
