//composite
#include<iostream>
using namespace std;
class  virus{
public:void affect(){
    cout<<"....!!!!!! SYSTEM HACKEDDDDD!!!!!.....";
}
};
class reward{
    virus v;
    public:
    void show(){
        cout<<"won $2,00,00,00, !!!!!!!!!";
        cout<<"\n";
        v.affect();
    }
};
 int main(){
    reward r;
    r.show();
 }