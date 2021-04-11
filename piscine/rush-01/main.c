#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void create_board(int **board);

int main(int argc, char **argv)
{
	char *commands = argv[1];
    int *colUp = (int*) malloc(4*sizeof(int));
    int *colDown = (int*) malloc(4*sizeof(int));
    int *rowLeft = (int*) malloc(4*sizeof(int));
    int *rowRight = (int*) malloc(4*sizeof(int));

// ---------- create board ----------
    int **board;
    int i, N = 5;
    board = (int**) malloc(N*sizeof(int*));
    for (i =0; i<N; i++) {
        board[i] = (int*) malloc(N * sizeof(int));
    }

    create_board(board);
// ---------- create board ----------


// ---------- alimentar os arrays ----------
    colUp[0] = commands[0];
    colUp[1] = commands[1];
    colUp[2] = commands[2];
    colUp[3] = commands[3];

    colDown[0] = commands[4];
    colDown[1] = commands[5];
    colDown[2] = commands[6];
    colDown[3] = commands[7];

    rowLeft[0] = commands[8];
    rowLeft[1] = commands[9];
    rowLeft[2] = commands[10];
    rowLeft[3] = commands[11];

    rowRight[0] = commands[12];
    rowRight[1] = commands[13];
    rowRight[2] = commands[14];
    rowRight[3] = commands[15];
// ---------- alimentar os arrays ----------

	// printf("commands %s\n", commands);
	// printf("commands[0] %c\n", commands[0]);
	// printf("colUp[0] %c\n", colUp[0]);
	// printf("colUp %s\n", colUp);
	// printf("board %s\n", board);


	return (0);
}

// use command:
// gcc main.c 
// and then:
// ./a.out "hello!"


// criar um array de 50 inteiros(cada um tem 4 bites): int *v = malloc(200)
// ou de maneira mais dinamica: int *v = (int*) malloc(50*sizeof(int))
// free: libera a memoria da variavel anterior

// matriz:
// int **p;
// int i, j, N = 2;
// p = (int**) malloc(N*sizeof(int*));
// for (i =0; i<N; i++) {
//     p[i] = (int*) malloc(N * sizeof(int));
// }