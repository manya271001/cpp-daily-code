/*Write a program that print the current balance of the account, ask the user to enter the withdrawal amount.
    - if withdrawal amount is less than current balance,
      - deduct the withdrawal amount form the current balance, if current balance after deduction is less than 500 INR, deduct penalty of 50 INR and print current balance and penalty.
      - otherwise, print the current balance.
    - If withdrawal amount is greater than current balance, print insufficient funds.*/
#include<iostream>
using namespace std;
int main() {
    int current_balance = 5000;
    cout << "enter the amount you want to withdaraw" << "\n";
    int withdarawl_ammount = 0;
    cin >> withdarawl_ammount;
    if (withdarawl_ammount < current_balance){
      cout << "the amount you are withdrawing is " << withdarawl_ammount << "\n";
      int updated_balance = current_balance - withdarawl_ammount;
      if (updated_balance < 500 ){
        cout << "updated balance after withdrawal is " << updated_balance << "\n" << "therefore penalty of rs 50 will be applied " << "\n";
        cout << "now current balance in your account is " << updated_balance - 50 << "\n"; 
      }
      else {
        cout << " updated bank balance is " << updated_balance ;
      }

    }
    else {
      cout << "No sufficient balance " << "\n";
      cout << "THANKYOOUUU" << "\n";
    }
    return 0;

}