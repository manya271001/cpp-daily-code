/*
    A
   BA
  CBA
*/
#include<iostream>
using namespace std;
int main(){
    char p ;
    // for(char i =65 ; i<=67; i++){
    //     p=i;
    //     for(int s = 67 ; s>i ; s--){
    //         cout<<" ";
    //     }
    //     for(char j = 65 ; j<=i;j++){
    //         cout<<p;
    //         p--;
    //     }
    //     cout<<"\n";
    // }
    //  for(char i =65 ; i<=67; i++){
    //     for(int s = 67 ; s>i ; s--){
    //         cout<<" ";
    //     }
    //     for(char j = i ; j>=65;j--){
    //         cout<<j;
    //     }
    //     cout<<"\n";
    // }

    for(int r=1;r<=3;r++){
        p=65;
        for(int s=3;s>r;s--){
            cout<<" ";
        }
        for(int j=1;j<=r;j++){
            cout<<p;
            p++;
        }
        cout<<"\n";
    }
}