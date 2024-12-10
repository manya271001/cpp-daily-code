//same function name but different parameter
#include<iostream>
using namespace std;
void cube(int a){
    cout<<a*a*a<<"\n";
}
void cube(int a , int b){
    cout<<a*b<<"\n";
}
int main(){
    cube(3);
    cube(10,8);
}