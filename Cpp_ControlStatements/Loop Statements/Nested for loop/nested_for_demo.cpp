#include<iostream>
using namespace std;
main()
{
	for(int row=1; row<=5; row++){
		for( int column=1; column<=row; column++){
			cout<<column;
		}
		cout<<endl;
	}
}
