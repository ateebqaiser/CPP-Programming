#include<iostream>
using namespace std;

void updatedValue(int &x){
	x=x+10;
}

main(){
	int number=5;
	updatedValue(number);
	cout<<"Value after update : "<<number;
}
