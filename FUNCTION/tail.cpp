// tail recursion follows LIFO
#include<iostream>
using namespace std;
void show(int a){
    if(a<1){
        return;
    }
    show(a-1);
    cout<<a<<"\t";
}
int main(){
    show(7);
}