// protected
// private access
#include<iostream>
using namespace std;
class college{
    protected:
    void show(){
        cout<<"\n welcome from sbi";
    }

};
class student:public college{
    public:
    void message(){
        show();
        cout<<"hello\n";
    }
};

int main(){
    student s1;
    s1.message();
}