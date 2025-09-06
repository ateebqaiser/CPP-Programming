#include<iostream>
#include<cstring>
#include<string>
using namespace std;
main()
{
	char firstName[]="Ateeb";
	string lastName="Qaiser";
//String Length
	cout<<"Length of First Name : "<<strlen(firstName)<<endl;
	cout<<"Length of Last Name : "<<lastName.length()<<endl;
//String copy
	char studentName[20];
	strcpy(studentName,firstName);
	cout<<"Student Name : "<<studentName<<endl;
//String Reverse
	cout<<"Reverse : "<<strrev(firstName)<<endl;
//String concatenation
	cout<<"Full Name : "<<strcat(strrev(firstName),"Qaiser")<<endl;
//String Comparison
	cout<<"Comparison : "<<strcmp(firstName,"Ateeb")<<endl;
//String Uppercase
	cout<<"Upper Case : "<<strupr(firstName)<<endl;
//String Lowercase
	cout<<"Lower Case : "<<strlwr(firstName)<<endl;
//String Position
	cout<<"String Pointer : "<<strchr(firstName,'q')<<endl;

}
