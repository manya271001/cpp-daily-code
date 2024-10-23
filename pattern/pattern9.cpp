/*
      A
    B C
  D E F
*/

#include<iostream>
using namespace std;
int main(){
    char a=65;
    for(char r =1 ; r<=3; r++){
        for(int s =3; s>r ; s--){
            cout<<" ";
            }
            for(char c = 1 ; c<=r; c++){
                cout<< a;
                a++;
            }
            cout<<"\n";
        }
        
    }

