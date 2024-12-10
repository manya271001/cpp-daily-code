//Check prime, Armstrong, or perfect number
#include<iostream>
using namespace std;
void prime(int num){
    int k;
    k=num-1;
    bool flag=true;
    while(k>1){
        if(num%k==0){
            flag=false;
            break;
        }
        k--;
    }
    if(flag==false){
        cout<<"NOT PRIME";
    }
    else{
        cout<<"PRIME";
    }
}
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

void perfectnumber(int num){
    int original = num;
    int sum=0;
    int k=num-1;
    while(k>0){
        if(num%k==0){
            sum=sum+k;
        }
        k--;
    }
    if(sum==original)
    cout<<"YES perfect number";
    else{
         cout<<"NOT a perfect number";
    }

}
int main(){
    int num;
    cout<<"enter number \n";
    cin>>num;
    prime(num);
    Armstrong(num);
    perfectnumber(num);
}