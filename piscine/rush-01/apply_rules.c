#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void apply_rules(char **board, char *colUp, char *colDown, char *rowLeft, char *rowRight) {
    int i = 0;
    int j = 0;
	 //delete
    // write(1, "o", 1);

    // board[0][0] = 'a'; //delete
    // write(1, "colUp[0]: ", 9); //delete
    // write(1, &colUp[0], 1); //delete
    // write(1, "\n", 1); //delete

    // write(1, "colUp[1]: ", 9); //delete
    // write(1, &colUp[2], 1); //delete
    // printf("%c\n", colUp[1]);
    // write(1, "\n", 1); //delete


// COMPLETA VERIFICANDO CIMA E BAIXO
    while ( i <= 3) {
        j=0;
        while ( j <= 3) {
            //fazer regra de que ser tiver 4, coloca o 1
            if(colUp[i] == '4' && colDown[j] == '1') {
                board[0][i] = '1';
                board[1][i] = '2';
                board[2][i] = '3';
                board[3][i] = '4';
            } else if(colUp[i] == '1' && colDown[j] == '4') {
                board[0][i] = '4';
                board[1][i] = '3';
                board[2][i] = '2';
                board[3][i] = '1';
            }

            if(colUp[i] == '1' && colDown[i] == '2') {
                board[0][i] = '4';
                board[3][i] = '3';
            } else if(colUp[i] == '2' && colDown[i] == '1') {
                board[0][i] = '3';
                board[3][i] = '4';
            }
			
				if(colUp[i] == '3' && colDown[i] == '2') {
                board[2][i] = '4';
            } else if(colUp[i] == '2' && colDown[i] == '3') {
                board[1][i] = '4';
            }

			if(colUp[i] == '3' && colDown[i] == '1') {
                board[3][i] = '4';
            } else if(colUp[i] == '1' && colDown[i] == '3') {
                board[0][i] = '4';
            }

            j++;
        }
        i++;
    }
// COMPLETA VERIFICANDO AS LATERAIS
    i = 0;
    j = 0;
	while ( i <= 3) {
        j=0;
        while ( j <= 3) {
            //fazer regra de que ser tiver 4, coloca o 1
            if(rowLeft[i] == '4' && rowRight[j] == '1') {
                board[i][0] = '1';
                board[i][1] = '2';
                board[i][2] = '3';
                board[i][3] = '4';
            } else if(rowLeft[i] == '1' && rowRight[j] == '4') {
                board[i][0] = '4';
                board[i][1] = '3';
                board[i][2] = '2';
                board[i][3] = '1';
            }

            if(rowLeft[i] == '1' && rowRight[i] == '2') {
                board[i][0] = '4';
                board[i][3] = '3';
            } else if(rowLeft[i] == '2' && rowRight[i] == '1') {
                board[i][0] = '3';
                board[i][3] = '4';
            }
			
				if(rowLeft[i] == '3' && rowRight[i] == '2') {
                board[i][2] = '4';
            } else if(rowLeft[i] == '2' && rowRight[i] == '3') {
                board[i][1] = '4';
            }

			if(rowLeft[i] == '3' && rowRight[i] == '1') {
                board[i][3] = '4';
            } else if(rowLeft[i] == '1' && rowRight[i] == '3') {
                board[i][0] = '4';
            }

            j++;
        }
        i++;
    }
// ------------------------------ tentando criar a regra de verificar numeros nas linhas e colunas --------------------
	int times;
	int num;
	i = 0;
    j = 0;
	times = 0;
	num = 0;
	/* {
		linha 1 board [i][j] => i, j = 0
		{
			rodar j até j > 3
		}
		rodar i até i > 3
	   }
	*/
	// while ( i < 3)
	// {
	// 	j = 0;
	// 	while ( j < 3)
	// 		{
	// 			if(board[i][j] == num)
	// 			{

	// 			}
	// 		}
	// 	i++;
	// }





	// // checar numeros
	// while (num <= 4)
	// {
	// 	i = 0;
	// 	while (i <= 3)
	// 	{
	// 		j = 0;
	// 		while (j <= 3)
	// 		{
	// 			if (board[i][j] == num)
	// 			{
	// 				times++;
	// 			}
	// 			j++;
	// 		}
	// 		i++;
	// 	}
	// 	num++;	
	// }
// --------------------------------------------------------------------------------------------------------------
    write(1, "rules applyed \n", 15); //delete
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