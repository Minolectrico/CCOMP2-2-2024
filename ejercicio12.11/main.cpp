#include <iostream>
#include <iomanip>
#include <vector>
#include <ctime>  // Para obtener la fecha actual
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

using namespace std;

void virtualViaPointer(const Employee* const, int);
void virtualViaReference(const Employee&, int);

int main() {
    cout << fixed << setprecision(2); 

    // Crear fecha de nacimiento para cada empleado
    Date birthDate1(4, 15, 1985);  // Ejemplo: 15 de abril de 1985
    Date birthDate2(12, 25, 1990); // Ejemplo: 25 de diciembre de 1990
    Date birthDate3(6, 1, 1975);   // Ejemplo: 1 de junio de 1975

    // Crear empleados con sus fechas de nacimiento
    SalariedEmployee salariedEmployee("John", "Smith", "111-11-1111", 800, birthDate1);
    CommissionEmployee commissionEmployee("Sue", "Jones", "333-33-3333", 10000, .06, birthDate2);
    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob", "Lewis", "444-44-4444", 5000, .04, 300, birthDate3);

    // Almacenar empleados en un vector de punteros
    vector<Employee*> employees {&salariedEmployee, &commissionEmployee, &basePlusCommissionEmployee};

    // Obtener el mes actual
    time_t t = time(0);
    tm* now = localtime(&t);
    int currentMonth = now->tm_mon + 1; // Los meses empiezan desde 0 en tm

    // Procesar la nómina y agregar el bono si es el mes del cumpleaños
    for (const Employee* ptr : employees) {
        virtualViaPointer(ptr, currentMonth);
    }

    for (const Employee* ptr : employees) {
        virtualViaReference(*ptr, currentMonth);
    }

    return 0;
}

// Función para procesar nómina con puntero
void virtualViaPointer(const Employee* const baseClassPtr, int currentMonth) {
    double earnings = baseClassPtr->earnings();
    
    // Comprobar si es el mes del cumpleaños del empleado
    if (baseClassPtr->getBirthDate().getMonth() == currentMonth) {
        earnings += 100;  // Agregar bono de $100 si es el mes de su cumpleaños
    }

    cout << baseClassPtr->toString()
         << "\nearned: $ " << earnings << "\n\n";
}

// Función para procesar nómina con referencia
void virtualViaReference(const Employee& baseClassRef, int currentMonth) {
    double earnings = baseClassRef.earnings();
    
    // Comprobar si es el mes del cumpleaños del empleado
    if (baseClassRef.getBirthDate().getMonth() == currentMonth) {
        earnings += 100;  // Agregar bono de $100 si es el mes de su cumpleaños
    }

    cout << baseClassRef.toString()
         << "\nearned: $ " << earnings << "\n\n";
}
