/* 
Autor: Nayeli Cruz
Fecha:12/7/2024
Orde:2) Diseñe la función que multiplica todos los elementos del vector por un número que pasa por parámetro.
*/
#include <iostream>
#include <vector>

using namespace std;

// Función para multiplicar todos los elementos de un vector por un número
void multiplicarVector(vector<int>& vec, int num) {
    for (int& elemento : vec) {
        elemento *= num;
    }
}

int main() {
    // Crear un vector con algunos números
    vector<int> miVector = {1, 2, 3, 4, 5};
    int multiplicador = 3;

    // Mostrar el vector original
    cout << "Vector original: ";
    for (int elemento : miVector) {
        cout << elemento << " ";
    }
    cout << endl;

    // Llamar a la función para multiplicar el vector
    multiplicarVector(miVector, multiplicador);

    // Mostrar el vector después de la multiplicación
    cout << "Vector después de la multiplicación: ";
    for (int elemento : miVector) {
        cout << elemento << " ";
    }
    cout << endl;

    return 0;
}
