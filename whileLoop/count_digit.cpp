// wap to count a digit of given number
#include<iostream>
using namespace std;
int main(){
    int number,counter=0;
    cout << "enter number \n";
    cin >> number;
    while(number>0){
        if(number % 10 >=0){
            counter++;
        }
        number = number/10;

    }
    cout <<  counter;

}