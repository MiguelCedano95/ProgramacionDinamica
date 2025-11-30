#include <iostream>
using namespace std;

struct Cuenta {
    string nombre;
    double saldo;
}

void mostrarMenu() {
      cout << "\n==== Cajero automatico ==== \n";
      cout << "1.- Consultar saldo\n";
      cout << "2.- Depositar\n";
      cout << "3.- Retirar\n";
      cout << "4.- Transferir\n";
      cout << "5.- Salir\m";
      cout <<"Elegir una opcion: ";
}

int main() {
        Cuenta cuenta1 = {"Cuenta principal", 2000.0};
        Cuenta cuenta2 = {"Cuenta Secundaria", 1000.0};
            int opcion;
            double monto;
    While (true) {
            mostrarMenu();
            cin >> opcion;
            switch (opcion) {
                case 1:
                    cout << "\n--- Consultar saldo ---\n;
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
            
    }
}
