/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaugusto <vaugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 16:32:20 by asaty-h-          #+#    #+#             */
/*   Updated: 2021/04/04 18:49:28 by vaugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void 	ft_putchar(char c);

void	rush(int columns, int rows) {
	int i;
	int j;

	i = 1;
	j = 1;

	while (i <= rows) {
		while (j <= columns) {
			if (i == 1 || i == rows || j == 1 || j == columns) {
				if ((i == 1 && j == columns) || (i == 1 && j == 1))
					ft_putchar('A');
				else if ((j == 1 && i == rows) || (i == rows && j == columns))
					ft_putchar('C');
				else
					ft_putchar('B');
			} else {
				ft_putchar(' ');
			}
			j++;
		}
		ft_putchar('\n');
		i++;
		j = 1;
	}
}
