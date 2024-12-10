//wap to find out maximum value of two
#include<iostream>
using namespace std;
int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
int a,b;
cout<<"enter two numbers "<<"\n";
cin>>a>>b;
cout<<"max value is "<<max(a,b);
}