//Q.2 Write a C++  program to find sum of first and last digit of a number using function define inside a class.
#include<iostream>
using namespace std;
class ques2{
    int num;
    public:
    void firstAndlastDigit(int num){
    cout<<"last digit = "<<num%10<<"\n";
    int last=num%10;
    while(num>=10){
        num=num/10;
    }
    cout<<"first digit = "<<num%10<<"\n";
    int first = num%10;

    cout<<"sum of first and last digit is "<<first+last;

}
};
int main(){
    ques2 obj1;
    int num;
    cout<<"enter number \n";
    cin>>num;
    cout<<"num is" << num<<"\n";

    obj1.firstAndlastDigit(num);
}