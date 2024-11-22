#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter size of row "<<"\n";
    cin>>r;
    cout<<"enter size of  coloumn "<<"\n";
    cin>>c;
    if(r==c){
        int arr[r][c];
        cout<<"enter "<<r*c<<" values \n";
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>arr[i][j];
            }
        }
        cout<<"\n original array before transpose \n";
           for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<arr[i][j]<<"\t";
            }
            cout<<"\n";
        }
        // replacing elements using temp
         for(int i=0;i<r;i++){
            for(int j=i+1;j<c;j++){
                int temp;
                temp = arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }}
            cout<<"\n transpose matrix \n";
                for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<arr[i][j]<<"\t";
            }
            cout<<"\n";
        }

    
    }
    else{
        cout<<"not a square matrix \n";
    }
}