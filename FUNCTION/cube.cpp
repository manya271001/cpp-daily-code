//Cube of a number
#include<iostream>
using namespace std;
void cube(int a){
    cout<<a*a*a;
}
int main(){
    int num;
    cout<<"enter number \n";
    cin>>num;
    cube(num);
}