// wap to find minimum value of 2d array
#include<iostream>
using namespace std;
int main(){
    int row=0,coloumn=0;
    int Minimum=INT32_MAX;
    cout<<"enrer number of rows "<<"\n";
    cin>>row;
    cout<<"enter number of coloumn "<<"\n";
    cin>>coloumn; 
    int arr[row][coloumn];
    cout<<"enter array element"<<"\n";
    for(int r =0;r<row;r++){
        for(int c=0;c<coloumn;c++){
            cin>>arr[r][c];
        }
    }
        for(int r =0;r<row;r++){
        for(int c=0;c<coloumn;c++){
            
            cout<<arr[r][c]<<"\t";
            if(Minimum>arr[r][c]){
                Minimum=arr[r][c];
            }
            
        }
        cout<<"\n";
    }
    cout<<"minimum value of array "<<Minimum<<"\n";
    }