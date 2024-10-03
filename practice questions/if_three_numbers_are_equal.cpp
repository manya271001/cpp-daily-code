/*Write a program to accept three numbers from user and print equals if the numbers are equal.*/
#include<iostream>
using namespace std;
int main(){
    cout << "Enter three positive integrs " << "\n";
    int number1 = 0; 
    int number2 = 0;
    int number3 = 0;
    cin >> number1;
    cin >> number2;
    cin >> number3;
    if(number1 == number2 && number2 == number3){
        cout << " All the three numbers: Number1 " << number1 << " Number2 " << number2 << " and Number3 " <<  number3 << " are equal " << "\n";
    }
    else {
        cout << " All the three numbers: Number1 " << number1 << " Number2 " << number2 << " and Number3 " <<  number3 << " are not equal " << "\n";
    }
    return 0;
}