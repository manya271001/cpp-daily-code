#include<iostream>
using namespace std;
void fun(int arr[] , int len){
    for(int i=0;i<len;i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int arr[]={1,3,88,9,7,66,6};
    int s = sizeof(arr)/sizeof(arr[0]);
    fun(arr,s);
}