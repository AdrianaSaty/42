#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void apply_rules(char **board, char *colUp, char *colDown, char *rowLeft, char *rowRight) {
    int i = 0;
    int j = 0;

    // write(1, "o", 1);

    // board[0][0] = 'a'; //delete
    // write(1, "colUp[0]: ", 9); //delete
    // write(1, &colUp[0], 1); //delete
    // write(1, "\n", 1); //delete

    // write(1, "colUp[1]: ", 9); //delete
    // write(1, &colUp[2], 1); //delete
    // printf("%c\n", colUp[1]);
    // write(1, "\n", 1); //delete

    while ( i <= 3) {
        j=0;
        while ( j <= 3) {
            //fazer regra de que ser tiver 4, coloca o 1
            if(colUp[i] == '4' && colDown[j] == '1') {
                board[0][j] = '1';
                board[1][j] = '2';
                board[2][j] = '3';
                board[3][j] = '4';
            } else if(colUp[i] == '1' && colDown[j] == '4') {
                board[0][j] = '4';
                board[1][j] = '3';
                board[2][j] = '2';
                board[3][j] = '1';
            } 

            if(colUp[i] == '1' && colDown[i] == '2') {
                board[0][i] = '4';
                board[3][i] = '3';
            } else if(colUp[i] == '2' && colDown[i] == '1') {
                board[0][i] = '3';
                board[3][i] = '4';
            }
            j++;
        }
        i++;
    }
    write(1, "rules applyed \n", 15); //delete

    i = 0;
    while ( i <= 3) {
        j = 0;
        while ( j <= 3) {
            write(1, &board[i][j], 1);
            j++;
        }
        i++;    
        write(1, "\n", 1);
    }

    write(1, "created new board \n", 17); //delete


}