// wap to display min value form an array
#include<iostream>
using namespace std;
int main(){
 int arr[]={1,99,100};
 int len= sizeof(arr)/sizeof(arr[0]);
 int value=INT32_MIN;
 for(int i =0 ; i<len;i++){
   if(value<arr[i]){
    value=arr[i];
   }
 }
 cout<<"min value = "<<value;
}

