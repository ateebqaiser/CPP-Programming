#include<iostream>
using namespace std;

void increment(int n){
	n++;
}

main()
{
	int number=10;
	increment(number);
	cout<<"Value after function call : "<<number<<endl;
	//value can remain same
}
