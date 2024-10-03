/*Write a program to accept an integer from user and print positive, if the number is positive. Otherwise, print negative. Considering number can never be equal to zero.*/
#include<iostream>
using namespace std;
int main() {
    cout << "Enter an integer number " << "\n";
    int number =0;
    cin >> number;
    if( number > 0){
        cout << "number " << number <<" is a positive number " << "\n"; 
    }
    else{
        cout << "number " << number <<" is a negative number" << "\n"; 
    }
    return 0;

}