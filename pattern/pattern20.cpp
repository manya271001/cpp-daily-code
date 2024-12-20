/*
    A       B       C
    A       B
    A
*/


#include<iostream>
using namespace std;
int main(){
    char ch='A';
    for(int r = 1;r<=3;r++){
        ch='A';
        for(int c=3;c>=r;c--){
            cout << ch<<"\t";
            ch++;
        }
        cout<<"\n";
    }
    }