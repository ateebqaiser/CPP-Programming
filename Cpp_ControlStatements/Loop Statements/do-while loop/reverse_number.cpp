#include <iostream>
using namespace std;
main() 
{
    int number,reverse=0;
    cout << "Enter a number: ";
    cin >> number;
    do{
        int digit = number%10;
        reverse = reverse*10+digit;
        number/=10;
    } while (number!=0);
    cout << "Reversed Number = "<<reverse<< endl;
}

