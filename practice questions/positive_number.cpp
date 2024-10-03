/* Write a program that accept an integer form user and print positive, if the integer is positive.*/
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
        cout << "number " << number <<" is not a positive number " << "\n"; 
    }
    return 0;

}
