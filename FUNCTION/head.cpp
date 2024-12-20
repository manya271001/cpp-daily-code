// Head recursion follows FIFO
#include<iostream>
using namespace std;
void show(int a){
    if(a<1){
        return;
    }
      cout<<a<<"\t";
    show(a-1);

}
int main(){
    show(7);
}