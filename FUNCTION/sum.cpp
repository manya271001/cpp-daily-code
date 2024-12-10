/*
 call by value -> same data get copied to both at the calling time and function defination
 with parameter and no return
*/
#include<iostream>
using namespace std;
int c;
void sum(int a,int b)
{ // with paramter and no return
    c=a+b;
}
void show(){
    // no return no papramter
    cout<<c;
}
int main(){
    int num1,num2;
    cout<<"enter two number \n";
    cin>>num1>>num2;
    sum(num1,num2); // call by value
    show();
}