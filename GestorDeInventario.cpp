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
