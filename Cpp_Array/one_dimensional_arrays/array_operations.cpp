#include<iostream>
#include<windows.h>
using namespace std;

int arr[10];  
int n = 0;  

void mainMenu();
void exitProgram();
void insert();
void search();
void update();
void deletes();
void traversal();

main()
{
    int choice;
    while (true){
        mainMenu();
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1: 
				insert(); 
				break;
            case 2: 
				search(); 
				break;
            case 3: 
				update();
			 	break;
            case 4:
				deletes(); 
				break;
            case 5: 
				traversal(); 
				break;
            case 6:
			 	exitProgram(); 
				break;
            default: 
				cout<<"Invalid choice!\n";
        }
        system("pause");
        system("cls");
    }
}

void mainMenu(){
    cout<<"\n\t\t------------ Main Menu ------------\n";
    cout<<"Press 1 for Insertion\n";
    cout<<"Press 2 for Searching\n";
    cout<<"Press 3 for Updation\n";
    cout<<"Press 4 for Deletion\n";
    cout<<"Press 5 for Traversal\n";
    cout<<"Press 6 for Exit\n";
}

void exitProgram(){
    system("cls");
    cout << "Exiting Program... Goodbye!\n";
}

void insert(){
    if (n >= 10){
        cout<<"Array is full!\n";
        return;
    }
    int val;
    cout<<"Enter value to insert: ";
    cin>>val;
    arr[n++]=val;
    cout<<"Value inserted!\n";
}

void search(){
    int key;
    cout<<"Enter value to search: ";
    cin>>key;
    for(int i = 0; i < n; i++){
        if (arr[i] == key){
            cout<<"Value found at index "<<i<<endl;
            return;
        }
    }
    cout << "Value not found!\n";
}

void update(){
    int index, newVal;
    cout<<"Enter index (0 to " << n - 1 << "): ";
    cin>>index;
    if(index>=0 && index<n){
        cout<<"Enter new value: ";
        cin>>newVal;
        arr[index]=newVal;
        cout<<"Value updated!\n";
    } 
	else{
        cout << "Invalid index!\n";
    }
}

void deletes(){
    int index;
    cout<<"Enter index to delete (0 to " << n - 1 << "): ";
    cin>>index;
    if(index>=0 && index<n){
        for(int i=index;i<n-1;i++)
            arr[i]=arr[i + 1];
        	n--;
        cout<<"Value deleted!\n";
    }
	else{
        cout<<"Invalid index!\n";
    }
}

void traversal(){
    if(n==0){
        cout << "Array is empty!\n";
        return;
    }
    cout<<"Array elements: ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
	}
	cout<<endl;
}

