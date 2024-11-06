#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
using namespace std;

class Account {
public:
    Account(double saldo_ini) {
        if (saldo_ini >= 0.0) {
            saldo = saldo_ini;
        } else {
            saldo = 0.0;
            cout << "Error: Saldo inicial no válido." << endl;
        }
    }

    void credit(double monto) {
        saldo += monto;
    }

    bool debit(double monto) {
        if (monto <= saldo) {
            saldo -= monto;
            return true;  
        } else {
            cout << "Saldo insuficiente." << endl;
            return false; 
        }
    }

    double getbalance() const {
        return saldo;
    }
    virtual ~Account() {}

protected:
    double saldo;
};

#endif