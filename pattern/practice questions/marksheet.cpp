#include<iostream>
using namespace std;
int main(){
float phy,chem,maths,total,percentage;
cout<< "enter physics marks" << "\n";
cin>>phy;
cout<< "enter chemistry marks" << "\n";
cin>>chem;
cout<< "enter maths marks" << "\n";
cin>>maths;
total = phy+chem+maths;
percentage = (total/3);
if(percentage>=60 && percentage<=100){
    cout << " you scored " << percentage << " percentage you passed with 1st division"<<"\n";
}
else if(percentage <=59 && percentage <=50){
cout << " you scored " << percentage << " percentage you passed with 2nd division"<<"\n";
}
else if(percentage>=35 && percentage <=49){
    cout << " you scored " << percentage << " percentage you passed with 3rd division"<<"\n";
}
else {
    cout << "fail";
}
    return 0;
}
