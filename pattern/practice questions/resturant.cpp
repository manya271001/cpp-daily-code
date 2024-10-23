#include<iostream>
using namespace std;
int main(){
    int choice;
    float total_bill = 0;

    cout << "-------our starter menu-------" << "\n";
    cout << " 1.paneer tikka    120rs" << "\n";
    cout << " 2.crispy corn     200rs" << "\n";
    cout << " 3.soya chaap      180rs" << "\n";
    cout << " 4.Veg Kotha       250rs" << "\n";
    cout << "enter your choice" << "\n";
    cin >> choice;
    if(choice>0 && choice<5){
      if(choice == 1){
        total_bill = total_bill + 120;
       
      }
      else if(choice == 2){
        total_bill = total_bill + 200;
       
      }
      else if(choice == 3){
        total_bill = total_bill + 180;
         
      }
      else {
        total_bill = total_bill +250;
         
      }
    }
     else {
        cout << "enter valid choice" << "\n";
    }
      cout << "-------our main course menu-------" << "\n";
    cout << " 1.chicken Biryani    120rs" << "\n";
    cout << " 2.Veg Biryani        200rs" << "\n";
    cout << " 3.panner butter masala     180rs" << "\n";
    cout << " 4.Rajma Rice             250rs" << "\n";
    cout << "enter your choice" << "\n";
    cin >> choice;
     if(choice>0 && choice<5){
      if(choice == 1){
        total_bill = total_bill + 120;
         cout << "your totall bill is rs " << total_bill << "\n";
      }
      else if(choice == 2){
        total_bill = total_bill + 200;
         cout << "your totall bill is rs " << total_bill << "\n";
      }
      else if(choice == 3){
        total_bill = total_bill + 180;
         cout << "your totall bill is rs " << total_bill << "\n";
      }
      else {
        total_bill = total_bill +250;
         cout << "your totall bill is rs " << total_bill << "\n";
      }
    }
     else {
        cout << "enter valid choice" << "\n";
    }
 }
   