#include <iostream>
#include <vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"

using namespace std;

int main() {
    vector<Account*> cuentas;

    SavingsAccount* savings1 = new SavingsAccount(1000.0, 5.0);  
    CheckingAccount* checking1 = new CheckingAccount(500.0, 1.0);  

    cuentas.push_back(savings1);
    cuentas.push_back(checking1);

    for (Account* cuenta : cuentas) {
        double montoRetiro, montoDeposito;

        cout << "\nProcesando cuenta con saldo: " << cuenta->getbalance() << endl;

        cout << "Ingrese monto a retirar: ";
        cin >> montoRetiro;
        cuenta->debit(montoRetiro);  

        cout << "Ingrese monto a depositar: ";
        cin >> montoDeposito;
        cuenta->credit(montoDeposito);  

        SavingsAccount* savings = dynamic_cast<SavingsAccount*>(cuenta);
        if (savings) {
            double interes = savings->calculateInterest();
            cout << "Interés calculado: " << interes << endl;
            savings->creditsavin(interes);  
        }

        CheckingAccount* checking = dynamic_cast<CheckingAccount*>(cuenta);
        if (checking) {
            checking->debitcheck(montoRetiro);  
            checking->creditcheck(montoDeposito);  
        }

        cout << "Saldo actualizado: " << cuenta->getbalance() << endl;
    }

   
    for (Account* cuenta : cuentas) {
        delete cuenta;
    }

    return 0;
}