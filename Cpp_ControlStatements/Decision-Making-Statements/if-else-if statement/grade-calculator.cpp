#include<iostream>
using namespace std;
main()
{
	int marks,total_marks;
	float percentage;
	total_marks= 1100;
	cout<<"Enter marks : ";
	cin>>marks;
	percentage=marks*100/total_marks;
	if(percentage>=80){
		cout<<"A+";
	}
	else if(percentage>=70){
		cout<<"A";
	}
	else if(percentage>=60){
		cout<<"B";
	}
	else if(percentage>=50){
		cout<<"C";
	}
	else if(percentage>=40){
		cout<<"D";
	}
	else if(percentage>=33){
		cout<<"E";
	}
	else{
		cout<<"F";
	}
}
