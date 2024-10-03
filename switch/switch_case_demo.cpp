#include<iostream>
using namespace std;
int main(){
    //accepting month from the users and displaying no of days
    cout << "Enter the month " << "\n";
    cout << "press 1 for jan , 2 for feb ....... and so on press 11 for november and 12 for december " << " Press 0 to exit" << "\n";
    int month = 0;
    cin >> month;
    switch (month) 
    {
        case 1:
            cout << "31 days";
        break;
        case 2:
           cout << "28 days";
        break;
        case 3:
            cout << "31 days";
         break;
        
        case 4:
            cout << "30 days";
        break;
        case 5:
            cout << "31 days";
        break;
        case 6:
            cout << "30 days";
        break;
        case 7:
            cout << "31 days";
         break;
        case 8:
            cout << "31 days";
        break;
        case 9:
            cout << "30 days";
        break;
        case 10:
            cout << "31 days";
        break; 
        case 11:
            cout << "30 days";
        break;
        case 12:
            cout << "31 days";
        break;  
        case 0 :
            cout << "EXITING........." ;
        break;
        default :
        cout << "invalid month ";
    }
    return 0;
}