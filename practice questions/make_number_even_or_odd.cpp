/*Write a program to accept an integer from user. If the number is even make it odd and print. If the number is odd make it even and print*/
#include<iostream>
using namespace std;
int main(){
    cout << " enter an integer number" << "\n";
    int number = 0;
    cin >> number;
    if (number % 2 == 0){
        cout << "Number " << number << " is an even number therefore new number is " << number + 1 << "\n";
    }
    else {
         cout << "Number " << number << " is a odd number therefore new number is " << number + 1 << "\n";
    }
    return 0;
}