/*
    1
   22
  333
*/
#include<iostream>
using namespace std;
int main(){
    for(int i =1 ; i<=3; i++){
        for(int s = 3 ; s>i ; s--){
            cout<<" ";
        }
        for(int j = 1 ; j<=i;j++){
            cout<<i;
        }
        cout<<"\n";
    }
}