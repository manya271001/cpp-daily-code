/*Pick the odd one out - Write a program to accept four numbers from user and print the odd one among them.

Number can be odd among others in following scenario:
if three numbers are equal, then the different one is odd one among them.
if three number are even, then the different one is odd one among them.
if three number are odd, then the different one is odd one among them.
if all are different, even or odd, then print no number is odd one among them.
*/
#include<iostream>
using namespace std;
int main(){
     int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    int number4 = 0;
    cout << "Enter first number" << "\n";
    cin >> number1;
    cout << "Enter second number" << "\n";
    cin >> number2;
    cout << "Enter third number" << "\n";
    cin >> number3;
    cout << "Enter fourth number" << "\n";
    cin >> number4;
   
    // based on eqaulity
    if(number1 == number2 && number1 == number3  && number1== number4 && number2 == number3 && number2 == number4 && number3 == number4){
    cout << "All are equal no one is odd one out " << "\n";
 }
   else if(number1==number2 && number2==number3){
        cout << "number1 = " << number1 <<" number2 = " << number2  << " and number3 = " << number3 <<  " are equal therefore number4 = " << number4 <<" is the odd one out ";
    }
    else  if(number1==number2 && number2==number4){    
        cout << "number1 = " << number1 <<" number2 = " << number2  << " and number4 = " << number4 <<  " are equal therefore number3 = " << number3 <<" is the odd one out ";
    }
    else  if(number1==number3 && number3==number4){    
        cout << "number1 = " << number1 <<" number3 = " << number3  << " and number4 = " << number4 <<  " are equal therefore number2 = " << number2 <<" is the odd one out ";
    }
    else  if(number3==number2 && number2==number4){    
        cout << "number2 = " << number2 <<" number3 = " << number3  << " and number4 = " << number4 <<  " are equal therefore number1 = " << number3 <<" is the odd one out ";
    }
    // based on even and odd
   else if(number1 % 2 == 0 && number2 % 2 == 0 && number3 % 2 == 0){
         cout << "number1 = " << number1 <<" number2 = " << number2  << " and number3 = " << number3 <<  " are even therefore number4 = " << number4 <<" is the odd one out ";
    }
    else  if(number1 % 2 == 0 && number2 % 2 == 0 && number4 % 2 == 0){
         cout << "number1 = " << number1 <<" number2 = " << number2  << " and number4 = " << number4 <<  " are even therefore number3 = " << number3 <<" is the odd one out ";
    }
     else  if(number1 % 2 == 0 && number3 % 2 == 0 && number4 % 2 == 0){
         cout << "number1 = " << number1 <<" number3 = " << number3  << " and number4 = " << number4 <<  " are even therefore number2 = " << number2 <<" is the odd one out ";
    }
    else  if(number3 % 2 == 0 && number2 % 2 == 0 && number4 % 2 == 0){
         cout << "number3 = " << number3 <<" number2 = " << number2  << " and number4 = " << number4 <<  " are even therefore number1 = " << number1 <<" is the odd one out ";
    } 
    // based on odd one among them
      else if(number1 % 2 != 0 && number2 % 2 != 0 && number3 % 2 != 0){
         cout << "number1 = " << number1 <<" number2 = " << number2  << " and number3 = " << number3 <<  " are odd therefore number4 = " << number4 <<" is the odd one out ";
    }
     else  if(number1 % 2 != 0 && number2 % 2 != 0 && number4 % 2 != 0){
         cout << "number1 = " << number1 <<" number2 = " << number2  << " and number4 = " << number4 <<  " are odd therefore number3 = " << number3 <<" is the odd one out ";
    }
   else  if(number1 % 2 != 0 && number3 % 2 != 0 && number4 % 2 != 0){
         cout << "number1 = " << number1 <<" number3 = " << number3  << " and number4 = " << number4 <<  " are odd therefore number2 = " << number2 <<" is the odd one out ";
    } 
   else  if(number3 % 2 != 0 && number2 % 2 != 0 && number4 % 2 != 0){
         cout << "number3 = " << number3 <<" number2 = " << number2  << " and number4 = " << number4 <<  " are odd therefore number1 = " << number1 <<" is the odd one out ";
    }
 
//  else if(number3 % 2 == 0 && number2 % 2 == 0 && number4 % 2 == 0 && number1 % 2 == 0){
//     cout << "All are even " << "\n";
//  }
//  else  if(number3 % 2 != 0 && number2 % 2 != 0 && number4 % 2 != 0  && number1 % 2 !=0){
//          cout << "number3 = " << number3 <<" number2 = " << number2  << " and number4 = " << number4 <<  " are odd therefore number1 = " << number1 <<" is the odd one out ";
//     }
else{
     cout << "calculation not possible " << "\n";
}
    return 0;
}