#include<iostream>
using namespace std;

void sum();
void traingle();


main()
{
	sum();
	traingle();
}

void sum(){
	int n1=10,n2=20;
	cout<<"Sum of two numbers : "<<n1+n2;
}
void traingle(){
	for(int i=0;i<=5;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
