#include<iostream>
using namespace std;
class student2;
class student1{
    int marks = 100;
    friend void cmp(student1,student2);
};
class student2{
    int marks=200;
    friend void cmp(student1,student2);
};
void cmp(student1 obj,student2 obj2){
if(obj.marks>obj2.marks){
    cout<<"marks of student 1 is greater \n";
}
else{
    cout<<"marks of student 2 is greater \n";
}
}
int main(){
    student1 s1;
    student2 s2;
    cmp(s1,s2);

}