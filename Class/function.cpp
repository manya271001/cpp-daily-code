// 2 ways to make member functions

#include<iostream>
using namespace std;
class top1{

    int a=10,b=100;
     public: int sum(){ // function declared and define inside the class
        return a+b;
    }
};

class top2{
    int a=10,b=100;
    public:int sum(); // function declared inside the class and will be defined outside the class
};

int top2::sum(){
return a+b;
}



int main()
{
    top1 t1;
    cout<<"from class one sum = \t";
    cout<<t1.sum();
    cout<<"\n";
    top2 t2;
    cout<<"from class two sum = \t";
    cout<<t2.sum();

}
