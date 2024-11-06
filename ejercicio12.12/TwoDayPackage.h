#include<iostream>
#ifndef TWODAYPACKGE_H
#define TWODAYPACKGE_H
using namespace std;
#include<string>
#include"Package.h"
class TwoDayPackage:public Package{
    public:
        TwoDayPackage( string nombre , string ciu , string esta , string code , string code_desti
        , double pe , double cost ,double tari):Package(nombre,ciu,esta,code,code_desti,pe,cost),tarifa(tari){ 
        }
        double calculateCost()const override{
            return Package::calculateCost()+tarifa;
        }
    private:
        double tarifa;
};
#endif