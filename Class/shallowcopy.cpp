//shallowcopy and "this pointer" example
#include<iostream>
using namespace std;
class student{
    int rollNo;
    public:
    student(int rollNo){
        this->rollNo=rollNo;
    }
    void show(){
        cout<<"roll = "<<rollNo;
    }
};
int main(){
    student s(101);
    s.show();
}