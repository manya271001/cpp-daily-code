/*transpose matrix: transpose rows into coloumns and vice versa but only at one condition that it has to be a square matrix meaning number of rows and coloumn should be same */
// we are only displayig this non square matrix and not making change in the originaln array

#include<iostream>
using namespace std;
int main(){
int arr[2][3];
cout<<"enter 6 element "<<"\n";
for(int r=0;r<2;r++){
    for(int c=0;c<3;c++){
        cin>>arr[r][c];
    }
}
cout<<"your matrix "<<"\n";
for(int r=0;r<2;r++){
    for(int c=0;c<3;c++){
        cout<<arr[r][c]<<"\t";
    }
    cout<<"\n";
}
cout<<"after  transpose "<<"\n";
for(int c=0;c<3;c++){
    for(int r=0;r<2;r++){
        cout<<arr[r][c]<<"\t";
    }
    cout<<"\n";
}

}