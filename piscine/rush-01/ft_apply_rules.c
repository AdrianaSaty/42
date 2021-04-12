/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_rules.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaty-h- <asaty-h-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 23:54:25 by fbonini-          #+#    #+#             */
/*   Updated: 2021/04/12 01:56:20 by asaty-h-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_check(char **board, int num)
{
	unsigned int	times;
	unsigned int		i;
	unsigned int		j;
	unsigned int		a;
	unsigned int		b;

	i = 0;
	j = 0;
	times = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (board[i][j] == (num + '0'))
				times++;
			j++;
		}
		i++;
	}
	if (times == 3)
		a = 0;
		b = 0;
		i = 0;
		while (i < 4)
		{
			if (board[i][0] != (num + '0') && board[i][1] != (num + '0') &&
				board[i][2] != (num + '0') && board[i][3] != (num + '0'))
				a = i;
			i++;
		}
		i = 0;
		while (i < 4)
		{
			if (board[0][i] != (num + '0') && board[1][i] != (num + '0') &&
				board[2][i] != (num + '0') && board[3][i] != (num + '0'))
				b = i;
			i++;
		}
		board[a][b] = (num + '0');
}

void	ft_apply_rules(char **board, char *col_up, char *col_down, char *row_left, char *row_right)
{
	int i;
	int j;
	int num;

	i = 0;
	j = 0;
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			if (col_up[i] == '4' && col_down[j] == '1')
			{
				board[0][i] = '1';
				board[1][i] = '2';
				board[2][i] = '3';
				board[3][i] = '4';
			}
			else if (col_up[i] == '1' && col_down[j] == '4')
			{
				board[0][i] = '4';
				board[1][i] = '3';
				board[2][i] = '2';
				board[3][i] = '1';
			}
			if (col_up[i] == '1' && col_down[i] == '2')
			{
				board[0][i] = '4';
				board[3][i] = '3';
			}
			else if (col_up[i] == '2' && col_down[i] == '1')
			{
				board[0][i] = '3';
				board[3][i] = '4';
			}
			if (col_up[i] == '3' && col_down[i] == '2')
				board[2][i] = '4';
			else if (col_up[i] == '2' && col_down[i] == '3')
				board[1][i] = '4';
			if (col_up[i] == '3' && col_down[i] == '1')
				board[3][i] = '4';
			else if (col_up[i] == '1' && col_down[i] == '3')
				board[0][i] = '4';
			j++;
		}
		i++;
	}
	i = 0;
	j = 0;
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			if (row_left[i] == '4' && row_right[j] == '1')
			{
				board[i][0] = '1';
				board[i][1] = '2';
				board[i][2] = '3';
				board[i][3] = '4';
			}
			else if (row_left[i] == '1' && row_right[j] == '4')
			{
				board[i][0] = '4';
				board[i][1] = '3';
				board[i][2] = '2';
				board[i][3] = '1';
			}
			if (row_left[i] == '1' && row_right[i] == '2')
			{
				board[i][0] = '4';
				board[i][3] = '3';
			}
			else if (row_left[i] == '2' && row_right[i] == '1')
				board[i][0] = '3';
				board[i][3] = '4';
			if (row_left[i] == '3' && row_right[i] == '2')
				board[i][2] = '4';
			else if (row_left[i] == '2' && row_right[i] == '3')
				board[i][1] = '4';
			if (row_left[i] == '3' && row_right[i] == '1')
				board[i][3] = '4';
			else if (row_left[i] == '1' && row_right[i] == '3')
				board[i][0] = '4';
			j++;
		}
		i++;
	}
	num = 1;
	while (num < 5)
	{
		ft_check(board, num);
		num++;
	}
	i = 0;
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			write(1, &board[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}
