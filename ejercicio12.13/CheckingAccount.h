#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include "Account.h"
using namespace std;

class CheckingAccount : public Account {
public:
    CheckingAccount(double saldo_ini, double tari) : Account(saldo_ini), tarifa(tari) {}

    void debitcheck(double monto) {
        if (Account::debit(monto)) {  
            saldo -= tarifa;          
            cout << "Se dedujo la tarifa de la cuenta, nueva tarifa: " << tarifa << endl;
        } else {
            cout << "El débito no se realizó, no se deduce la tarifa." << endl;
        }
    }

    void creditcheck(double monto) {
        Account::credit(monto);  
        saldo -= tarifa;         
        cout << "Se dedujo la tarifa de la cuenta, nueva tarifa: " << tarifa << endl;
    }

private:
    double tarifa;
};

#endif