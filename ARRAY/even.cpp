// wap to print only even number
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,5,6,7,8,9,99,10,44};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<len ; i++){
        if(arr[i]%2==0){
        cout<< arr[i] << "\t";}
       
    }
   
    cout<<endl;}