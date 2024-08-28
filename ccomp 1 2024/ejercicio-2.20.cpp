#include<iostream>
using namespace std;
int main(){
    int radio;
    float pi =3.14159;
    cout<<"cuanto es el radio: ";
    cin>>radio;
    int diametro=radio*2;
    cout<<"el diametro es "<<diametro<<endl;
    float circunferencia=diametro*pi;
    cout<<"la circunferencia es "<<circunferencia<<endl;
    float area=pi*(radio*radio);
    cout<<"el area es "<<area<<endl;

}