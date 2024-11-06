#include <sstream>
#include "HourlyWorker.h"

using namespace std;

HourlyWorker::HourlyWorker(const string& first, const string& last, const string& ssn, double salary, double hours)
    : Employee(first, last, ssn) {
    setSalary(salary);
    setHours(hours);
}

void HourlyWorker::setSalary(double salary) {
    if (salary < 0.0) {
        throw invalid_argument("Salary per hour must be >= 0.0");
    }
    this->salary = salary;
}

double HourlyWorker::getSalary() const {
    return salary;
}

void HourlyWorker::setHours(double hours) {
    if (hours < 0) {
        throw invalid_argument("Hours worked must be >= 0");
    }
    this->hours = hours;
}

double HourlyWorker::getHours() const {
    return hours;
}

double HourlyWorker::earnings() const {
    if (getHours() <= 40) {
        return getSalary() * getHours();  
    } else {
        return (40 * getSalary()) + ((getHours() - 40) * getSalary() * 1.5);  
    }
}

string HourlyWorker::toString() const {
    ostringstream output;
    output << fixed << setprecision(2);
    output << "hourly worker: " << Employee::toString()
        << "\nsalary per hour: " << getSalary()
        << "\nhours worked: " << getHours();
    return output.str();
}
