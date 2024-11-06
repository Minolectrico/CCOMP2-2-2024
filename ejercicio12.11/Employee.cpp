#include "Employee.h"
#include <sstream>
using namespace std;

Employee::Employee(const string& first, const string& last, const string& ssn, const Date& bDate)
    : firstName(first), lastName(last), socialSecurityNumber(ssn), birthDate(bDate) {}

void Employee::setFirstName(const string& first) {
    firstName = first;
}

string Employee::getFirstName() const {
    return firstName;
}

void Employee::setLastName(const string& last) {
    lastName = last;
}

string Employee::getLastName() const {
    return lastName;
}

void Employee::setSocialSecurityNumber(const string& ssn) {
    socialSecurityNumber = ssn;
}

string Employee::getSocialSecurityNumber() const {
    return socialSecurityNumber;
}

void Employee::setBirthDate(const Date& bDate) {
    birthDate = bDate;
}

Date Employee::getBirthDate() const {
    return birthDate;
}

string Employee::toString() const {
    stringstream output;
    output << firstName << " " << lastName
           << "\nsocial security number: " << socialSecurityNumber
           << "\nbirthdate: " << birthDate.toString();  // Mostrar la fecha
    return output.str();
}
