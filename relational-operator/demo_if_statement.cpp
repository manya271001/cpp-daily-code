#include<iostream>//pre processor statemenr 
using namespace std;
int main(){
    cout << "enter an integer number" << "\n";
    int number = 0;
    cin >> number;
    if( number>99 && number<1000){
        cout << " It's a three digit number " << "\n";
    }
 return 0;
}