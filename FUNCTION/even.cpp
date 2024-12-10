//Check even or odd
#include<iostream>
using namespace std;
void find(int num){
    if(num%2==0){
        cout<<"EVEN";
    }
    else{
        cout<<"ODD";
    }
}
int main(){
int num;
cout<<"enter number \n";
cin>>num;
find(num);
}