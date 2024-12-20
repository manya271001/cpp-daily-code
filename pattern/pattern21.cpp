

#include<iostream>
using namespace std;
int main(){
    char ch='A';
    for(char r = 65;r<=67;r++){
        for(char c=67;c>=r;c--){
            cout << c<<"\t";
        }
        cout<<"\n";
    }
    }