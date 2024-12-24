#include<iostream>
using namespace std;
class student{
    public:
    student(){ //default constructor
        cout<<"memory allocated\n";
    }
    void show(){
        cout<<"function calling \n";
    }
    ~student(){
        cout<<"destructor called and memory released";
    }
};

int main(){
    student s1;
    s1.show();

}