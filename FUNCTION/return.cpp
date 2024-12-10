#include<iostream>
using namespace std;
int roi(){
    // return with no parameter
    return 20;
}
int balance(int pwd){
    //return with parameter
    if(pwd==201){
        return 10000;
    }
    else{
        return -1;
    }
}
int main(){
  cout<<balance(201);
  int val=roi();
  cout<<val;


}