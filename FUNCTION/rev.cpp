//Find reverse of a number
#include<iostream>
using namespace std;
void rev(int num){
    int reverse =0;
    while(num>0){
    reverse =10*reverse +num%10;
    num/=10;
    }
    cout<<"reverse of your number is "<<reverse;
}
int main(){
int num;
cout<<"enter number "<<"\n";
cin>>num;
rev(num);
}