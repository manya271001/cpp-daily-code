// wap to display the sum of digit of a given number
#include<iostream>
using namespace std;
int main(){
    int number ,rem,sum=0;
    cout << "enter number ";
    cin>> number;
    while(number>0){
        rem = number%10;
        if(rem>=0){
            sum = sum+rem;
        }
        number = number/10;
    }
    cout << sum;
}