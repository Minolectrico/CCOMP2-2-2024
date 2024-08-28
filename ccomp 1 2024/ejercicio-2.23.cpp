#include<iostream>
using namespace std;
int main(){
    int a=5,b=6,c=1,d=0,e=9;
    if(a>b && a>c && a>d && a>e){
        cout<<"el mas grande es "<<a<<endl;
    }
    else if(b>a && b>c && b>d && b>e){
        cout<<"el mas grande es "<<b<<endl;
    }
    else if(c>a && c>b && c>d && c>e){
        cout<<"el mas grande es "<<c<<endl;
    }
    else if(d>a && d>c && d>b && d>e){
        cout<<"el mas grande es "<<d<<endl;
    }
    else{
        cout<<"el mas grande es "<<e<<endl;
    }

    if(a<b && a<c && a<d && a<e){
        cout<<"el mas pequeño es "<<a<<endl;
    }
    else if(b<a && b<c && b<d && b<e){
        cout<<"el mas pequeno es "<<b<<endl;
    }
    else if(c<b && c<a && c<d && c<e){
        cout<<"el mas pequeño es "<<c<<endl;
    }
    else if(d<a && d<c && d<b && d<e){
        cout<<"el mas pequeno es "<<d<<endl;
    }
    else{
        cout<<"el mas pequeno es "<<e<<endl;
    }
}