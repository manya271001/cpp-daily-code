#include<iostream>
using namespace std;
int dealer(int l){
    
return 90*l;
}
int main(){
    int ltr;
    cout<<"enter petrol in litre";
    cin>>ltr;

    cout<<"ammount you have to pay "<<(5*ltr) + dealer(ltr);
}