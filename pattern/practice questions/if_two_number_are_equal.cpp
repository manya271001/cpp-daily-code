/*Write a program that accept two numbers from the user and print equals if the numbers are equal.*/
#include<iostream>
using namespace std;
int main() {
    cout << "Enter two positive integer numbers " << "\n";
    int number1 = 0 ;
    int number2 = 0; 
    cin >> number1;
    cin >> number2;
    if ( number1 == number2){
        cout << "Two numbers:  Nnumber1 " << number1 << " and Number2 " << number2 <<" are equal " << "\n";
    }
    else {
                cout << "Two numbers: Number1 " << number1 << " and Number2 " << number2 <<" are not equal " << "\n";
    }
    return 0;
}