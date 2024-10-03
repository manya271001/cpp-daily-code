/*WAP to accept two number from user and check if they are both even and equal if they are accept third number and and check if it is positive or -ve and if -ve make the number +ve and if they are not equla and even print calculation not possible*/
#include<iostream>
using namespace std;
int main(){
    cout << "enter first number " << "\n";
    int number1 = 0;
    cin >>  number1;
    cout << "enter second number " << "\n";
    int number2 = 0;
    cin >>  number2;
if(number1 ==  number2 && number1 % 2 == 0){
        cout << "enter third number " << "\n";
        int number3 = 0;
        cin >> number3;
        if( number3 > 0) {
            cout << number3 << "\n";
        }
        else {
            cout << number3*(-1) << "\n";
        }
    }
    else {
        cout << "calculation not possible " << "\n";
    }
    return 0;
}