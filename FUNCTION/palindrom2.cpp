//check if number is palindrom
//Find reverse of a number
#include<iostream>
using namespace std;
void pal(int num){
    int original = num;
    int reverse =0;
    while(num>0){
    reverse =10*reverse +num%10;
    num/=10;
    }
    if(original==reverse){
        cout<<"YES \n";
    }
    else{
        cout<<"NO \n";
    }
    
}
int main(){
int num;
cout<<"enter number "<<"\n";
cin>>num;
pal(num);
}