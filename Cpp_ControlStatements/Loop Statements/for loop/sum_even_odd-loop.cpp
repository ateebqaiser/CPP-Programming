#include<iostream>
using namespace std;
main()
{
	int evenSum=0,oddSum=0;
	int start,end;
	cout<<"Enter start range : ";
	cin>>start;
	cout<<"Enter end range : ";
	cin>>end;
	if(start>end){
		cout<<"Start range must be less than end range"<<endl;
	}
	for(int i=start;i<=end;i++){
		if(i%2==0){
			evenSum+=i;
		}
		else{
			oddSum+=i;
		}
	}
	cout<<endl<<"Sum of Even Numbers from "<<start<<"-"<<end<<" is "<<evenSum<<endl;
	cout<<"Sum of Odd Numbers from "<<start<<"-"<<end<<" is "<<oddSum;
}
