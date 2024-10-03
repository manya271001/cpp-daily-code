/*Write a program to accept an integer from user and print even if the number is even, Otherwise print odd.*/
#include<iostream>
using namespace std;
int main(){
    cout << "Enter an integer number " << "\n";
    int number = 0;
    cin >> number;
    if (number % 2 == 0){
        cout << " Number = " << number << " is an even number " << "\n";
    }
    else {
        cout << " Number = " << number << " is a odd number " << "\n";
    }
    return 0;
}