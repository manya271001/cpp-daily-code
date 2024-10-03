/*Write a program to accept birth year of user in YYYY format (like 1983) and print the chinese zodiac of the user.

Chinese zodiac is represented by an animal sign as follows:
0: monkey
1: rooster
2: dog
3: pig
4: rat
5: ox
6: tiger
7: rabbit
8: dragon
9: snake
10: horse
11: sheep
To get the corresponding value modulo-division year by 12*/
#include<iostream>
using namespace std;
int main(){
    cout << "Enter your birth year in YYYY format " << "\n";
    int birth_year = 0;
    cin >> birth_year;
    int remainder = birth_year % 12;
    if(remainder==0){
        cout << "For your birth year " << birth_year << " your chinese zodiac sign is MONKEY " << "\n";
    }
     if(remainder==1){
        cout << "For your birth year " << birth_year << " your chinese zodiac sign is ROOSTER " << "\n";
    }
     if(remainder==2){
        cout << "For your birth year " << birth_year << " your chinese zodiac sign is DOG " << "\n";
    }
     if(remainder==3){
        cout << "For your birth year " << birth_year << " your chinese zodiac sign is PIG " << "\n";
    }
     if(remainder==4){
        cout << "For your birth year " << birth_year << " your chinese zodiac sign is RAT " << "\n";
    }
     if(remainder==5){
        cout << "For your birth year " << birth_year << " your chinese zodiac sign is OX " << "\n";
    }
     if(remainder==6){
        cout << "For your birth year " << birth_year << " your chinese zodiac sign is TIGER " << "\n";
    }
     if(remainder==7){
        cout << "For your birth year " << birth_year << " your chinese zodiac sign is RABBIT " << "\n";
    }
     if(remainder==8){
        cout << "For your birth year " << birth_year << " your chinese zodiac sign is DRAGON " << "\n";
    }
     if(remainder==9){
        cout << "For your birth year " << birth_year << " your chinese zodiac sign is SNAKE " << "\n";
    }
     if(remainder==10){
        cout << "For your birth year " << birth_year << " your chinese zodiac sign is HORSE " << "\n";
    }
     if(remainder==11){
        cout << "For your birth year " << birth_year << " your chinese zodiac sign is SHEEP " << "\n";
    }
    return 0;
}