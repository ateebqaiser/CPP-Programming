#include<iostream>
using namespace std;

void display(int x){
	cout<<"Integer : "<<x<<endl;
}
void display(double x){
	cout<<"Double : "<<x<<endl;
}

main()
{
	display(3.14);
	display(3);
}
