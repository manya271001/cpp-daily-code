// wap to display sum of 2d array
#include<iostream>
using namespace std;
int main(){
    int row=0,coloumn=0;
    int sum=0;
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
            sum=sum+arr[r][c];
            cout<<arr[r][c]<<"\t";
            
        }
        cout<<"\n";
    }
    cout<<"sum of 2D array is "<<sum<<"\n";
    }