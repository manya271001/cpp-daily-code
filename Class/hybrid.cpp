//hybrid
#include<iostream>
using namespace std;
class rbi{
    public:
    void msg(){
        cout<<"\nmsg from rbi\n";
    }
};
class sbi: virtual public rbi{
     public:
    void s(){
        cout<<"\nmsg from sbi\n";
    }
};
class axis :virtual public rbi{
    public:
    void a(){
        cout<<"\nmsg from axis\n";
    }
};
class cust:public sbi,public axis{
     public:
    void c(){
        cout<<"\nmsg from cust\n";
    }
};
int main(){
    cust obj;
    obj.a();
    obj.c();
    obj.s();
    obj.msg();
}
