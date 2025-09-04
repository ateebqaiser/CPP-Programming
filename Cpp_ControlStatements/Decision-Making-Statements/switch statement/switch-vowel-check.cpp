#include<iostream>
using namespace std;
main()
{
	char ch;
	cout<<"Enter vowel character : ";
	cin>>ch;
	switch(ch){
	case 'a':case 'A': 
	case 'e':case 'E':
	case 'i':case 'I':
	case 'o':case 'O':
	case 'u':case 'U':
		cout<<ch<<" is vowel";
		break;
	default:
    	cout<<ch<<" is not a vowel,it's a consonant";
	}
}
