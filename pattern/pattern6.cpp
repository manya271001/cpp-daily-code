/*
    1
    1       4
    1       4       9
*/
#include<iostream>
using namespace std;
int main(){
    int row=3,col=3;
    for(int i =1 ; i<=row;i++){
        for(int j = 1 ; j<=i;j++){
            cout<<j*j<<"\t";
        }
        cout<<"\n";
        
    }
}