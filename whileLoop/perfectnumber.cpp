#include<iostream>
using namespace std;
int main(){
    int number , sum = 0; 
    bool flag = false;
    cout << "enter number \n";
    cin >> number;
    int variable = number - 1;
    while(variable>=1){
        if(number % variable ==0){
            sum = sum + variable;
            if(sum == number){
                flag = true;
            }
        }
        variable--;
    }
    if(flag == true){
        cout << "perfect number";
    }
    else{
        cout << "not a perfect number";
    }

}