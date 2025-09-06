#include<iostream>
using namespace std;
main()
{
	for(int i=1;i<=7;i++){
		int fact=1;
		for(int j=1;j<=i;j++){
			fact=fact*j;
		}
		cout<<"Factorial of "<<i<<" is "<<fact<<endl;
	}
}
