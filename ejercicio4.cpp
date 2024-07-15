/* 
Autor: Nayeli Cruz
Fecha:12/7/2024
Orde: 4) Una función recibe como parámetro un vector de enteros. La función debe determinar si cada uno de 
estos elementos es primo o no. La función debe devolver la sumatoria de los números primos que se encontraron 
en el vector.
*/
#include <iostream>
#include <vector>
using namespace std;

// Función para verificar si un número es primo
bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Función para calcular la sumatoria de números primos en un vector
int sumatoriaNumerosPrimos(const vector<int>& vec) {
    int sumaPrimos = 0;
    for (size_t i = 0; i < vec.size(); ++i) {
        if (esPrimo(vec[i])) {
            sumaPrimos += vec[i];
        }
    }
    return sumaPrimos;
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // Ejemplo de vector

    int sumaPrimos = sumatoriaNumerosPrimos(vec);
    cout << "La sumatoria de los números primos en el vector es: " << sumaPrimos << endl;

    return 0;
}
