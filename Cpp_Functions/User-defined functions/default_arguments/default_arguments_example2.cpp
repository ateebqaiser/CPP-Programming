#include<iostream>
using namespace std;

int sum(int a,int b=10){
	return a+b;
}

main()
{
	cout<<sum(20)<<endl;
	cout<<sum(5,10);
}
