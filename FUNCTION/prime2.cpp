//Print all perfect numbers in an interval
#include<iostream>
using namespace std;
void prime(int a,int b){
if(a>b){

 for(int num=b;num<=a;num++){
    int k=1;
     int sum=0;
     int original = num;
    while(k<num){
        if(num%k==0){
            sum=sum+k;
        }
        k++;
    }
    if(sum==original){
        cout<<num<<"\t";
    }
 }

}
else if(b>a){
    for(int num=a;num<=b;num++){
    int k=1;
     int sum=0;
     int original = num;
    while(k<num){
        if(num%k==0){
            sum=sum+k;
        }
        k++;
    }
    if(sum==original){
        cout<<num<<"\t";
    }
 }
}

}

int main(){
    int a,b;
    cout<<"enter interval point \n";
    cin>>a>>b;
    prime(a,b);

}
