#include <iostream>
#include <cmath>     // Para sqrt() y pow()
using namespace std;

// Función factorial (entero, versión simple para principiantes)
long long factorial(int n) {
    long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}
