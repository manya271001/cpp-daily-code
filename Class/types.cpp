// Types of classes 
//1. single class = only one class'
#include<iostream>
using namespace std;
class joy{
    int a=10;
    public: void show(){
        cout<<"coming from class joy value of a is "<<a<<"\n";
    }
};

// 2. multiple classes:  more than one class
class joy2{
int a=199;
    public: void show(){
        cout<<"coming from class joy2 value of a is "<<a<<"\n";
    }
};

//Anonymous class
class{
int a=1967676769;
    public: void show(){
        cout<<"coming from Anonymous class  value of a is "<<a<<"\n";
    }


}obj3;


int main(){
    joy obj;
    obj.show();
    joy2 obj2;
    obj2.show();
    obj3.show();
}