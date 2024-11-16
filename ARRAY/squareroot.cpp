// wap to find valid square root of number in a given array
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,3,9,16,55,25};
    int j=1;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<len ; i++){
        // do{
        //     if(arr[i]==j*j){
        //         cout<<arr[i] <<"\t";
        //     }
        //     j++;
        // }while(j<=(arr[i])/2);
        for(int x=1;x*x<=arr[i];x++){
            if(x*x==arr[i]){
                cout<<arr[i]<<"\t";
                break;
            }
        }
       
    }
   
    cout<<endl;
    }