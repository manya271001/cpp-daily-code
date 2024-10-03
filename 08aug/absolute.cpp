#include<iostream>
using namespace std;
int main(){
    int number;
    cout << "enter number";
    cin >> number;
    if(number > 0){
        cout << number;
    }
    else {
        cout << number*(-1);
    }

}