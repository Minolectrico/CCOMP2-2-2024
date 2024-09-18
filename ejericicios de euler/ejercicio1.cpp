#include <iostream>
using namespace std;

int main() {
    const int LIMITE = 4000000; 
    int v;
    int pr = 0;  
    int ps = 1;  
    int total = 0;
    for (int x = 1; ps <= LIMITE; x++) {
        v = pr + ps;
        pr = ps;
        ps = v;
        cout << v << endl;
        if (v % 2 == 0) {
            total += v;
        }
    }
    cout << "La suma de los pares es: " << total << endl;
}