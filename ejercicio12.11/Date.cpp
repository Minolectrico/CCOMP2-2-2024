#include "Date.h"
#include <sstream>
#include <iomanip>

using namespace std;

Date::Date(int m, int d, int y) : month(m), day(d), year(y) {}

int Date::getMonth() const {
    return month;
}

int Date::getDay() const {
    return day;
}

int Date::getYear() const {
    return year;
}

string Date::toString() const {
    stringstream output;
    output << setfill('0') << setw(2) << month << "/"
           << setw(2) << day << "/"
           << year;
    return output.str();
}
