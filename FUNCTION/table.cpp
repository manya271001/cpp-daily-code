//wap to print the table of anynumber using function
#include<iostream>
using namespace std;
void table(int a){
   for(int i=1;i<=10;i++){
    cout<<a*i<<"\t";
   }
}
int main(){
int a;
cout<<"enter number "<<"\n";
cin>>a;
cout<<"\n";
table(a);
}