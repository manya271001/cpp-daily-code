#include<iostream>
using namespace std;
int main(){
    int payment_per_day =0;
    cout << "Enter your payment per day " << "\n";
    cin >> payment_per_day;
    // menue
    cout << "Enter the month number to calculate salary " << "\n";
    cout << "1 - for Jan" << "\n";
    cout << "2 - for Fab" << "\n";
    cout << "3 - for Mar" << "\n";
    cout << "4 - for April" << "\n";
    cout << "5 - for May" << "\n";
    cout << "6 - for June" << "\n";
    cout << "7 - for July" << "\n";
    cout << "8 - for Aug" << "\n";
    cout << "9 - for Sep" << "\n";
    cout << "10 - for Oct" << "\n";
    cout << "11 - for Nov" << "\n";
    cout << "12 - for Dec" << "\n";

     int month_number = 0;
     cin >> month_number;
     int no_of_days = 0;
     int salary = 0;

     // calculating salary using logical operators and if else ladder
     
if(month_number == 1 || month_number == 3 || month_number == 5 || month_number == 7  || month_number == 8 || month_number == 10 || month_number == 12  ){
    no_of_days = 31;
    salary = no_of_days * payment_per_day;
cout << " your total salary for this month is salary = " << salary << "rs" << "\n";
cout << "------THANKYOUU-------" << "\n";
}
else if (month_number == 4 || month_number == 6 || month_number == 9 || month_number == 11) {
    no_of_days = 30;
     salary = no_of_days * payment_per_day;
cout << " your total salary for this month is salary = " << salary << "rs" << "\n";
cout << "------THANKYOUU-------" << "\n";
}
else if (month_number == 2){
    no_of_days = 28;
    salary = no_of_days * payment_per_day;
cout << " your total salary for this month is salary = " << salary << "rs" << "\n";
cout << "------THANKYOUU-------" << "\n";
}
else {
    cout << "check the menue and enter correct month number " << "\n";
    cout << "------THANKYOUU-------" << "\n";
}

  return 0;
}