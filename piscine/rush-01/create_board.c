#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void create_board(int **board) {
    char i = 0;
    while ( i <= 4) {
        int j = 0;
        while ( j <= 4) {
            board[i][j] = '0';
            write(1, &board[i][j], 1);
            j++;
        }
        i++;    
        write(1, "\n", 1);
    }
}