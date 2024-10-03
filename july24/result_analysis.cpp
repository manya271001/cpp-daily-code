#include<iostream>
using namespace std;
int main(){
     cout << " enter marks of math " << "\n";
    int math_marks = 0;
    cin >> math_marks;
    cout << " enter marks of english " << "\n";
    int english_marks = 0;
    cin >> english_marks;
     cout << " enter marks of hindi " << "\n";
     int hindi_marks = 0;
     cin >> hindi_marks;
     cout << " enter marks of science " << "\n";
     int science_marks = 0;
     cin >> science_marks;
     cout << " enter marks of computer " << "\n";
     int computer_marks = 0;
     cin >> computer_marks;
     int total_marks = math_marks + english_marks + hindi_marks + computer_marks + science_marks;
     float percentage = total_marks/5.0;
     cout << "total marks = "<< total_marks << "\n";
     cout << "percetage = " << percentage << "% "<< "\n";
int count=0;
 return 0;
}