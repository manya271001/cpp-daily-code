// wap to find 2nd highest value
#include<iostream>
using namespace std;
int main(){
 int arr[]={1,99,100,90,88,766,87};
 int len= sizeof(arr)/sizeof(arr[0]);
 int max1 , max2;
 max1 = max2 = INT32_MIN;
 for(int i =0; i<len;i++){
  if(arr[i]>max1){
    max2=max1;
    max1=arr[i];
  }
  else if(arr[i]>max2 && arr[i]!=max1){
    max2=arr[i];
  }
 }
 cout<<"second max = "<<max2;
}

