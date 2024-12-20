/*
    1
    4       9
    16      25      36
*/
#include<iostream>
using namespace std;
int main(){
    int row=3,col=3, t=1;
    for(int i =1 ; i<=3;i++){
        for(int j = 1 ; j<=i;j++){
            cout<<t<<"\t";
            t=t+2;
        }
        cout<<"\n";
        
    }
}