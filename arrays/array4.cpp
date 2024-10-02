#include <iostream>
using namespace std;

void intercambiarArreglos(int arr1[], int arr2[], int tam) {
    for (int i = 0; i < tam; i++) {
        // Intercambiar elementos
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

int main() {
    const int TAM = 5;
    int arreglo1[TAM] = {1, 2, 3, 4, 5};
    int arreglo2[TAM] = {6, 7, 8, 9, 10};

    cout << "Arreglo 1 antes del intercambio: ";
    for (int i = 0; i < TAM; i++) {
        cout << arreglo1[i] << " ";
    }
    cout << endl;

    cout << "Arreglo 2 antes del intercambio: ";
    for (int i = 0; i < TAM; i++) {
        cout << arreglo2[i] << " ";
    }
    cout << endl;

    intercambiarArreglos(arreglo1, arreglo2, TAM);

    cout << "Arreglo 1 después del intercambio: ";
    for (int i = 0; i < TAM; i++) {
        cout << arreglo1[i] << " ";
    }
    cout << endl;

    cout << "Arreglo 2 después del intercambio: ";
    for (int i = 0; i < TAM; i++) {
        cout << arreglo2[i] << " ";
    }
    cout << endl;

    return 0;
}