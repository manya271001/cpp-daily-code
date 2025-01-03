#include<iostream>
using namespace std;
class top{
    int a=10;
    public:  int operator ++(){
        a++;
        cout<<a<<"\n";
    }
      public:  int operator --(){
        a--;
        cout<<a<<"\n";
    }
   
};
int main(){
    /*top t1: Creates an instance (object) t1 of the class top. This object will have its own copy of all class members, including the variable a.
Initially, the value of a for t1 is 10 because of the default initialization in the class.*/
    top t1;
    ++t1;
    --t1;
}