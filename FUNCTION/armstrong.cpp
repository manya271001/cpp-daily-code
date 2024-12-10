#include<iostream>
using namespace std;
void Armstrong(int num){
    int original=num;
    int count=0;
    while(num>0){
        num=num/10;
        count++;
    }
    num=original;
    int sum=0;
    while(num>0){
    int rem=num%10;
    int power=1;
    for(int i=0;i<count;i++){
        power=power*rem;
    }
    sum=sum+power;
    num=num/10;
    }
    if(sum==original){
        cout<<" yes Armstrong number \n";
    }
    else{
        cout<<" not Armstrong number \n";
    }
}
int main(){
 int num;
    cout<<"enter number \n";
    cin>>num;
    Armstrong(num);
}