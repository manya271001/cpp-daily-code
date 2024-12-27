//friendclass 
#include<iostream>
using namespace std;
class axis{
    int ammount = 1000;
    friend class rbi; 
   
    
};
class sbi{
    int ammount = 3000;
     friend class rbi; 

};
class rbi{
    public:
    void balanceaxis(axis a){
        cout<<"ammount of axis "<<a.ammount<<"\n";
    }
    void balancesbi(sbi s){
        cout<<"ammount of sbi "<<s.ammount<<"\n";
    }
};
int main(){
axis a;
sbi s;
rbi r;
r.balanceaxis(a);
r.balancesbi(s);

}