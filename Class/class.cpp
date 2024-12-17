#include<iostream>
using namespace std;
class joy{
    int a=10;
    public: void show(){
        cout<<"coming from class joy value of a is "<<a<<"\n";
    }
};
int main(){
    joy obj;
    obj.show();
}