#include<iostream>
using namespace std;
int main(){
    cout << "enter the number of game playing " << "\n";
    int game_number;
    cin >> game_number;
    if (game_number == 99){
        cout << "congratulation";
    }
    else {
        cout << "this is your " << game_number + 1 <<"th game " <<"\n";

    }
}