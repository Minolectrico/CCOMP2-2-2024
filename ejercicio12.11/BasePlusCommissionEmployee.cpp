#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "BasePlusCommissionEmployee.h" // BasePlusCommissionEmployee class definition
using namespace std;

// Constructor de BasePlusCommissionEmployee
BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string& first,
    const string& last, const string& ssn, double sales, double rate, double salary)
    : CommissionEmployee(first, last, ssn, sales, rate) { // Llamada al constructor de CommissionEmployee
    setBaseSalary(salary);
}

// Establecer salario base
void BasePlusCommissionEmployee::setBaseSalary(double salary) {
    if (salary < 0.0) {
        throw invalid_argument("Salary must be >= 0.0");
    }
    baseSalary = salary;
}

// Obtener salario base
double BasePlusCommissionEmployee::getBaseSalary() const {
    return baseSalary;
}

// Calcular las ganancias
double BasePlusCommissionEmployee::earnings() const {
    return getBaseSalary() + CommissionEmployee::earnings();
}

// Obtener información en formato string
string BasePlusCommissionEmployee::toString() const {
    ostringstream output;
    output << fixed << setprecision(2); // Dos dígitos de precisión
    output << "base salary: " << CommissionEmployee::toString()
           << "\nbase salary: " << getBaseSalary();
    return output.str();
}
