#include<iostream>
using namespace std;

void updatedValue(int x){
	x+=10;
	cout<<"Inside function : "<<x<<endl;
}

main()
{
	int number=5;
	updatedValue(number);
	cout<<"Outside function : "<<number<<endl;
}
