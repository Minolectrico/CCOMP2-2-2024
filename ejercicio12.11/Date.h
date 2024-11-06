#ifndef DATE_H
#define DATE_H

#include <string>
#include <iomanip>
#include <sstream>

class Date {
public:
    Date(int m = 1, int d = 1, int y = 2000); // Constructor
    std::string toString() const;  // Representación en cadena

    int getMonth() const; // Obtener mes
    int getDay() const;   // Obtener día
    int getYear() const;  // Obtener año

private:
    int month;
    int day;
    int year;
};

#endif
