// WAP to perform matrix multiplication
#include<iostream>
using namespace std;
int main(){
    int row1,col1,row2,col2;
   
    int sum=0;
    cout<<"enter number of rows of 1st array \n";
    cin>>row1;
    cout<<"enter number of col of 1st array \n";
    cin>>col1;
    cout<<"enter number of rows of 2nd array \n";
    cin>>row2;
    cout<<"enter number of col of 2nd array \n";
    cin>>col2;
     int arr[row1][col1];
    int arr2[row2][col2];
    int ans[col1][row2];
    if(col1==row2){
        cout<<"enter "<<row1*col1<<" elements of 1st array \n";
        for(int i=0;i<row1;i++){
            for(int j=0;j<col1;j++){
                cin>>arr[i][j];
            }
        }
         cout<<"enter "<<row2*col2<<" elements of 2nd array \n";
        for(int i=0;i<row2;i++){
            for(int j=0;j<col2;j++){
                cin>>arr2[i][j];
            }
        }
        cout<<"\n array 1 \n";
         for(int i=0;i<row1;i++){
            for(int j=0;j<col1;j++){
                cout<<arr[i][j]<<"\t";
             }  
                cout<<"\n";          
                }
                 cout<<"\n array 2 \n";
         for(int i=0;i<row2;i++){
            for(int j=0;j<col2;j++){
                cout<<arr2[i][j]<<"\t";
             }  
                cout<<"\n";          
                }
                

        }
        else{
        cout<<"not applicable \n";
    }
    }
    
