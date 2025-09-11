#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
main() 
{	
    int arr[5];
    cout<<"Random array values: ";
    for(int i = 0; i < 5; i++){
        arr[i] = rand() % 100;
        cout<<arr[i]<<" ";
    }
}

