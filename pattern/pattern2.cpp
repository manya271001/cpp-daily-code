/* 
    1
    1       2
    1       2       3   
*/
#include<iostream>
using namespace std;
int main(){
    int row=3,col=3;
    for(int i =1 ; i<=row;i++){
        for(int j = 1 ; j<=i;j++){
            cout<<j <<"\t";
        }
        cout<<"\n";
        
    }
}