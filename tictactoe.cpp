#include <iostream>
#include <vector>

void drawBoard(const std::vector<char>& board) {
    std::cout << " " << board[0] << " | " << board[1] << " | " << board[2] << "\n";
    std::cout << "---|---|---\n";
    std::cout << " " << board[3] << " | " << board[4] << " | " << board[5] << "\n";
    std::cout << "---|---|---\n";
    std::cout << " " << board[6] << " | " << board[7] << " | " << board[8] << "\n";
}

int main() {
    std::vector<char> board(9, ' ');
    board[0] = 'X';
    board[4] = 'O';
    board[8] = 'X';
    std::cout << "Tic-Tac-Toe Demo:\n";
    drawBoard(board);
    return 0;
}
