// arr[table][row][coloumn]; table is no of times [row][col] matrix will be made
#include<iostream>
using namespace std;
int main(){
    int arr[2][2][3]={1,2,3,4,33,66,77,8,34,9,22,18};
    for(int t=0 ;t<2;t++){
        for(int r=0;r<2;r++){
            for(int c=0;c<3;c++){
                cout<<arr[t][r][c]<<"\t";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
}