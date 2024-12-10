// call by value example
#include<iostream>
using namespace std;
void swaps(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"call by value \n";
    cout<<"after swap a = "<<a<<"\n b = "<<b<<"\n";
}
int main(){
    int a,b;
    cout<<"enter two numbers \n";
    cin>>a>>b;
     cout<<"before swap a = "<<a<<"\n b = "<<b<<"\n";
     swaps(a,b);
    cout<<"after swap a = "<<a<<"\n b = "<<b<<"\n";

}

