#include<iostream>
using namespace std;
int main(){
    int number , first , last;
    cout<<"enter number \n";
    cin>>number;
    last = number%10;
    cout<<"last digit "<<last<<"\n";
    for(number;number>=10;number=number/10){
    }
    first = number;
    cout<<"first digit "<<first <<"\n";
    cout << "sum of first and last digit " << last + first;
 
}