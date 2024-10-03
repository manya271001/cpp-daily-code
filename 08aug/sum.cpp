// WAP to display sum of three degit number
#include<iostream>
using namespace std;
int main(){
    int number;
    cout << "enter a three digit number (100-999)" << "\n";
    cin >> number;
    int quotient1,quotient2;
    int remainder1,remainder2,remainder3;
    remainder1 = number % 10;
    quotient1 = number / 10;
    remainder2 = quotient1 % 10;
    quotient2 = quotient1 / 10;
    remainder3 = quotient2 % 10;
    cout << "sum of three digits of number is " << remainder1 + remainder2 + remainder3 << "\n";
}