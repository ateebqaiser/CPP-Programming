#include<iostream>
using namespace std;

void max();

main()
{
	max();
}

void max(){
	int n1=10,n2=4,n3=53;
	if(n1>n2 && n1>n3){
		cout<<"Maximum number : "<<n1;
	}
	else if(n2>n1 && n2>n3){
		cout<<"Maximum number : "<<n2;
	}
	else{
		cout<<"Maximum number : "<<n3;
	}
}

