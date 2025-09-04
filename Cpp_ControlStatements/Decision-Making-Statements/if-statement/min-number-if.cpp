#include<iostream>
using namespace std;
main()
{
	int num1,num2,num3,num4,min;
	cout<<"Enter first number : ";
	cin>>num1;
	cout<<"Enter second number : ";
	cin>>num2;
	cout<<"Enter third number : ";
	cin>>num3;
	cout<<"Enter fourth number : ";
	cin>>num4;
	if(num1<num2 && num1<num3 && num1<num4)
		{
			min=num1;
		}
	if(num2<num1 && num2<num3 && num2<num4)
		{
			min=num2;
		}
	if(num3<num2 && num3<num1 && num3<num4)
		{
			min=num3;
		}
	if(num4<num2 && num4<num3 && num4<num1)
		{
			min=num4;
		}
	cout<<"Minimum number is : "<<min<<endl;
}
