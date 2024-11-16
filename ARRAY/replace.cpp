// wap to replace 1 with 0 in a given program
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,1,0,7,1,8,9,0,1,6,0,1,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<len ; i++){
        if(arr[i]==0){
        arr[i]=1;
        }
       else if(arr[i]==1){
            arr[i]=0;
        }
        cout<<arr[i]<<"\t";
       
    }
   
    cout<<endl;
    }