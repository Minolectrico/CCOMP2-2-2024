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
    if(b%a==0 && b%c==0){
        cout << a << " y " << c << " son factores de " << b << endl;
    }
    else{
        cout << a << " y " << c << " no son factores de " << b << endl;
    }
}