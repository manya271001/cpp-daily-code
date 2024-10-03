/*Write a program to accept the annual income from the user and calculate tax based of the below conditions:

In each case provide standard deduction of 50,000 INR, calculate taxable income by subtracting 50,000 form annual income.
if the taxable income is:
less than equal to 3,00,000 INR tax rate will be 0%.
greater than 3,00,000 INR and less than or equal to 5,00,000 INR tax rate will be 5%.
greater than 5,00,000 INR and less than or equal to 10,00,000 INR tax rate will be 15%.
greater than 10,00,000 INR and less than or equal to 15,00,000 INR tax rate will be 20%.
greater than 15,00,000 INR and less than or equal to 25,00,000 INR tax rate will be 25%.
greater than 25,00,000 INR tax rate will be 30%.
On the basis of the condition calculate tax amount and print.*/
#include<iostream>
using namespace std;
int main(){
    cout << "Enter your pay per day " << "\n";
    int pay_per_day = 0;
    cin >> pay_per_day;
    int annual_income = pay_per_day*365;
    cout << "your annual income is INR "<< annual_income << "\n";
    int taxable_income = annual_income - 50000 ;
    cout << " after standard 50k deduction your required income for tax calculation is " << taxable_income << "\n"; 
    if(taxable_income <= 300000 ){
        cout << "payable tax will be 0%" << "\n";
    }
    else   if(taxable_income > 300000 && taxable_income <= 500000 ){
        cout << "payable tax will be 5 % therefore the tax should be paid of amonut rs  " << 0.05*taxable_income << "\n";
    }
     else   if(taxable_income > 500000 && taxable_income <= 1000000 ){
        cout << "payable tax will be 15 % therefore the tax should be paid of amonut rs  " << 0.15*taxable_income << "\n";
    }
     else   if(taxable_income > 1000000 && taxable_income <= 1500000 ){
        cout << "payable tax will be 20 % therefore the tax should be paid of amonut rs  " << 0.2*taxable_income << "\n";
    }
     else   if(taxable_income > 1500000 && taxable_income <= 2000000 ){
        cout << "payable tax will be 25 % therefore the tax should be paid of amonut rs  " << 0.25*taxable_income << "\n";
    }
    else{
        cout << "payable tax will be 30 % therefore the tax should be paid of amonut rs  " << 0.3*taxable_income << "\n";
    }

    return 0;
}

