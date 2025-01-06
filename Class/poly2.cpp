#include<iostream>
using namespace std;
class animal{
    // abstract class with pure virtual function
    public:
    virtual void sound()=0; // pure virtual function
};
class cat:public animal
{
    public:
    void sound(){
        cout<<"\n meow meow \n";
    }
};
class dog:public animal
{
    public:
    void sound(){
        cout<<"\n barking \n";
    }
};
class lion:public animal
{
    public:
    void sound(){
        cout<<"\n roar \n";
    }
};
int main(){
    animal *a;
    cat c;
    dog d;
    lion l;
    a=&d;
    a->sound();
}