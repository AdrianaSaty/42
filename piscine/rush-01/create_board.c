#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void create_board(char **board) {
    char i = 0;
    while ( i <= 3) {
        int j = 0;
        while ( j <= 3) {
            board[i][j] = '0';
            write(1, &board[i][j], 1); //delete
            j++;
        }
        i++;    
        write(1, "\n", 1);
    }
    write(1, "created board \n", 15); //delete

}