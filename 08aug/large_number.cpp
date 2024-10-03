#include<iostream>
using namespace std;
int main(){
    int number1 , number2 ;
    cout << "enter two number ";
    cin >> number1 >> number2;
    if(number1 > number2){
        cout << number1 << "is greater";
    }
    else if(number2 > number1){
         cout << number2 << " is greater";
    }
    else {
        cout << "both are equal";
    }
}