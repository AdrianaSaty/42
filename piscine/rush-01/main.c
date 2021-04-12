/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaty-h- <asaty-h-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 23:03:27 by asaty-h-          #+#    #+#             */
/*   Updated: 2021/04/12 01:44:04 by asaty-h-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str);
int	ft_handle_input(int argc, char **argv);
void	ft_create_board(char *commands, char **board);

int	main(int argc, char **argv)
{
	int		i;
	int		n;
	char	*commands;
	char	**board;

	if (ft_handle_input(argc, argv) == 1)
		return (0);
	i = 0;
	n = 4;
	board = (char**)malloc(n * sizeof(char*));
	while (i < n)
	{
		board[i] = (char*)malloc(n * sizeof(char));
		i++;
	}
	commands = argv[1];
	ft_create_board(commands, board);
	return (0);
}
