#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void create_arrays_of_rules(char *commands, char *colUp, char *colDown, char *rowLeft, char *rowRight) {
    colUp[0] = commands[0];
    colUp[1] = commands[2];
    colUp[2] = commands[4];
    colUp[3] = commands[6];

    colDown[0] = commands[8];
    colDown[1] = commands[10];
    colDown[2] = commands[12];
    colDown[3] = commands[14];

    rowLeft[0] = commands[16];
    rowLeft[1] = commands[18];
    rowLeft[2] = commands[20];
    rowLeft[3] = commands[22];

    rowRight[0] = commands[24];
    rowRight[1] = commands[26];
    rowRight[2] = commands[28];
    rowRight[3] = commands[30];

    write(1, "created arr rules \n", 19); //delete

}