//bubbleSort
#include<iostream>
using namespace std;
void bubble(int a[],int s){
   int temp;
   for(int i=0;i<s;i++){
    for(int j=0;j<s-i-1;j++){
        if(a[j]>a[j+1]){
            temp = a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
        }
    }
   }
   for(int i=0;i<s;i++){
    cout<<a[i]<<"\t";
   }
}

int main(){
    int arr[]={1,5,7,8,9,66,54};
    int s=sizeof(arr)/sizeof(arr[0]);
    bubble(arr,s);
}