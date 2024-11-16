#include<iostream>
using namespace std;
int main(){
    // array traversing can be done in 2 way 1.Forward 2.Backward
    int arr[]={2,4,5,6,7,8,9,99,10,44};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<len ; i++){
        
        cout<< arr[i] << "\t";
       
    }
     cout<<"\n";
    for(int i = len-1;i>=0;i--){
    
        cout<<arr[i]<<"\t";
    }
    cout<<endl;

    cout<<2[arr];//acceptable and will give output as well + we can pass -ve indexing here too 

    // we cannot pass -ve indexing in arr_name[indexing] form but we can use -ve indexing  in in
}