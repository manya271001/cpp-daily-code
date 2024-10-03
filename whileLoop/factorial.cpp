#include<iostream>
using namespace std;
int main(){
    int number , variable = 1;
    cout << "enter number \n";
    cin >> number;
    while(number>=1){
        variable = variable * number;
        number--;
    }
    cout << variable;
}