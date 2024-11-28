// string builtin function 
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char name[10];
    char surname[10];
    cout<<"\n enter name \n";
    cin>>name;
    cout<<"\n enter surname \n";
    cin>>surname;
    cout<<strlen(name);// to find the length of the string
    cout<<"\n";
    cout<<strupr(name);// convert string into uppercase 
    cout<<"\n";
    cout<<strlwr(name);// convert string into lower case
    cout<<"\n";
    cout<<strcat(name,surname); // concatinate 2 strings together
    cout<<"\n";
    cout<<"name = "<<name<<" and "<<"surname = "<<surname; // store in name and surname is still the same
    // stricmp: ignore case senstivity
    // strcmp: case senseitive and used in comparing two strings 

    char pwd[10];
    char rpwd[10];
    cout<<"\n enter password \n";
    cin>>pwd;
     cout<<"\n enter password \n";
    cin>>pwd;
}