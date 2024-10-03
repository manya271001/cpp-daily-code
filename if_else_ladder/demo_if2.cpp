/*
check divisibility by 7
*/
#include<iostream>
using namespace std;
int main() {

    cout << "Enter an integer Number " << "\n";
    int number = 0;
    cin >> number;
    if ( number % 7 == 0){
        cout << "Number " << number <<" Compeletely divisible by 7 " << "\n";
    }
    else if ( number % 2 == 0){
        cout << "Number " << number << " is divisilbe by 2" << "\n";
    }
    else {
        cout << " Not divisible by 7 or 2 " << "\n";
    }
    return 0 ;
}