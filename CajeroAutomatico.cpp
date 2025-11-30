#include <iostream>
using namespace std;

// Estructura para representar una cuenta bancaria
struct Cuenta {
    string nombre;
    double saldo;
};

// Función para mostrar el menú
void mostrarMenu() {
    cout << "\n==== CAJERO AUTOMÁTICO ====\n";
    cout << "1-. Consultar saldo\n";
    cout << "2-. Depositar\n";
    cout << "3-. Retirar\n";
    cout << "4-. Transferir\n";
    cout << "5-. Salir\n";
    cout << "Elige una opción: ";
}

int main() {

    // Creamos dos cuentas para poder hacer transferencias
    Cuenta cuenta1 = {"Cuenta Principal", 2000.0};
    Cuenta cuenta2 = {"Cuenta Secundaria", 1000.0};

    int opcion;
    double monto;

    while (true) {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {

        case 1:
            cout << "\n--- CONSULTAR SALDO ---\n";
            cout << cuenta1.nombre << " → $" << cuenta1.saldo << endl;
            cout << cuenta2.nombre << " → $" << cuenta2.saldo << endl;
            break;

        case 2:
            cout << "\n--- DEPOSITAR ---\n";
            cout << "¿Cuánto deseas depositar a " << cuenta1.nombre << "? ";
            cin >> monto;
            if (monto > 0) {
                cuenta1.saldo += monto;
                cout << "Depósito exitoso. Nuevo saldo: $" << cuenta1.saldo << endl;
            } else {
                cout << "Monto inválido.\n";
            }
            break;

        case 3:
            cout << "\n--- RETIRAR ---\n";
            cout << "¿Cuánto deseas retirar de " << cuenta1.nombre << "? ";
            cin >> monto;
            if (monto > 0 && monto <= cuenta1.saldo) {
                cuenta1.saldo -= monto;
                cout << "Retiro exitoso. Nuevo saldo: $" << cuenta1.saldo << endl;
            } else {
                cout << "Monto inválido o insuficiente.\n";
            }
            break;

        case 4:
            cout << "\n--- TRANSFERIR ---\n";
            cout << "¿Cuánto deseas transferir de " << cuenta1.nombre 
                 << " a " << cuenta2.nombre << "? ";
            cin >> monto;
            if (monto > 0 && monto <= cuenta1.saldo) {
                cuenta1.saldo -= monto;
                cuenta2.saldo += monto;
                cout << "Transferencia exitosa.\n";
            } else {
                cout << "Monto inválido o insuficiente.\n";
            }
            break;

        case 5:
            cout << "Gracias por usar el cajero.\n";
            return 0;

        default:
            cout << "Opción no válida.\n";
        }
    }

    return 0;
}

