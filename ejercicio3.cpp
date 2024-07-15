/* 
Autor: Nayeli Cruz
Fecha:12/7/2024
Orde: 3) Diseñe la función que suma las posiciones(índice) pares del vector y el resultado final lo multiplica 
por 100. Las posiciones impares del vector primero las multiplica por 2 y luego las suma. La función debe 
devolver la división de las 2 sumatorias realizadas previamente.
*/
#include <iostream>
#include <vector>
using namespace std;

double calcularDivisionSumatorias(const vector<int>& vec) {
    int sumaPares = 0;
    int sumaImpares = 0;

    for (size_t i = 0; i < vec.size(); ++i) {
        if (i % 2 == 0) {
            // Índices pares
            sumaPares += vec[i];
        } else {
            // Índices impares
            sumaImpares += 2 * vec[i];
        }
    }

    sumaPares *= 100;

    if (sumaImpares == 0) {
        cout << "La suma de los elementos en las posiciones impares es 0, no se puede dividir por cero." << endl;
        return 0;
    }

    double resultado = static_cast<double>(sumaPares) / sumaImpares;
    return resultado;
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6}; // Ejemplo de vector

    double resultado = calcularDivisionSumatorias(vec);
    if (resultado != 0) {
        cout << "El resultado de la división de las dos sumatorias es: " << resultado << endl;
    }

    return 0;
}
