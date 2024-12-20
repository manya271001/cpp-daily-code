#include<iostream>
using namespace std;
void show(int a,int i){
    if(i>10){
        return;
    }
    cout<<a*i<<"\t";

    show(a,i=i+1);

}
int main(){
    int num; int i=1;
    cout<<"enter number \n";
    cin>>num;
    show(num,i);

}