/*accept 3 numbers and find the greatest using nesting*/
#include<iostream>
using namespace std;
int main(){
cout << "enter three integers " << "\n";
int number1 = 0 ,  number2 = 0, number3 = 0;
cin >> number1 >> number2 >> number3;
bool number1_and_number2_are_equal = number1 == number2;
bool number1_and_number3_are_equal = number1 == number3;
bool number2_and_number3_are_equal = number2 == number3;
if(number1 != number2 && number1 != number3 && number2 != number3){
if (number1>number2){
    if(number1>number3){
        cout << "number 1 is greatest" << "\n";
    }
    else{
        cout << "number 3 is greatest" << "\n";
    }
}
else{
    if(number2>number3){
        cout << "number 2 is greatest" << "\n";
    }
    else {
        cout << "number 3 is greatest" << "\n";
    }
}
}
else if(number1 == number2 && number1 == number3 && number2 == number3){
    cout << "All numbers are equal calculation not possible " << "\n";
}
else if(number1_and_number2_are_equal){
    if(number1 > number3){
        cout << "number1 and number2 are equal and greater than number3" << "\n";
    } 
    else {
    cout << "number1 and number2 are equal and are smaller than number3" << "\n";
 cout << "number 3 is greatest" << "\n";
    }
}

else if( number1_and_number3_are_equal){
 if(number1 > number2){
    cout << "number1 and number3 are equal and greater than number2" << "\n";
 }
 else {
     cout << "number1 and number3 are equal and are smaller than number2" << "\n";
 cout << "number 2 is greatest" << "\n";
}
 }

 
else if(number2_and_number3_are_equal ){
    if(number2 > number1){
    cout << "number2 and number3 are equal and greater than number1" << "\n";
    }
    else {
    cout << "number2 and number3 are equal and are smaller than number1" << "\n";
 cout << "number 1 is greatest" << "\n";
}
}
return 0;
}