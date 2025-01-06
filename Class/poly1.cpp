#include<iostream>
using namespace std;
class rbi{
    public:
  virtual void show(){ // now it is a super class 
        cout<<"\n rbi class";
    }
};
class axis: public rbi{
     public:
    void show(){
        cout<<"\n axis class";
    }
};
class sbi: public rbi{
     public:
    void show(){
        cout<<"\n sbi class";
    }
};
int main(){
    rbi *obj; // for super class we make pointer object
    axis a;
    obj=&a;
    obj->show();
    sbi s;
    obj=&s;
    obj->show();

}