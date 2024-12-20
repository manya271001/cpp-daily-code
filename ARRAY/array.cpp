#include<iostream>
using namespace std;
int main(){
    int arr[]={};
    int s= sizeof(arr)/sizeof(arr[0]);
    cout<<"enter erray element \n";
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
    
}