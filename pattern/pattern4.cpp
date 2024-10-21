#include<iostream>
using namespace std;
int main(){
    int row=3,col=3;
    for(int i =1 ; i<=row;i++){
        for(int j = 1 ; j<=i;j++){
            i=i+1;
            cout<<i<<"\t";
        }
        cout<<"\n";
        
    }
}