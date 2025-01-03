//multiple inheritnace
#include<iostream>
using namespace std;
class axis{
    public:
    void axisBank(){
        cout<<" \n welcome from axis bank ";
    }
};
class sbi{
    public:
    void sbiBank(){
        cout<<" \n welcome from sbi bank ";
    }
};

class customer:public sbi,public axis{ /* first sbi memory will be alloted and then axis and then customer and first customer then axis then sbi memory will get deleted*/
    public:
    void show(){
        cout<<"\n welcome customer ";
    }
};

int main(){
    customer ct;
    ct.axisBank();
    ct.sbiBank();
    ct.show();
}