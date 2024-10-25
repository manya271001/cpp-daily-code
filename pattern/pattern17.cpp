/*
****
 ***
  **
   *
*/

#include<iostream>
using namespace std;
int main(){
    for(int r=1;r<=3;r++){
        for(int s=1;s<r;s++){
            cout<<" ";
        }
        for(int c = 3;c>=r;c--){
            cout<<"*";
        }
        cout<<"\n";
    }
}