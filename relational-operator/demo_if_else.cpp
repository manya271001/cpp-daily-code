#include<iostream>
using namespace std;
int main(){
    float current_balance = 5000;
    cout << " Enter the withdraw amount in integer " << "\n";
    int withdraw_ammount = 0;
    cin >> withdraw_ammount;
    if( withdraw_ammount <= current_balance){
        cout << " current balance "<< current_balance << "\n";
        cout << " withdraw of ammount " << withdraw_ammount << " is sucessful.  " << "\n";
        current_balance = current_balance - withdraw_ammount;
        cout << " updated balance = " << current_balance << "\n";
    }
    else{
        cout << " Insufficient funds " << "\n";
        cout << " current balance = " << "\n";
    }
    return 0;
}
