#include <iostream>
#include <vector>

int main() {
    // Crear un vector con algunos elementos  vector.push_back(value);
    std::vector<int> vec = {10, 20, 30, 40, 50};

    // Mostrar el vector original
    std::cout << "Vector original: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Eliminar el último elemento
    if (!vec.empty()) {
        vec.pop_back();
    }

    // Eliminar el primer elemento
    if (!vec.empty()) {
        vec.erase(vec.begin());
    }

    // Mostrar el vector después de las eliminaciones
    std::cout << "Vector después de eliminar el primer y último elemento: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}