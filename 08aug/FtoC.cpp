#include<iostream>
using namespace std;
int main(){
    float farenheit;
    cout << "enter temperature in farenheit" << "\n";
    cin >> farenheit;
    cout << "temperature " << farenheit << " degree farenheit in celcius is" << (farenheit - 32) * 0.555 << " degree celcius" << "\n";
    return 0;
}