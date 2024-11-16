//WAP to display the sum of the value of an array
#include<iostream>
using namespace std;
int main(){
 int arr[]={1,99,100};
 int sum =0;
 int len= sizeof(arr)/sizeof(arr[0]);
 for(int i =0 ; i<len;i++){
    sum=sum+arr[i];
 }
 cout<<sum;
 }
