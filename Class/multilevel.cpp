//multilevel
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

class customer:public sbi{
    public:
    void account(){
        cout<<"customer class function aclled \n";
    }
};
int main(){
   customer c;
   c.account();
   c.message();
   c.show();

}