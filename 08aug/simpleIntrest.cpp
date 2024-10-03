#include<iostream>
using namespace std;
int main(){
    float rate,time;
    double principle;
    cout << "enter principle , rate and time " << "\n";
    cin >> principle >> rate >> time;
    cout << "simple intrest = " << (principle * rate * time )/100 << "\n";
    return 0;
}