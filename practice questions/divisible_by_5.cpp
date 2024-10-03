/*Write a program to accept two numbers from user, if the both the numbers are positive, get the remainder of the division by 5 for both the numbers  If remainder of both the division are equal print numbers are equal, otherwise number are not equal. If one or both the numbers are negative, print calculation not possible.*/
#include<iostream>
using namespace std;
int main(){
    cout << "enter two integer numbers " << "\n";
    int number1 = 0; 
    int number2 = 0;
    cin >> number1;
    cin >> number2;
    if(number1 > 0 && number2 > 0){
        cout << "Number1 " << number1 << " and Number2 " << number2 << " both are positive numbers " << "\n";
        int remainder1 = number1 % 5;
        int remainder2 = number2 % 5;
        if(remainder1 == remainder2){
         cout << " Remainder of both the devision are equal therefore two numbers Number1 " << number1 << " and Number2 " << " are equal " << "\n";
        }
        else {
             cout << " Remainder of both the devision are not equal therefore two numbers Number1 " << number1 << " and Number2 " << " are not equal " << "\n";
        }

       }
    else {
       cout << "One of the number is negative hence calculation is not possible " << "\n";
    }
    return 0;
}