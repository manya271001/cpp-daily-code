#include<iostream>
using namespace std;
int main(){
    cout << "enter a  number " << "\n";
   
    int number1 = 0;
    cin >> number1;
    if (number1 > 0 ){
        if(number1 % 3 == 0 && number1 % 5 == 0){
            int quotint_by_3 = number1/3;
            int quotint_by_5 = number1/5;
            cout << "quotint by 3 " << quotint_by_3 << "\n";
            cout << "quotint by 5 " << quotint_by_5 << "\n";
        }
        else {
            cout << "remainder by 3 " << number1 % 3 << "\n";
             cout << "remainder by 5 " << number1 % 5<< "\n";
        }
    }
    else {
        cout << "calculation not possible " << "\n";
    }
    return 0 ;
    }
