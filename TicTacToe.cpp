#include <bits/stdc++.h>
using namespace std;

// Function to display the Tic-Tac-Toe board
void Board(const vector<vector<string>>& board) {
    cout << "-------------" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "| ";
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j] << " | ";
        }
        cout << endl << "-------------" << endl;
    }
}

// Function to check if a player has won
bool Win(const vector<vector<string>>& board, string player) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }
    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;
    return false;
}

// Function to check if the game is a draw
bool Draw(const vector<vector<string>>& board) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == " ")
                return false;
        }
    }
    return true;
}

int main() {
    // Initialize empty board
    vector<vector<string>> board(3, vector<string>(3, " "));
    
    // Player X starts the game
    string currentPlayer = "X"; 

    cout << "Welcome to Tic-Tac-Toe!" << endl;

    do {
        Board(board);

        // Getting player's move
        int row, col;
        cout << "Player " << currentPlayer << ", enter your move (row column): ";
        cin >> row >> col;

        // Checking if the move is valid
        if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != " ") {
            cout << "Invalid move! Try again." << endl;
            continue;
        }

        // Updating board with player's move
        board[row - 1][col - 1] = currentPlayer;

        // Checking for win
        if (Win(board, currentPlayer)) {
            Board(board);
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        }

        // Checking for draw
        if (Draw(board)) {
            Board(board);
            cout << "It's a draw!" << endl;
            break;
        }

        // Switching players
        currentPlayer = (currentPlayer == "X") ? "O" : "X";

    } while (true);

    cout << "Thanks for playing Tic-Tac-Toe!" << endl;

    return 0;
}
