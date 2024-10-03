// wap to swap two number using 3rd variable
#include<iostream>
using namespace std;
int main(){
    int number1 , number2 , number3;
    cout << "enter two numbers" << "\n";
    cin >> number1 >> number2;
    cout << "before swapping number1 = " << number1 << " number2 = " << number2 << "\n";
    number3 = number1;
    number1 = number2;
    number2 = number3;
    cout << "after swapping number1 = " << number1 << " number2 = " << number2 << "\n";
   
}