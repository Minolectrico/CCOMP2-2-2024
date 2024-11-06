#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "Account.h"
using namespace std;

class SavingsAccount : public Account {
public:
    SavingsAccount(double saldo_ini, double inte) : Account(saldo_ini), interes(inte) {}

    double calculateInterest() const {
        return saldo * (interes / 100);  
    }

    void creditsavin(double monto) {
        Account::credit(monto);  
    }

private:
    double interes;
};

#endif