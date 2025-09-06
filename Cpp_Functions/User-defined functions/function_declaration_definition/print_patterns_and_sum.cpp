#include<iostream>
using namespace std;

int sum(int,int);
void traingle();


main()
{
	cout<<"Sum of two numbers : "<<sum(10,20);
	traingle();
}

int sum(int n1,int n2){
	return n1+n2;
}
void traingle(){
	for(int i=0;i<=5;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
