// private access
#include<iostream>
using namespace std;
class sbi{
    public:
    void show(){
        cout<<"\n welcome from sbi";
    }
};
class axis:private sbi{
    // can only access its function inside the child class with or without object
    public:
    void message(){
        show();
        cout<<"hello\n";
    }
};

int main(){
    axis a;
    a.message();
}