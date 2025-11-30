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
            
    }
}
