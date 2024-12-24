//Q.5 Write a C++ program to display table and factorial of any number using composite class.
#include<iostream>
using namespace std;
class table{
    public:
    table(int num){
        for(int i=1;i<=10;i++){
            cout<<i*num<<"\t";
        }

    }
};
class factorial{
    public:
factorial(int num){
      table t1(num);
       int k=1;
    while(num>0){
     
        k=k*num;
        num--;
    }
    cout<<"\n factorial of the number is "<<k<<"\n";
  
}

};
int main(){
    int num;
    cout<<"enter number \n";
    cin>>num;
    factorial f1(num);

    
}