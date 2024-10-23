#include<iostream>
using namespace std;
int main(){
    int num1,num2 , hcf;
    cout<<"enter num1 \n";
    cin>>num1;
    cout<<"enter num2 \n";
    cin>>num2;
    for(int i=1;i<=num1 || i<=num2;i++){
        if(num1%i==0 && num2%i == 0){
            hcf=i;
        }
    }
    cout << "HCF of two numbers is " << hcf;
}