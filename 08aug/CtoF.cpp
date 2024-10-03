#include<iostream>
using namespace std;
int main(){
    float celcius,farenheit;
    cout << "enter temperature in celcius" << "\n";
    cin >> celcius;
    cout << "temperature " << celcius << " degree celcius in farenheit is " << (celcius * 1.8)+ 32 << " degree farenheit" << "\n";
    return 0;
}