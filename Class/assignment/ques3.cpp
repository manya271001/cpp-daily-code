//Q.3 Write a C++ program to create function named as Result with different parameter to find area of geometry formula using function over loading in a class.
#include<iostream>
using namespace std;
class area{
public:
void result(float r){
    cout<<"area of circle is "<<3.14*r*r<<"\n";
}
void result(float l,float b){
    cout<<"area of rectnagle is "<<l*b;
}


};

int main(){
area obj1;
obj1.result(3.2);
obj1.result(2,7);
}
