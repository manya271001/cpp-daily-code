/*
     1
   0    1
0    1    0
*/

#include<iostream>
using namespace std;
int main(){
    // int k =1, a=0,b;
    // for(int r =1 ; r<=4; r++){
    //     for(int s =4 ; s>r ; s--){
    //         cout<<" ";
    //         }
    //         for(int c = 1 ; c<=r; c++){
    //            b=k;
    //            k=a;
    //            a=b;
    //            cout << b << " ";
                

    //         }
    //         cout<<"\n";
    //     }
        int k =0;
    for(int r =1 ; r<=4; r++){
        for(int s =4 ; s>r ; s--){
            cout<<" ";
            }
            for(int c = 1 ; c<=r; c++){
              if(k==0){
                cout<<k<<" ";
                k=1;
              }
              else{
                cout<<k<<" ";
                k=0;
              }
                

            }
            cout<<"\n";
        }
        
    }