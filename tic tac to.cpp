#include <iostream>
using namespace std;

// Global variable
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char player = 'X';

// Function to print the board
void print_board() {
    cout << "Tic Tac Toe Game" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to check if a player has won
bool check_win() {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return true;
        }
    }
    // Check columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return true;
        }
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return true;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return true;
    }
    return false;
}

// Main function
int main() {
    print_board();
    while (true) {
        int move;
        cout << "Player " << player << ", enter your move: ";
        cin >> move;
        // Update the board
        int row, col;
        switch (move) {
            case 1: row = 0; col = 0; break;
            case 2: row = 0; col = 1; break;
            case 3: row = 0; col = 2; break;
            case 4: row = 1; col = 0; break;
            case 5: row = 1; col = 1; break;
            case 6: row = 1; col = 2; break;
            case 7: row = 2; col = 0; break;
            case 8: row = 2; col = 1; break;
            case 9: row = 2; col = 2; break;
        }
        if (board[row][col] != 'X' && board[row][col] != 'O') {
            board[row][col] = player;
        } else {
            cout << "Invalid move! Try again." << endl;
            continue;
        }
        print_board();
        if (check_win()) {
            cout << "Player " << player << " has won!" << endl;
            break;
        }
        if (player == 'X') {
            player = 'O';
        }
		 else
		 {
            player = 'X';
        }
    }}