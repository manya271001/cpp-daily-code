#include<iostream>
using namespace std;
int main(){
    int a=30;
    int b=40;
    int &c=a;
    cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<"\n";
    int *p=&a;
    cout<<"address of a "<<p<<"\n";
    cout<<"value at a "<<*p<<"\n";

    // wild pointer
    int *d;
    cout<<d<<"\n";
    int *z=NULL; // Null pointer
    z=&b;

    // jumping
    char *t="carrommm";
    cout<<*(t+4);

    

}