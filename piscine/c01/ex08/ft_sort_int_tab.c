/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaty-h- <asaty-h-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 19:28:09 by asaty-h-          #+#    #+#             */
/*   Updated: 2021/04/14 00:10:49 by asaty-h-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int c;

	i = 0;
	while (i < size)
	{
		c = i;
		while (c < size)
		{
			if (tab[i] >= tab[c])
				ft_swap(&tab[i], &tab[c]);
			c++;
		}
		i++;
	}
}
