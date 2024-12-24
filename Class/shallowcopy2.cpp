//shallowcopy2.cpp
#include<iostream>
using namespace std;
class student{
 
    public:
       int roll;
    student(int rollNo){
        roll=rollNo;
    }
    void show(){
        cout<<"roll = "<<roll<<"\n";
    }
};
int main(){
    student s(101);
    s.show();
    student s2(s);
     s2.roll=787;
     s2.show();
    student s3(s2);
    s3.show();
   
}