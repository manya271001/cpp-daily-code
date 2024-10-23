/*
    1
   23
  456
*/
#include<iostream>
using namespace std;
int main(){
    int p =1;
    for(int i =1 ; i<=3; i++){

        for(int s = 3 ; s>i ; s--){
            cout<<" ";
        }
        for(int j = 1 ; j<=i;j++){
            cout<<p;
            p++;
        }
        cout<<"\n";
    }
}