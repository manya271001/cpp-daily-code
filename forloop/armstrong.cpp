#include<iostream>
using namespace std;
int main(){
    int number,sum=0;
    cout<< "enter number \n";
    cin>>number;
   int  originalNumber=number;
    if(number>99 && number<1000){
        for(number;number>0;number=number/10){
            int rem = number%10;
            if(rem>=0){
                rem = rem*rem*rem;
                sum = sum+rem;
            }
        }
    }
   sum==originalNumber?cout<<"armstrong number":cout<<"not an armstrong number";
}