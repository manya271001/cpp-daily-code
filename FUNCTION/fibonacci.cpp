#include<iostream>
using namespace std;
int fib(int n){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
int num;
cout<<"enter number of term you want to find \n";
cin>>num;
cout<<fib(num);
}