// write all zeros together in the end
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,0,1,88,0,89,65,0};
    int len = sizeof(arr)/sizeof(arr[0]);
    int arr2[len];
    int k=0;
    cout<<"\t array is : \t";
    for(int i =0;i<len;i++){
        cout<<arr[i] << "\t";
    }
    cout<<"\n new output array \t";
    for(int i=0;i<len;i++){
        if(arr[i]!=0){
            arr2[k]=arr[i];
            k++;
        }
    }
    while(k<len){
        arr2[k]=0;
        k++;
    }
    for(int i =0 ;i<len;i++){
        cout<<arr2[i]<<"\t";
    }
    cout<<endl;
    }