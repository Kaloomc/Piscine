/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_decoder.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjourdai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                               +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 09:54:15 by tjourdai          #+#    #+#             */
/*   Updated: 2025/08/16 15:39:30 by tjourdai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	digitslen(char *str)
{
	int	digits;
	int	i;

	i = 0;
	digits = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			digits++;
		i++;
	}
	return (digits);
}

int	**populate(void)
{
	int	i;
	int	j;
	int	**grids_view;

	i = 0;
	grids_view = malloc(sizeof(int *) * 4);
	while (i < 4)
	{
		j = 0;
		grids_view[i] = malloc(sizeof(int) * 4);
		while (j < 4)
		{
			grids_view[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grids_view);
}

void	decode_input(char *str, int **grids_view)
{
	int	i;
	int	digits;

	if (digitslen(str) != 16)
		return ;
	i = 0;
	digits = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			if (digits < 4)
				grids_view[0][digits++ % 4] = (str[i] - 48);
			else if (digits < 8)
				grids_view[1][digits++ % 4] = (str[i] - 48);
			else if (digits < 12)
				grids_view[2][digits++ % 4] = (str[i] - 48);
			else
				grids_view[3][digits++ % 4] = (str[i] - 48);
		}
		i++;
	}
}

int	check_input(int **grids_view);


/*
int	main(int argc, char *argv[])
{
	int	i;
	int	**grids_view;

	(void)argc;
	grids_view = populate();
	decode_input(argv[1], grids_view);
	if (!check_input(grids_view))
		printf("vue impossible");
	i = 0;
	while (i < 4)
	{
		free(grids_view[i++]);
	}
	free(grids_view);
}
*/
