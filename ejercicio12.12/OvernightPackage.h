#include<iostream>
#ifndef OVERNIGHTPACKGE_H
#define OVERNIGHTPACKGE_H
using namespace std;
#include<string>
#include"Package.h"
class OvernightPackage:public Package{
    public:
        OvernightPackage( string nombre , string ciu , string esta , string code , string code_desti
        , double pe , double cost ,double tariex):Package(nombre,ciu,esta,code,code_desti,pe,cost),tarifaextra(tariex){
        }
        double calculateCost() const override {
            return peso*(costo+tarifaextra);
        }
    private:
        double tarifaextra;
};
#endif