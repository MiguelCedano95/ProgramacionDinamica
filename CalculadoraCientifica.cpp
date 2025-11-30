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

// Menú principal
void mostrarMenu() {
    cout << "\n===== CALCULADORA =====\n";
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Multiplicación\n";
    cout << "4. División\n";
    cout << "5. Potencia\n";
    cout << "6. Raíz cuadrada\n";
    cout << "7. Factorial\n";
    cout << "8. Salir\n";
    cout << "Elige una opción: ";
}

int main() {

    int opcion;

    while (true) {
        mostrarMenu();
        cin >> opcion;

        double a, b; // Para operaciones que necesitan dos números

        switch (opcion) {

        case 1:
            cout << "\n--- SUMA ---\n";
            cout << "Ingresa dos números: ";
            cin >> a >> b;
            cout << "Resultado: " << a + b << endl;
            break;

