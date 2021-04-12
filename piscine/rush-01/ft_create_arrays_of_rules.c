/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_arrays_of_rules.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaty-h- <asaty-h-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 23:06:37 by lumeneze          #+#    #+#             */
/*   Updated: 2021/04/12 00:54:37 by asaty-h-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_create_arrays_of_rules(char *commands, char *col_up, char *col_down, char *row_left, char *row_right)
{
	col_up[0] = commands[0];
	col_up[1] = commands[2];
	col_up[2] = commands[4];
	col_up[3] = commands[6];
	col_down[0] = commands[8];
	col_down[1] = commands[10];
	col_down[2] = commands[12];
	col_down[3] = commands[14];
	row_left[0] = commands[16];
	row_left[1] = commands[18];
	row_left[2] = commands[20];
	row_left[3] = commands[22];
	row_right[0] = commands[24];
	row_right[1] = commands[26];
	row_right[2] = commands[28];
	row_right[3] = commands[30];
	write(1, "created arr rules \n", 19);
}
