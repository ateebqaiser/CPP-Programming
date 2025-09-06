#include<iostream>
#include <cctype>
using namespace std;
main()
{
	
	char ch='A';
	cout<<"Is alpha : "<<isalpha(ch)<<endl;
	cout<<"Is digit : "<<isdigit(ch)<<endl;
	cout<<"Is letter or digit  : "<<isalnum(ch)<<endl;
	cout<<"Is space : "<<isspace(ch)<<endl;
	cout<<"Upper : "<<toupper(ch)<<endl;
	cout<<"Lower : "<<tolower(ch)<<endl;
}
