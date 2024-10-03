#include <iostream>
using namespace std;
int main() {
    /* without usign 3rd variable 
    a=10;
    b=20;
    a=a+b;(a=30)
    b=a-b(30-20)(b=10)
    a=a-b(30-10)(a=20)
    */
    int number1 = 100;
    int number2 = 50;
    cout << " number 1 = " << number1 << " and number2 = " << number2 << " before swapping " << "\n";
    
    cout << " AFTER SWAPPING " << "\n";
    // swapping by using a third variable;
    int temp;
    temp = number1;
    number1 = number2;
    number2 = temp;
    cout << " number 1 = " << number1 << " and number2 = " << number2 << " after swapping " << "\n";
    return 0; 
}
    