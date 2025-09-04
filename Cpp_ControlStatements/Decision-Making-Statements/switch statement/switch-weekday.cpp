#include<iostream>
using namespace std;
main()
{
	int weekDay;
	cout<<"Enter week-day (1-7) : ";
	cin>>weekDay;
	switch(weekDay){
		case 1:
			cout<<"Friday";
			break;
		case 2:
			cout<<"Saturday";
			break;
		case 3:
			cout<<"Sunday";
			break;
		case 4:
			cout<<"Monday";
			break;
		case 5:
			cout<<"Tuesday";
			break;
		case 6:
			cout<<"Wednesday";
			break;
		case 7:
			cout<<"Thursday";
			break;
		default:
			cout<<"Invalid week-day";
	}
}
