//default
#include<iostream>
using namespace std;
class top{

    public:
    void show(){ //explicit
        cout<<"hello";
    }
    top(){ //impilicit calling
        cout<<"constructor called \n";
    }
};

int main(){
    top t1,t2;
    t2.show();
}