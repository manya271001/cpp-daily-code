//Q.1 Write a C++ program to find first and last digit of a number using function define outside of class.
#include<iostream>
using namespace std;
class ques1{
    int num;
    public:
    void firstAndlastDigit(int num);
};
void ques1::firstAndlastDigit(int num){
    cout<<"last digit = "<<num%10<<"\n";
    while(num>=10){
        num=num/10;
    }
    cout<<"first digit = "<<num%10<<"\n";

}
int main(){
    ques1 obj1;
    int num;
    cout<<"enter number \n";
    cin>>num;
    cout<<"num is" << num<<"\n";

    obj1.firstAndlastDigit(num);
}