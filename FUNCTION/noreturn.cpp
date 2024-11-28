/* no return without parameter 
syntax : void function_name(){
    statement/code
}
read only function 
*/
#include<iostream>
#include<string.h>
using namespace std;
void fun(){
    cout<<"hello";
}
int main(){
for (int i=0;i<10;i++){
    fun(); //explicit calling
    cout<<"\n";
}
}
