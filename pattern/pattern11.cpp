/*
    1
   21
  321
*/
#include<iostream>
using namespace std;
int main(){
    int p;
    for(int i =1 ; i<=3; i++){
        p=i;
        for(int s = 3 ; s>i ; s--){
            cout<<" ";
        }
        for(int j = 1 ; j<=i;j++){
            cout<<p;
            p--;
        }
        cout<<"\n";
    }
}