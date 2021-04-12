/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_board.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaty-h- <asaty-h-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 01:08:03 by asaty-h-          #+#    #+#             */
/*   Updated: 2021/04/12 01:49:27 by asaty-h-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_create_arrays_of_rules(char *commands, char *col_up, char *col_down, char *row_left, char *row_right);
void	ft_apply_rules(char **board, char *col_up, char *col_down, char *row_left, char *row_right);

void	ft_create_board(char *commands, char **board)
{
	int i;
	int j;
	char	*col_up;
	char	*col_down;
	char	*row_left;
	char	*row_right;

	col_up = (char*)malloc(4 * sizeof(char));
	col_down = (char*)malloc(4 * sizeof(char));
	row_left = (char*)malloc(4 * sizeof(char));
	row_right = (char*)malloc(4 * sizeof(char));
	i = 0;
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			board[i][j] = '0';
			j++;
		}
		i++;
	}
	ft_create_arrays_of_rules(commands, col_up, col_down, row_left, row_right);
	ft_apply_rules(board, col_up, col_down, row_left, row_right);
}
