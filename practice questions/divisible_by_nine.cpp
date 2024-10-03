/*Write a program to accept three numbers from user and print all are divisible by 9, if all three numbers are divisible by 9.*/
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
    if(number1 % 9 == 0 && number2 % 9 ==0 && number3 % 9 ==0){
        cout << " All the three numbers: Number1 " << number1 << " Number2 " << number2 << " and Number3 " <<  number3 << " are divisible by 9 " << "\n";
    }
    else {
        cout << " All the three numbers: Number1 " << number1 << " Number2 " << number2 << " and Number3 " <<  number3 << " are not divisible by 9" << "\n";
    }
    return 0;
}