/*  
    A
    B C
    D E F
*/

#include<iostream>
using namespace std;
int main(){
    char ch='A';
    for(int r = 1;r<=3;r++){
        for(int c=1;c<=r;c++){
            cout << ch<<"\t";
            ch++;
        }
        cout<<"\n";
    }
    }