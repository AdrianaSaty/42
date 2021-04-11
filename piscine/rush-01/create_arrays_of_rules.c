#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void create_arrays_of_rules(char *commands, int *colUp, int *colDown, int *rowLeft, int *rowRight) {
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
}