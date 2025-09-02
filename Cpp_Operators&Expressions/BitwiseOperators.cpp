#include<iostream>
using namespace std;
main()
{
//Bitwise operators : "&(and),|(or),~(not),^(xor),<<(left-shift),>>(right-shift)"
	int n1=5,n2=3;
	cout<<"n1 & n2 : "<<(n1 & n2)<<endl;
	cout<<"n1 | n2 : "<<(n1 | n2)<<endl;
	cout<<"~n1 : "<<(~n1)<<endl;
	cout<<"n1 ^ n2 : "<<(n1 ^ n2)<<endl;
	cout<<"n1 << 1 : "<<(n1<<1)<<endl;
	cout<<"n1 >> 1 : "<<(n1>>1)<<endl;
}
