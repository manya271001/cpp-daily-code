// wap to swap two number without using 3rd variable
#include<iostream>
using namespace std;
int main(){
    int number1 , number2 ; //number1=12,number2=13
    cout << "enter two numbers" << "\n";
    cin >> number1 >> number2;
    cout << "before swapping number1 = " << number1 << " number2 = " << number2 << "\n";
    number1 = number1 + number2; //number1=25
    number2 = number1 - number2; //number2=25-13 = 12
    number1 = number1 - number2; // number1= 25-12 =13
        cout << "after swapping number1 = " << number1 << " number2 = " << number2 << "\n";
    }