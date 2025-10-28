#include <iostream>
#include <string>
using namespace std;

int main(){
    string posicion;
    string nombre1;
    string nombre2;
    string jugadorNombre;
    string jugadorActual = "X";
    string tablero[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
    int lugar;
    int turno = 0;
    int ganador = 0;

    // Bienvenido a Tic Tac Toe
    cout << "--------------- \n";

    cout << "Bienvenido a Tic Tac Toe \n";

    cout << "--------------- \n";

    cout << "Escribe el nombre del primer jugador: ";
    cin >> nombre1;

    cout << "Escribe el nombre del segundo jugador: ";
    cin >> nombre2;
    
    cout << "El juego empieza ahora: ";
    
    cout << "Posiciones del tablero: \n";

    cout << "1 | 2 | 3  \n";
    cout << "--+---+-- \n";
    cout << "4 | 5 | 6 \n";
    cout << "--+---+-- \n";
    cout << "7 | 8 | 9 \n";
    cout << "--+---+-- \n\n";
    
 while (turno < 9 && ganador == 0) {
        jugadorNombre = (jugadorActual == "X") ? nombre1 : nombre2;

        cout << "Tablero actual:\n";
        cout << tablero[0] << " | " << tablero[1] << " | " << tablero[2] << "\n";
        cout << "--+---+--\n";
        cout << tablero[3] << " | " << tablero[4] << " | " << tablero[5] << "\n";
        cout << "--+---+--\n";
        cout << tablero[6] << " | " << tablero[7] << " | " << tablero[8] << "\n\n";

        cout << jugadorNombre << " (" << jugadorActual << "), elige una posicion (1-9): ";
        cin >> lugar;
        
         if (lugar < 1 || lugar > 9) {
            cout << " Posicion invalida. Intenta de nuevo.\n";
            continue;
        }

        if (tablero[lugar - 1] != " ") {
            cout << " Esa posición ya está ocupada. Intenta de nuevo.\n";
            continue; 
        }

        tablero[lugar - 1] = jugadorActual;
        
         turno++;

        int combinacionesGanadoras[8][3] = {
            {0,1,2},{3,4,5},{6,7,8}, // filas
            {0,3,6},{1,4,7},{2,5,8}, // columnas
            {0,4,8},{2,4,6}           // diagonales
        };

        for (int i=0; i<8; i++) {
            int a = combinacionesGanadoras[i][0];
            int b = combinacionesGanadoras[i][1];
            int c = combinacionesGanadoras[i][2];
            
             if (tablero[a] == jugadorActual && tablero[b] == jugadorActual && tablero[c] == jugadorActual) {
                ganador = 1;
                break;
            }
        }
        
        if (ganador == 1) {
            cout << "\n " << jugadorNombre << " ha ganado! \n";
        } 

        else if (turno == 9) {
            cout << "\n Empate! No hay mas espacios.\n";
        } 
        
        else {
            jugadorActual = (jugadorActual == "X") ? "O" : "X";
        }
    }

    cout << "\nTablero final:\n";
    cout << tablero[0] << " | " << tablero[1] << " | " << tablero[2] << "\n";
    cout << "--+---+--\n";
    cout << tablero[3] << " | " << tablero[4] << " | " << tablero[5] << "\n";
    cout << "--+---+--\n";
    cout << tablero[6] << " | " << tablero[7] << " | " << tablero[8] << "\n\n";
    
        cout << "Gracias por jugar Tic Tac Toe \n";
        cin >> nombre1;


    return 0;
}