//wap to print the table of anynumber using function
#include<iostream>
using namespace std;
int table(int a){
    int arr[10];
    for(int i=1;i<=10;i++){
        arr[i]=a*i;
    }
}
int main(){
int a;
cout<<"enter number "<<"\n";
cin>>a;
cout<<"\n";
cout<<table(a);
}