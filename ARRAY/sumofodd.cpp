//WAP to display the sum of odd numbers of an array
#include<iostream>
using namespace std;
int main(){
 int arr[]={1,3,3,2,44,5};
 int sum =0;
 int len= sizeof(arr)/sizeof(arr[0]);
 for(int i =0 ; i<len;i++){
    if(arr[i]%2!=0){
    sum=sum+arr[i];}
 }
 cout<<sum;
 }
