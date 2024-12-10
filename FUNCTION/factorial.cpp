//find factorial of a number
#include<iostream>
using namespace std;
void fact(int num){
    int f=1;
    while(num>0){
        f=f*num;
        num--;
    }
    cout<<"factorial of number is "<<f<<"\n";
}
int main(){
int num;
cout<<"enter number "<<"\n";
cin>>num;
fact(num);
}