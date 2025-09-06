#include<iostream>
using namespace std;
main()
{
	int array[7]={5,3,6,12,34,3,43};
	int count=0,i=0;
	do{
		if(array[i]>10){
			count++;
		}
		i++;
	}while(i<7);
	cout<<"Total values greater than 10 are : "<<count;
}
