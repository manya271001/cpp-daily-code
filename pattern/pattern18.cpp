
#include<iostream>
using namespace std;
int main(){
    for(int r=1;r<=4;r++){

        for(int c = 4;c>=r;c--){
            cout<<"*";
        }
        cout<<"\n";
    }
   for(int r=1;r<=4;r++){
        for(int s=1;s<r;s++){
            cout<<" ";
        }
        for(int c = 4;c>=r;c--){
            cout<<"*";
        }
        cout<<"\n";
    }
}