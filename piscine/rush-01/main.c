#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void create_board(int **board);
void create_arrays_of_rules(char *commands, int *colUp, int *colDown, int *rowLeft, int *rowRight);

int main(int argc, char **argv)
{
	char *commands = argv[1];
    int *colUp = (int*) malloc(4*sizeof(int));
    int *colDown = (int*) malloc(4*sizeof(int));
    int *rowLeft = (int*) malloc(4*sizeof(int));
    int *rowRight = (int*) malloc(4*sizeof(int));

    int **board;
    int i, N = 5;
    board = (int**) malloc(N*sizeof(int*));
    for (i =0; i<N; i++) {
        board[i] = (int*) malloc(N * sizeof(int));
    }

    create_board(board);
    create_arrays_of_rules(commands, colUp, colDown, rowLeft, rowRight);


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