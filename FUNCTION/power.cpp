//Find power of a number
#include<iostream>
using namespace std;
void power(int num,int pw){
int pow=1;
for(int i=0;i<pw;i++){
    pow=pow*num;
}
cout<<pw<<" power of "<<num<<" is "<<pow;
}
int main(){
int num,pow;
cout<<"enter number \n";
cin>>num;
cout<<"power you want to find \n";
cin>>pow;
power(num,pow);
}