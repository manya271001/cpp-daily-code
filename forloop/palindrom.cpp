#include<iostream>
using namespace std;
int main(){
    int number, rem=0,originalNumber;
    cout<<"enter number \n";
    cin>>number;
    originalNumber=number;
    for(number;number>0;number=number/10){
        rem = rem*10 + number%10;
    }
    if(rem==originalNumber){
        cout << "palindrom \n";
    }
    else {
        cout << "not palindrom \n";
    }
}