// wap to display the array in ascending order
#include<iostream>
using namespace std;
int main(){
     int arr[]={-90,-100,-899,0,1,2,66,8,9,5,3};
 int len= sizeof(arr)/sizeof(arr[0]);
  cout<<"before "<<"\t";
 for(int i =0;i<len;i++){
   cout<<arr[i]<<"\t";
 }
 for(int i = 0;i<len;i++){
    for(int j =0;j<len-1;j++){
        int temp;
        if(arr[j]>arr[j+1]){
            // temp=arr[j+1];
            // arr[j+1]=arr[j];
            // arr[j]=temp;
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
 }
 cout<<"\n after \t";
 for(int i=0;i<len;i++){
    cout<<arr[i]<<"\t";
 }
 
}