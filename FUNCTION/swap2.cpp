// call by reference example
#include<iostream>
using namespace std;
void swaps(int &a,int &b){
    int c;
    c=a;
    a=b;
    b=c;
  
}
int main(){
    int a,b;
    cout<<"enter two numbers \n";
    cin>>a>>b;
    swaps(a,b);
    //for call by reference we print the output in the main function 
      cout<<"after swap a = "<<a<<"\n b = "<<b<<"\n";

}