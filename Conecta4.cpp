#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int FILAS = 6;
const int COLUMNAS = 7;

void mostrarTablero(const vector<vector<char>> &tablero) {
    cout << "\n 1 2 3 4 5 6 7\n";
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << ' ' << tablero[i][j];
        }
        cout << '\n';
    }
}

bool colocarFicha(vector<vector<char>> &tablero, int col, char ficha) {
    for (int i = FILAS - 1; i >= 0; i--) {
        if (tablero[i][col] == '.') {
            tablero[i][col] = ficha;
            return true;
        }
    }
    return false;
}
