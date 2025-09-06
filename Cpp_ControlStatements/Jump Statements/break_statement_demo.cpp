#include<iostream>
using namespace std;
main()
{
	int number[50];
	int i=0;
	cout<<"Enter 0 if you want to quit"<<endl;
	while(true){
		cout<<"Enter number : ";
		cin>>number[i];
		if(number[i]==0){
			break;
		}
		i++;
	}
	cout<<"Total numbers that you entered : "<<endl;
	for(int j=0;j<i;j++){
		cout<<number[j]<<endl;
	}
}
