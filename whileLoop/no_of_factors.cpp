#include<iostream>
using namespace std;
int main(){
    int number , counter = 0;
    cout << "enter a number \n";
    cin >> number;
    int variable = number;
    while(variable>=1){
        if(number % variable == 0){
            counter++;
        }
        variable--;
    }
    cout << number << " have " << counter << " factors \n";
}