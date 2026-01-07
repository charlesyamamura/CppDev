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
void getInput(bool xTurn, string board[ROWS][COLS], string playerX, string playerO);

void runGame(string playerX, string playerO) {
    string board[ROWS][COLS];
    bool xTurn = true;

    initBoard(board);

    while (true) {
        printBoard(board);
        getInput(xTurn, board, playerX, playerO);

        string win = checkWinner(board);
        if (win != " ") {
            printBoard(board);
            if (win == "X")
                cout << "\n" << playerX << " wins the game! 🎉\n";
            else
                cout << "\n" << playerO << " wins the game! 🎉\n";
            break;
        }

        if (isFull(board)) {
            printBoard(board);
            cout << "\nIt's a draw! 🤝\n";
            break;
        }

        xTurn = !xTurn;
    }
}

int main() {
    string playerX, playerO;
    char replay;

    cout << "Welcome to Tic-Tac-Toe!\n";
    cout << "Enter name for Player X: ";
    getline(cin, playerX);
    cout << "Enter name for Player O: ";
    getline(cin, playerO);

    do {
        cout << "\nStarting new game...\n";
        runGame(playerX, playerO);

        cout << "\nPlay again? (y/n): ";
        cin >> replay;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while (replay == 'y' || replay == 'Y');

    cout << "\nThanks for playing, " << playerX << " and " << playerO << "! 👋\n";
    return 0;
}

void initBoard(string board[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            board[i][j] = " ";
}

void printBoard(string board[ROWS][COLS]) {
    cout << "\nCurrent board:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++)
            cout << " " << (board[i][j] == " " ? "." : board[i][j]) << " ";
        cout << endl;
    }
}

bool cellOccupied(int row, int col, string board[ROWS][COLS]) {
    return board[row][col] != " ";
}

bool isFull(string board[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            if (board[i][j] == " ") return false;
    return true;
}

void getInput(bool xTurn, string board[ROWS][COLS], string playerX, string playerO) {
    int row, col;
    string symbol = xTurn ? "X" : "O";
    string currentPlayer = xTurn ? playerX : playerO;

    while (true) {
        cout << "\n" << currentPlayer << " (" << symbol << ") enter row and column (0-2 0-2): ";
        cin >> row >> col;

        if (row < 0 || row >= ROWS || col < 0 || col >= COLS) {
            cout << "Invalid position. Try again.";
            continue;
        }

        if (cellOccupied(row, col, board)) {
            cout << "Cell already occupied. Try again.";
            continue;
        }

        board[row][col] = symbol;
        break;
    }
}

string checkWinner(string board[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++)
        if (board[i][0] != " " && board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return board[i][0];

    for (int j = 0; j < COLS; j++)
        if (board[0][j] != " " && board[0][j] == board[1][j] && board[1][j] == board[2][j])
            return board[0][j];

    if (board[0][0] != " " && board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return board[0][0];

    if (board[0][2] != " " && board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return board[0][2];

    return " ";
}
