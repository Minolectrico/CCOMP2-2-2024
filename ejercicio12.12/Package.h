#include<iostream>
#ifndef PACKAGE_H
#define PACKAGE_H
using namespace std;
#include<string>

class Package{
    public:
        Package( string nombre , string ciu , string esta , string code , string code_desti, double pe , double cost ): name(nombre),ciudad(ciu),
        estado(esta),codigo(code),codigo_del_destinatario(code_desti){
            peso=( pe > 0) ? pe : 0;
            costo=(cost >0) ? cost :0;
        }

        void setnombre(string nombre){
            name=nombre;
        }
        string getnombre()const{
            return name;
        }

        void setciu(string ciu){
            ciudad=ciu;
        }
        string getciu()const{
            return ciudad;
        }

        void setesta(string esta){
            estado=esta;
        }
        string getesta()const{
            return estado;
        }

        void setcode(string code){
            codigo=code;
        }
        string getcode()const{
            return codigo;
        }

        void setcode_desti(string code_desti){
            codigo_del_destinatario=code_desti;
        }
        string getcode_desti()const{
            return codigo_del_destinatario;
        }

        virtual double calculateCost()const{
            return peso*costo;
        }
        virtual ~Package() {}

    protected:
        string name;
        string ciudad;
        string estado;
        string codigo;
        string codigo_del_destinatario;
        double peso;
        double costo;
};
#endif



