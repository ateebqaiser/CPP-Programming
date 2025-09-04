#include<iostream>
using namespace std;
main()
{
	char ch;
	cout<<"Enter any character : ";
	cin>>ch;
	if((ch>='a'&& ch<='z') || (ch>='A'&& ch<='Z')){
		
		cout<<"Your entered character "<<ch<<" is alphabet";
	}
	else if(ch>='0'&& ch<='9'){
		cout<<"Your entered character "<<ch<<" is digit";
	}
	else{
		cout<<"Your entered character "<<ch<<" is symbol";
	}
}
