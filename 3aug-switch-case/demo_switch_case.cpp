#include<iostream>
using namespace std;
int main(){
    //accepting month from the users and displaying no of days
    cout << "Enter the month " << "\n";
    cout << "press 1 for jan , 2 for feb ....... and so on press 11 for november and 12 for december " << " Press 0 to exit" << "\n";
    int month = 0;
    cin >> month;
    // combining the cases or switch fall through : by removing the break btw them
    switch (month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        cout << "31 days " << "\n";
        break;
        case 2:
        cout << "28 or 29 days";
        break;
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        cout << "30 days" << "\n";
        break;
        default:
        cout << "invalid oprion " << "\n";
    }

    }