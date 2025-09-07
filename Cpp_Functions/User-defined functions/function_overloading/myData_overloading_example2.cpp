#include<iostream>
using namespace std;

int sum(int a,int b){
	return a+b;
}

int sum(double a,double b){
	return a+b;
}


main()
{
	cout<<"Sum of double : "<<sum(3.4,31.1)<<endl;
	cout<<"Sum of integers : "<<sum(4,311);
}
