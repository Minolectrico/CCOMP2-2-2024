#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"ingrese un numero de 4 dijitos ";
    cin>>a;
    int x=a%10;
    int b=(a%100)/10;
    int c=(a%1000)/100;
    int y=a/1000;
    cout<<x<<" "<<b<<" "<<c<<" "<<y;

}