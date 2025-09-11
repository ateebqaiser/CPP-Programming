#include<iostream>
using namespace std;
main()
{
	string names[3]={"Ateeb","Munees","Abdul-Rehman Khan"};
	cout<<"Student Names : "<<endl;
	for(int i=0;i<3;i++){
		cout<<i+1<<":"<<names[i]<<endl;
	}
}
