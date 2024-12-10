//Diameter, circumference, area of a circle
#include<iostream>
using namespace std;
void dia(float r){
cout<<" diameter = "<<r*2;
}
void circumference(float r){
    cout<<" circumference = "<<2*3.14*r;
}
void area(float r){
    cout<<" area = "<<3.14*r*r;
}
int main(){
    float radius;
    cout<<"enter radius \n";
    cin>>radius;
    dia(radius);
    cout<<"\n";
    circumference(radius);
    cout<<"\n";
    area(radius);

}