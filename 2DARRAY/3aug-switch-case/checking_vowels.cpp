/*accepting char from user and checking if they are vowels usign if else */
#include<iostream>
using namespace std;
int main(){
    cout << "Enter a character literal " << "\n";
    char user_input = 0;
    cin >> user_input;
    cout << "you entered " << user_input <<  "\n";
    if(user_input>=65 && user_input<=90){
        if(user_input == 65 || user_input == 69 || user_input == 73 || user_input == 79 || user_input == 85){
            cout << "you entered a vowel" << "\n";
        }
        else{
            cout << "you entered a consonant" << "\n";
        }
    }
    else if(user_input >= 97 && user_input <= 122 ){
        if(user_input == 97 || user_input == 101 || user_input == 105 || user_input == 111 || user_input == 117){
             cout << "you entered a vowel" << "\n";
        }
         else{
            cout << "you entered a consonant" << "\n";
        }
    }
    else {
        cout << "invalid choice " << "\n";
    }    
    return 0;

    }

