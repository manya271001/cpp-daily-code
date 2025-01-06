#include<iostream>
using namespace std;
class vehicle{
    public:
    virtual void sound()=0; // pure virtual function
};
class train:public vehicle

{
    public:
    void sound(){
        cout<<"\n whistle \n";
    }
};
class car:public vehicle
{
    public:
    void sound(){
        cout<<"\n Beep-beep \n";
    }
};
class airplane :public vehicle
{
    public:
    void sound(){
        cout<<"\n Whoosh \n";
    }
};
class bicycle :public vehicle
{
    public:
    void sound(){
        cout<<"\n tring-tring \n";
    }
};
int main(){
    vehicle *v;
    car c;
    airplane a;
    bicycle b;
    train t;
    v=&t;
    v->sound();

    
}