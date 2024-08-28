#include<iostream>
using namespace std;
int main(){
    int a , b ,c;
    cout<<"primer numero:";
    cin>>a;
    cout<<"segundo numero:";
    cin>>b;
    cout<<"tercer numero:";
    cin>>c;
    int x=a+b+c;
    cout<< "la suma es: "<<x<<endl;
    int y=x/3;
    cout<< "el promedio es: "<<y<<endl;
    int z=a*b*c;
    cout<<"el promedio es "<<z<<endl;
    if(a>b && a>c){
        cout<<"el mas grande es "<<a<<endl;
    }
    else if(b>a && b>c){
        cout<<"el mas grande es "<<b<<endl;
    }
    else{
        cout<<"el mas grande es "<<c<<endl;
    }

    if(a<b && a<c){
        cout<<"el mas pequeño es "<<a<<endl;
    }
    else if(b<a && b<c){
        cout<<"el mas pequeno es "<<b<<endl;
    }
    else{
        cout<<"el mas pequeno es "<<c<<endl;
    }
}