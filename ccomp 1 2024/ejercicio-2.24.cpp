#include<iostream>
using namespace std;
int main(){
    int a , b;
    cout<<"primer numero:";
    cin>>a;
    cout<<"segundo numero:";
    cin>>b;
    if(a%2==0){
        cout<<"a es un numero par"<<endl;
    }
    else{
        cout<<"a es impar"<<endl;
    }
    if(b%2==0){
        cout<<"b es un numero par"<<endl;
    }
    else{
        cout<<"b es impar"<<endl;
    }
    int x=a+b;
    if(x%2==0){
        cout<<"la suma da  numero par"<<endl;
    }
    else{
        cout<<"la suma da un numero  impar"<<endl;
    }

}