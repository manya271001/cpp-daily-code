//hierarchical
#include<iostream>
using namespace std;
class RBI{
    public:
    void msg(){
        cout<<"\n welcome to rbi \n";
    }
};
class SBI:public RBI
{
    public:
    void sbimsg(){
        cout<<"\n welcome to sbi \n";
    }
};
class AXIS:public RBI
{
    public:
    void axismsg(){
        cout<<"\n welcome to axis \n";
    }
};
class PNB:public RBI
{
    public:
    void pnbmsg(){
        cout<<"\n welcome to pnb \n";
    }
};

int main(){
    AXIS a1;
    a1.axismsg();
    a1.msg();
}