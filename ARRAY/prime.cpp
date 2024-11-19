// wap to display the prime number in a given array
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,5,6,7,8,9,99,10,44};
    int len = sizeof(arr)/sizeof(arr[0]);
   
    for(int i = 0 ; i<len ; i++){
        int k = arr[i]-1;
         bool flag=true;
        while(k>1){
            if(arr[i]%k==0){
                flag=false;
                break;
            }
            k--;
        }
        if(flag==true){
            cout<<arr[i]<<"\t";
        }
    }
   
    cout<<endl;
    }