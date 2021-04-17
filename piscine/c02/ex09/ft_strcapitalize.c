/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaty-h- <asaty-h-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 05:26:01 by asaty-h-          #+#    #+#             */
/*   Updated: 2021/04/16 05:48:34 by asaty-h-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (str[c] != '\0')
	{
		if (i == 0 && (str[c] >= 'a' && str[c] <= 'z'))
		{
			str[c] -= 'a' - 'A';
			i++;
		}
		else if (i > 0 && (str[c] >= 'A' && str[c] <= 'Z'))
			str[c] += 'a' - 'A';
		else if (str[c] < '0' || (str[c] > '9' && str[c] < 'A') ||
			(str[c] > 'Z' && str[c] < 'a') || str[c] > 'z')
			i = 0;
		else
			i++;
		c++;
	}
	return (str);
}
