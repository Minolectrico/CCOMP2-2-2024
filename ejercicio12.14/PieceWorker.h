#ifndef PIECEWORKER_H
#define PIECEWORKER_H

#include <string>
#include "Employee.h"

class PieceWorker : public Employee {
public:
    PieceWorker(const std::string&, const std::string&, const std::string&, double = 0.0, int = 0);
    virtual ~PieceWorker() = default;

    void setWage(double); 
    double getWage() const; 

    void setPieces(int); 
    int getPieces() const; 

    virtual double earnings() const override; 
    virtual std::string toString() const override; 

private:
    double wage;  
    int pieces;   

#endif
