#include<iostream>
using namespace std;
int main(){
    int currency;
    cout << "enter ammount \n";
    cin >> currency;
    if((currency/500)>=1){
        int result = currency/500;
        currency = currency - (result*500);
        cout << result <<" notes of 500" << "\n";
        if(currency/200>=1){
            int result = currency/200;
            currency = currency - (result*200);
              cout << result <<" notes of 200" << "\n";
              
            if(currency/100>=1){
                int result = currency/100;
            currency = currency - (result*100);
              cout << result <<" notes of 100" << "\n"; 
            }
        }
    }


}


