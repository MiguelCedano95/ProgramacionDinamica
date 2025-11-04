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

bool gana(const vector<vector<char>> &t, char f) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (t[i][j] != f) continue;
            // Horizontal
            if (j + 3 < COLUMNAS && t[i][j+1]==f && t[i][j+2]==f && t[i][j+3]==f) return true;
            // Vertical
            if (i + 3 < FILAS && t[i+1][j]==f && t[i+2][j]==f && t[i+3][j]==f) return true;
            // Diagonal descendente
            if (i + 3 < FILAS && j + 3 < COLUMNAS && t[i+1][j+1]==f && t[i+2][j+2]==f && t[i+3][j+3]==f) return true;
            // Diagonal ascendente
            if (i - 3 >= 0 && j + 3 < COLUMNAS && t[i-1][j+1]==f && t[i-2][j+2]==f && t[i-3][j+3]==f) return true;
        }
    }
    return false;
}

bool lleno(const vector<vector<char>> &t) {
    for (int j = 0; j < COLUMNAS; j++)
        if (t[0][j] == '.') return false;
    return true;
}

int main() {
    vector<vector<char>> tablero(FILAS, vector<char>(COLUMNAS, '.'));
    char jugador = 'X';
    bool fin = false;

    cout << "=== Conecta 4 ===\n";


    while (!fin) {
        mostrarTablero(tablero);
        int col;
        cout << "Jugador " << jugador << ", elige columna (1-7): ";
        cin >> col;

        if (cin.fail() || col < 1 || col > 7) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Entrada inválida. Intenta de nuevo.\n";
            continue;
        }

        if (!colocarFicha(tablero, col - 1, jugador)) {
            cout << "Columna llena. Intenta otra.\n";
            continue;
        }

        if (gana(tablero, jugador)) {
            mostrarTablero(tablero);
            cout << "\n====================================\n";
            cout << "¡FELICIDADES! El jugador '" << jugador << "' ha ganado la partida.\n";
            cout << "====================================\n";
            fin = true;
        } else if (lleno(tablero)) {
            mostrarTablero(tablero);
            cout << "Empate.\n";
            fin = true;
        }

        jugador = (jugador == 'X') ? 'O' : 'X';
    }
    return 0;
}
