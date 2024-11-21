#include <iostream>
#include <stdexcept>
using namespace std;

// Clase Point
class Point {
private:
    int x, y; // Variables miembro

public:
    // Constructor por defecto
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    // Getters y setters
    int getX() const { return x; }
    int getY() const { return y; }
    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }

    // Mostrar el punto
    void print() const { cout << "(" << x << ", " << y << ")"; }
};

// Clase PointArray
class PointArray {
private:
    Point* points; // Puntero al arreglo de Points
    int size;      // Tamaño del arreglo

public:
    // Constructor
    PointArray(int size) : size(size) {
        points = new Point[size]; // Crear el arreglo dinámico
    }

    // Constructor por copia
    PointArray(const PointArray& other) {
        size = other.size;
        points = new Point[size];
        for (int i = 0; i < size; i++) {
            points[i] = other.points[i];
        }
    }

    // Destructor
    ~PointArray() { delete[] points; }

    // Sobrecarga del operador =
    PointArray& operator=(const PointArray& other) {
        if (this != &other) {
            delete[] points;
            size = other.size;
            points = new Point[size];
            for (int i = 0; i < size; i++) {
                points[i] = other.points[i];
            }
        }
        return *this;
    }

    // Sobrecarga del operador ==
    bool operator==(const PointArray& other) const {
        if (size != other.size) return false; // Comparar tamaños
        for (int i = 0; i < size; i++) {
            if (points[i].getX() != other.points[i].getX() || 
                points[i].getY() != other.points[i].getY()) {
                return false; // Si algún punto no coincide
            }
        }
        return true; // Si todos los puntos coinciden
    }

    // Sobrecarga del operador !=
    bool operator!=(const PointArray& other) const {
        return !(*this == other);
    }

    // Sobrecarga del operador []
    Point& operator[](int index) {
        if (index < 0 || index >= size) {
            throw out_of_range("Índice fuera de rango");
        }
        return points[index];
    }

    // Sobrecarga del operador [] para lectura
    const Point& operator[](int index) const {
        if (index < 0 || index >= size) {
            throw out_of_range("Índice fuera de rango");
        }
        return points[index];
    }

    // Función para imprimir el arreglo
    void print() const {
        cout << "[";
        for (int i = 0; i < size; i++) {
            points[i].print();
            if (i < size - 1) cout << ", ";
        }
        cout << "]" << endl;
    }
};

// Función principal para pruebas
int main() {
    // Crear dos arreglos de puntos con tamaño fijo
    PointArray arr1(2), arr2(2);

    // Inicializar valores del arreglo 1
    arr1[0] = Point(1, 2);
    arr1[1] = Point(3, 4);

    // Inicializar valores del arreglo 2
    arr2[0] = Point(1, 2);
    arr2[1] = Point(3, 4);

    // Imprimir ambos arreglos
    cout << "Arreglo 1: ";
    arr1.print();
    cout << "Arreglo 2: ";
    arr2.print();

    // Comparar arreglos
    cout << "¿Arr1 == Arr2? " << (arr1 == arr2 ? "Sí" : "No") << endl;

    // Modificar un elemento en arr2
    arr2[1] = Point(5, 6);
    cout << "Después de modificar Arr2: ";
    arr2.print();

    // Volver a comparar
    cout << "¿Arr1 == Arr2? " << (arr1 == arr2 ? "Sí" : "No") << endl;

    return 0;
}