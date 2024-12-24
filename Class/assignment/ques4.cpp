//Q.4 Write a C++ program to check whether a number is palindrome or not using anonymous class.
#include<iostream>
using namespace std;
class{
    public:
    void palindrom(int num){
        int original = num;
        int rem=0;
        while(num>0){
            rem=rem*10+num % 10;
            num/=10;
        }
        if(original==rem){
            cout<<"yes palindrom \n";
        }
        else{
            cout<<"not palindrom";
        }
    }
} obj1;
int main(){
    int num;
    cout<<"enter number \n";
    cin>>num;

obj1.palindrom(num);
}