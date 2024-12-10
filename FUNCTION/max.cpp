//Maximum and minimum between two numb
#include<iostream>
using namespace std;
void find(int a, int b){
    if(a>b){
        cout<<"maximum = "<<a<<"\n minimum = "<<b;
    }
    else{
        cout<<"maximum = "<<b<<"\n minimum = "<<a;
    }
}
int main(){
int num1,num2;
cout<<"enter two number \n";
cin>>num1>>num2;
find(num1,num2);
}