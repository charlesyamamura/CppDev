#include <iostream>
#include <string>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

void initBoard(string board[ROWS][COLS]);
void printBoard(string board[ROWS][COLS]);
bool cellOccupied(int row, int col, string board[ROWS][COLS]);
string checkWinner(string board[ROWS][COLS]);
bool isFull(string board[ROWS][COLS]);
void getInput(bool xTurn, string board[ROWS][COLS]);

void runGame() {
    string board[ROWS][COLS];
    bool xTurn = true;

    cout << "Welcome to the tic-tac-toe game!" << endl;

    initBoard(board);
    printBoard(board);

    while (true) {
        getInput(xTurn, board);
        printBoard(board);

        string win = checkWinner(board);
        if (win != " ") {
            cout << win << " wins!" << endl;
            break;
        }

        if (isFull(board)) {
            cout << "It's a draw!" << endl;
            break;
        }

        xTurn = !xTurn;
    }
}

int main() {
    runGame();
    return 0;
}

void initBoard(string board[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            board[i][j] = " ";
        }
    }
}

void printBoard(string board[ROWS][COLS]) {
    cout << "\nCurrent board:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "[" << board[i][j] << "]";
        }
        cout << endl;
    }
}

bool cellOccupied(int row, int col, string board[ROWS][COLS]) {
    return board[row][col] != " ";
}

bool isFull(string board[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (board[i][j] == " ") {
                return false;
            }
        }
    }
    return true;
}

void getInput(bool xTurn, string board[ROWS][COLS]) {
    int row, col;
    string symbol = xTurn ? "X" : "O";

    while (true) {
        cout << "It's " << symbol << "'s turn. Enter row and column (0 1 2), separated by a space: ";
        cin >> row >> col;

        if (row < 0 || row >= ROWS || col < 0 || col >= COLS) {
            cout << "Invalid position. Try again.\n";
            continue;
        }

        if (cellOccupied(row, col, board)) {
            cout << "Cell already occupied. Try again.\n";
            continue;
        }

        board[row][col] = symbol;
        break;
    }
}

string checkWinner(string board[ROWS][COLS]) {
    // rows
    for (int i = 0; i < ROWS; i++) {
        if (board[i][0] != " " && board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return board[i][0];
    }

    // cols
    for (int j = 0; j < COLS; j++) {
        if (board[0][j] != " " && board[0][j] == board[1][j] && board[1][j] == board[2][j])
            return board[0][j];
    }

    // diagonals
    if (board[0][0] != " " && board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return board[0][0];

    if (board[0][2] != " " && board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return board[0][2];

    return " ";
}
