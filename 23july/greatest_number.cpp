#include<iostream>
using namespace std;
int main(){
    cout << " Enter an integer value number1 " << "\n";
    int number1=0;
    cin >> number1;
    cout << " Enter another integer value number2  " << "\n";
    int number2=0;
    cin >> number2;
    if ( number1 > number2 ) {
        cout << " number1 = " << number1 << " is greater then number2 = " << number2 << "\n";
    }
    else {
        cout << " number2 = " << number2 << " is greater then number1 = " << number1 << "\n";
    }
    return 0;
    
}