#include<iostream>
using namespace std;
int main(){
    int number1;
    int number2;
  
    cout << "enter two numbers" << "\n";
    cin >> number1 >> number2;
    float division = (float)number1 / number2;
    cout << "sum of two number " << number1 + number2 << "\n";
    cout << "difference of two number " << number1 - number2 << "\n";
    cout << "prdoduct of two number " << number1 * number2 << "\n";
    cout << "division of two number " <<  division <<"\n";
    cout << "modulo of two number " << number1 % number2 << "\n";
    return 0;

}