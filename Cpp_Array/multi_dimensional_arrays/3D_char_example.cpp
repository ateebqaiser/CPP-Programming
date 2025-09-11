#include <iostream>
using namespace std;
main() 
{
    char arr[3][3][3]={ 
	{{'A','B','C'},{'D','E','F'},{'G','H','I'}},
	{{'J','K','L'},{'M','N','O'},{'P','Q','R'}},
	{{'S','T','U'},{'V','W','X'},{'Y','Z','0'}}
};
    cout << "Characters: "<<endl;
    for (int i=0;i<3;i++){
    	for (int j=0;j<3;j++){
    		for (int k=0;k<3;k++){
    			cout<<arr[i][j][k]<< " ";
    		}
    	}
    	cout<<endl;
	}
}

