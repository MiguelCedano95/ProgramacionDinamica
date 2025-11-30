#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Estructura para guardar los datos de cada producto
struct Producto {
    string nombre;
    double precio;
    int cantidad;
};

// Función para mostrar un producto
void mostrarProducto(const Producto& p) {
    cout << "Nombre: " << p.nombre
         << " | Precio: $" << p.precio
         << " | Cantidad: " << p.cantidad << endl;
}

// Mostrar menú
void mostrarMenu() {
    cout << "\n===== SISTEMA DE PRODUCTOS =====\n";
    cout << "1. Agregar producto\n";
    cout << "2. Mostrar todos los productos\n";
    cout << "3. Buscar producto\n";
    cout << "4. Ordenar productos\n";
    cout << "5. Salir\n";
    cout << "Elige una opción: ";
}

int main() {

    vector<Producto> inventario;
    int opcion;

    while (true) {

        mostrarMenu();
        cin >> opcion;

        switch (opcion) {

        case 1: {
            cout << "\n--- AGREGAR PRODUCTO ---\n";
            Producto nuevo;
            cout << "Nombre: ";
            cin >> nuevo.nombre;
            cout << "Precio: ";
            cin >> nuevo.precio;
            cout << "Cantidad: ";
            cin >> nuevo.cantidad;

            inventario.push_back(nuevo);
            cout << "Producto agregado.\n";
            break;
        }

        case 2: {
            cout << "\n--- LISTA DE PRODUCTOS ---\n";
            if (inventario.empty()) {
                cout << "No hay productos aún.\n";
            } else {
                for (const auto& p : inventario) {
                    mostrarProducto(p);
                }
            }
            break;
        }

case 3: {
            cout << "\n--- BUSCAR PRODUCTO ---\n";
            string buscado;
            cout << "Nombre del producto: ";
            cin >> buscado;

            bool encontrado = false;
            for (const auto& p : inventario) {
                if (p.nombre == buscado) {
                    mostrarProducto(p);
                    encontrado = true;
                }
            }

            if (!encontrado) {
                cout << "Producto no encontrado.\n";
            }
            break;
        }

        case 4: {
            int tipo;
            cout << "\n--- ORDENAR PRODUCTOS ---\n";
            cout << "1. Por nombre\n";
            cout << "2. Por precio\n";
            cout << "3. Por cantidad\n";
            cout << "Elige un tipo de ordenamiento: ";
            cin >> tipo;

            if (tipo == 1) {
                sort(inventario.begin(), inventario.end(),
                    [](const Producto& a, const Producto& b) {
                        return a.nombre < b.nombre;
                    });
                cout << "Ordenados por nombre.\n";
            }
            else if (tipo == 2) {
                sort(inventario.begin(), inventario.end(),
                    [](const Producto& a, const Producto& b) {
                        return a.precio < b.precio;
                    });
                cout << "Ordenados por precio.\n";
            }
            else if (tipo == 3) {
                sort(inventario.begin(), inventario.end(),
                    [](const Producto& a, const Producto& b) {
                        return a.cantidad < b.cantidad;
                    });
                cout << "Ordenados por cantidad.\n";
            }
            else {
                cout << "Opción inválida.\n";
            }
            break;
        }

        case 5:
            cout << "Saliendo del sistema...\n";
            return 0;

        default:
            cout << "Opción no válida.\n";
        }
    }

    return 0;
}
