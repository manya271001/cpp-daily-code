//wap to check the given string is palindrom or not
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str[20];
    cout<<"\n enter string \n ";
    cin>>str;

    if(strrev(str)==str){
        cout<<"\n palindrom \n";
    }
    else{
        cout<<"not palindrom";
    }
}