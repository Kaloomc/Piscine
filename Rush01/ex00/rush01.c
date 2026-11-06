/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 09:42:27 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/16 12:34:51 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

#include <stdio.h>

int	**populate(void);
int	check_input(int **grids_view);
void	decode_input(char *str, int **grids_view);
int	check_all(int **grid, int **side_grid);


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int    **alloc_grid(void)
{
	int    **grid;
	int    i;

	i = 0;
	grid = malloc(sizeof(int *) * 4);
	while (i < 4)
	{
		grid[i] = malloc(sizeof(int) * 4);
		i++;
	}
	return (grid);
}

int    is_safe(int **grid, int row, int col, int val)
{
	int    i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == val || grid[i][col] == val)
			return (0);
		i++;
	}
	return (1);
}

void    print_grid(int **grid)
{
	int        x;
	int        y;
	char		c;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			c = grid[y][x] + '0';
			write(1, &c, 1);
			if (x < 3)
				write(1, " ", 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
	write(1, "\n", 1);
}

int	stop_condition(int **grid,int **side_grid)
{
	if(check_all(grid,side_grid))
	{
		print_grid(grid);
		return 1;
	}
	return 0;

}

int    solve(int **grid, int row, int col, int **side_grid)
{
	int    val;
	int    next_row;
	int    next_col;

	if (row == 4)
	{
		if(stop_condition(grid,side_grid))
			return 1;
		return 0;
	}
	next_row = row + (col == 3);
	next_col = (col + 1) % 4;
	val = 1;
	while (val <= 4)
	{
		if (is_safe(grid, row, col, val))
		{
			grid[row][col] = val;
			if(solve(grid, next_row, next_col, side_grid))
				return (1);
			grid[row][col] = 0;
		}
		val++;
	}
	return 0;
}

int	main(int ac, char **av)
{
	int	**grids_view;
	int   	**grid;

	if (ac != 2)
		return (0);
	grids_view = populate();
	decode_input(av[1],grids_view);
	if (!check_input(grids_view))
	{
		printf("impossible resolution");
		return (0)	;
	}
	grid = populate();
	solve(grid, 0, 0,grids_view);
	return (0);

}
