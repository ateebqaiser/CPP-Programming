#include<iostream>
using namespace std;
main()
{
	int number;
	int evenNumber[5];
	cout<<"Enter five even numbers"<<endl;
		for(int i=0;i<5;i++){
			start:
				cout<<"Enter number : ";
				cin>>number;
				if(number%2==0){
					evenNumber[i]=number;
				}
				else{
					cout<<"You entered odd number please enter even number!"<<endl;
					goto start;
				}
		}
		cout<<endl<<"Even Numbers : "<<endl;
		for(int j=0;j<5;j++){
			cout<<evenNumber[j]<<endl;
		}
}
