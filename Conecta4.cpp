#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

const int ROWS = 6;
const int COLS = 7;
const char EMPTY = ".";
const char J1 = "X";
const char J2 = "O";

using Board = vector<vector<char>>;

Board createBoard() {
    return Board(ROWS, vector<char>(COLS, EMPTY));
}

void printBoard(const Board &b) {
    cout << "";
    for (int c = 1; c <= COLS; ++c) cout << c << ' ';
    cout << " ";
}
