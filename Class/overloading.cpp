// function overloading in a class


#include<iostream>
using namespace std;
class top1{

    int a=10,b=100;
     public: 
     int sum(){ 
        return a+b;
    }
    int sum(int c,int d ,int f){
        return c+d+f;
    }
};

int main(){
    top1 t1,t2;
    cout<<t1.sum();
    cout<<"\n";
    cout<<t2.sum(100,200,100);
}