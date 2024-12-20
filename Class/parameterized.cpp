//parameterized
#include<iostream>
using namespace std;
class ATM{

    public:
    void show(){ //explicit
        cout<<"hello";
    }
    ATM(int u , int p){ //impilicit calling
        if(u==1111 && p==123){
            cout<<"\n welcome \n";
        }
        else
        cout<<"\n invalid user \n";
    }
};

int main(){
    int accNo,pwd;
    cout<<"enter accNo \n";
    cin>>accNo;
    cout<<"\n enter pwd \n";
    cin>>pwd;
    ATM obj(accNo,pwd);
 
}