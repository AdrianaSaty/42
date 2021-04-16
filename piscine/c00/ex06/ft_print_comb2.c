/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaty-h- <asaty-h-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 18:41:17 by asaty-h-          #+#    #+#             */
/*   Updated: 2021/04/12 19:56:46 by asaty-h-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int number)
{
	write(1, &number, 2);
}

void	ft_print_comb2(void)
{
	int first;
	int second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_putchar((first / 10) + 48);
			ft_putchar((first % 10) + 48);
			ft_putchar(32);
			ft_putchar((second / 10) + 48);
			ft_putchar((second % 10) + 48);
			if (first != 98 || second != 99)
			{
				ft_putchar(44);
				ft_putchar(32);
			}
			second++;
		}
		first++;
	}
}
int main(void)
{
	ft_print_comb2();
	return 0;
}
