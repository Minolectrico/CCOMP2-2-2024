#include <sstream>
#include "PieceWorker.h"

using namespace std;

PieceWorker::PieceWorker(const string& first, const string& last, const string& ssn, double wage, int pieces)
    : Employee(first, last, ssn) {
    setWage(wage);
    setPieces(pieces);
}

void PieceWorker::setWage(double wage) {
    if (wage < 0.0) {
        throw invalid_argument("Wage per piece must be >= 0.0");
    }
    this->wage = wage;
}

double PieceWorker::getWage() const {
    return wage;
}

void PieceWorker::setPieces(int pieces) {
    if (pieces < 0) {
        throw invalid_argument("Number of pieces must be >= 0");
    }
    this->pieces = pieces;
}

int PieceWorker::getPieces() const {
    return pieces;
}

double PieceWorker::earnings() const {
    return getWage() * getPieces();  
}

string PieceWorker::toString() const {
    ostringstream output;
    output << fixed << setprecision(2);
    output << "piece worker: " << Employee::toString()
        << "\nwage per piece: " << getWage()
        << "\npieces produced: " << getPieces();
    return output.str();
}
