#include<iostream>
#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
#include<vector>

int main() {
    vector<Package*>packages;
    packages.push_back(new Package("Mila","Cuzco","viuda","12345","99911",10,0.2));
    packages.push_back(new TwoDayPackage("Adrian","Arequipa","soltero","62701","90001",10,0.5,0.2));
    packages.push_back(new OvernightPackage("Aron","Lima","Casado","34561","90111",5,0.7,0.25));
    double totalShippingCost = 0.0;

     for (const auto& package : packages) {
        
        cout << "Remitente: " << package->getnombre() << endl;
        cout << package->getciu() << ", " << package->getesta() << ", "
             << package->getcode() << " " << package->getcode_desti() << endl;
             
        double cost = package->calculateCost();
        cout << "Costo de envio: $" << cost << endl;
        totalShippingCost += cost;
    }
    cout << "Costo total de envio de todos los paquetes: $" << totalShippingCost << endl;
    for (auto package : packages) {
        delete package;  
    }
    return 0;
}