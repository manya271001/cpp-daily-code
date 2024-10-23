// Write a C++ program to find first and last digit of a number.
#include<iostream>
using namespace std;
int main(){
    int number , counter=0;
    cout<<"enter number \n";
    cin>>number;
    cout<<"last digit "<<number%10 <<"\n";
    for(number;number>=10;number=number/10){
    }
    cout<<"first digit "<<number;
 
}