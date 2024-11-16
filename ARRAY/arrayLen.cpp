#include<iostream>
using namespace std;
int main(){
    // WAP to count the length of an array
 int arr[]={19,20,33,56,77,88,99,00,100};
 int len= sizeof(arr)/sizeof(arr[0]);
 // we used the above method to make it compilier and datatype independent
 for(int i =0;i<len;i++){
    cout<<arr[i]<<"\t";
 }

    
}