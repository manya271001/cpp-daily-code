//single inheritnace
#include<iostream>
using namespace std;
class rbi{
public:
rbi(){
    cout<<"rbi memory allocated \n";
}
void show(){
    cout<<"rbi class function called\n";
}
void message(){
    cout<<"hii messagee from parent class\n";
}
~rbi(){
    cout<<"parent memory released \n";
}
};
class sbi:public rbi{
   public:
sbi(){
    cout<<"sbi memory allocated \n";
}
void show(){
    cout<<"sbi class function called\n";
} 
~sbi(){
    cout<<"child memory released \n";
}

};
int main(){
    sbi s;
    s.show();
    s.message();
    cout<<"size of s is \n"<<sizeof(s);

}