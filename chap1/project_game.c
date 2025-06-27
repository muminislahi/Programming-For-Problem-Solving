#include <stdio.h>

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

void displayBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        if (i < 2) printf("\n---|---|---\n");
    }
    printf("\n");
}

void makeMove(int player) {
    int choice;
    char mark = (player == 1) ? 'X' : 'O';

    printf("Player %d (%c), enter your choice: ", player, mark);
    scanf("%d", &choice);

    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = mark;
    } else {
        printf("Invalid move! Try again.\n");
        makeMove(player);
    }
}

int checkWinner() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return 1;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return 1;

    return 0;
}

int main() {
    int player = 1;
    int moves = 0;

    while (1) {
        displayBoard();
        makeMove(player);
        moves++;

        if (checkWinner()) {
            displayBoard();
            printf("Player %d wins!\n", player);
            break;
        } else if (moves == 9) {
            displayBoard();
            printf("It's a draw!\n");
            break;
        }

        player = (player == 1) ? 2 : 1;
    }

    return 0;
}
