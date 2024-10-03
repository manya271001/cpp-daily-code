#include<iostream>
using namespace std;
int main(){
    int monthly_income;
    float tax = 0;
    cout << "enter monthly income " << "\n";
    cin >> monthly_income;
    int anuual_income = 12 * monthly_income;
    cout << "your annual salary " << anuual_income << "\n";
    if(anuual_income <= 300000){
        cout << "no tax" << "\n";
    }
    else if (anuual_income > 300000 && anuual_income <= 500000){
        cout << "5%  tax applicable" << "\n";
        cout << "payable tax ammount " << 0.05 * (anuual_income - 300000)<< "\n";
        tax = tax + 0.05 * (anuual_income - 300000);
    } 
     else if (anuual_income > 500000 && anuual_income <= 1000000){
        cout << "15%  tax applicable" << "\n";
        cout << "payable tax ammount " << 0.15 * (anuual_income - 500000)<< "\n";
        tax = tax + 0.15 * (anuual_income - 500000);
    } 

     else if (anuual_income > 1000000){
        cout << "30%  tax applicable" << "\n";
        cout << "payable tax ammount " << 0.3 * (anuual_income - 1000000)<< "\n";
        tax = tax + 0.3 * (anuual_income - 1000000);
    } 
 return 0;
    
}