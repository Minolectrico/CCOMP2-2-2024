#include<iostream>
using namespace std;
int main(){
    int a , b ;
    cout<<"primer numero:"<<endl;
    cin>>a;
    cout<<"segundo numero:"<<endl;
    cin>>b;
    if(a<b){
        cout<<"El numero "<<b<<" es mas grande que "<<a<<endl;
    }
    else if(a==b){
        cout<<"son numeros iguales"<<endl;
    }
    else{
        cout<<"El numero "<<a<<" es mas grande que "<<b<<endl;
    }
}