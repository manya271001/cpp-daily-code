//Q.6 Write a C++ program to find LCM of two number using static function in a class.
#include<iostream>
using namespace std;
class ques6{
    
    public:
    static void lcm(int num1, int num2){
        int max=num1>num2?num1:num2;
    while(true){
        if(max % num1 ==0 && max % num2 ==0){
            cout<<max;
            break;
        }
        max++;
    }
        cout<<"lcm of two number is "<<max;
    }
};
int main(){
    int num1,num2;
    cout<<"enter two numbers \n";
    cin>>num1>>num2;
    ques6::lcm(num1,num2);
}