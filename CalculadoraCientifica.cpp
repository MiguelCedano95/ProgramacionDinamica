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

        case 2:
            cout << "\n--- RESTA ---\n";
            cout << "Ingresa dos números: ";
            cin >> a >> b;
            cout << "Resultado: " << a - b << endl;
            break;

        case 3:
            cout << "\n--- MULTIPLICACIÓN ---\n";
            cout << "Ingresa dos números: ";
            cin >> a >> b;
            cout << "Resultado: " << a * b << endl;
            break;

        case 4:
            cout << "\n--- DIVISIÓN ---\n";
            cout << "Ingresa dos números (a / b): ";
            cin >> a >> b;
            if (b == 0) {
                cout << "Error: no se puede dividir entre cero.\n";
            } else {
                cout << "Resultado: " << a / b << endl;
            }
            break;

        case 5:
            cout << "\n--- POTENCIA ---\n";
            cout << "Ingresa la base y el exponente: ";
            cin >> a >> b;
            cout << "Resultado: " << pow(a, b) << endl;
            break;

        case 6:
            cout << "\n--- RAÍZ CUADRADA ---\n";
            cout << "Ingresa un número: ";
            cin >> a;
            if (a < 0) {
                cout << "Error: no se puede sacar raíz de un número negativo.\n";
            } else {
                cout << "Resultado: " << sqrt(a) << endl;
            }
            break;

        case 7: {
            cout << "\n--- FACTORIAL ---\n";
            int n;
            cout << "Ingresa un número entero: ";
            cin >> n;

            if (n < 0) {
                cout << "Error: el factorial solo se puede calcular de números no negativos.\n";
            } else {
                cout << "Resultado: " << factorial(n) << endl;
            }
            break;
        }

        case 8:
            cout << "Saliendo...\n";
            return 0;

        default:
            cout << "Opción no válida.\n";
        }
    }

    return 0;
}
