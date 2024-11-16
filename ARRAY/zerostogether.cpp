// write all zeros together in the end
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,0,1,88,0,89,65,0};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<len ; i++){
        if(arr[i]>0){
        cout<<arr[i]<<"\t";
        }
        if(arr[i]==0){
            cout<<arr[i]<<"\t";
        }
       
    }
   
    cout<<endl;
    }