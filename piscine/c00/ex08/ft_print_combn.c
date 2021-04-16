/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaty-h- <asaty-h-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 01:59:31 by asaty-h-          #+#    #+#             */
/*   Updated: 2021/04/06 01:59:44 by asaty-h-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(int number)
{
	write(1, &number, 2);
}

void	ft_print_combn(int nb)
{

}

int		main(void)
{
	ft_print_combn(2);
	return (0);
}