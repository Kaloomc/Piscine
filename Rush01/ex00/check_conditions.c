/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_conditions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjeannea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 14:08:40 by jjeannea          #+#    #+#             */
/*   Updated: 2025/08/16 15:36:19 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>


// count left to right
// count right to left
// count top to bottom
// count bottom to top
// check all
//
int 	check_left_to_right(int **grid,int *tab, int row, int col)  
{
	int visible;
	int	max_height;

	max_height = 0;
	row = 0;
	col = 0;
	visible = 0;
	while (row < 4)
	{
		col = 0;
		while(col < 4)
		{	
			if (grid[row][col] > max_height)
			{
				visible++;
				max_height = grid[row][col];	
			}
			col++;
		}
		if (visible != tab[row])
			return (0);
		visible = 0;
		max_height = 0;
		row++;
	}
	return (1);
}

int     check_right_to_left(int **grid, int *tab)
{
	int row;
	int	col;
	int visible;
	int max_height;

	max_height = 0;
	row = 0;
	col = 0;
	visible = 0;
	while (row < 4)
	{
		col = 3;
		while(col >= 0)
		{
			if (grid[row][col] > max_height)
			{
				visible++;
				max_height = grid[row][col];
			}
			col--;
		}
		if (visible != tab[row])
			return (0);
		visible = 0;
		max_height = 0;
		row++;
	}
	return (1);
}

int     check_top_to_bottom(int **grid, int *tab)
{
	int row;
	int	col;
	int visible;
	int max_height;

	max_height = 0;
	row = 0;
	col = 0;
	visible = 0;
	while (col < 4)
	{
		row = 0;
		while(row < 4)
		{
			if (grid[row][col] > max_height)
			{
				visible++;
				max_height = grid[row][col];
			}
			row++;
		}
		if (visible != tab[col])
			return (0);
		visible = 0;
		max_height = 0;
		col++;
	}
	return (1);
}

int     check_bottom_to_top(int **grid, int *tab)
{
	int row;
	int	col;
	int visible;
	int max_height;

	max_height = 0;
	row = 0;
	col = 0;
	visible = 0;
	while (col < 4)
	{
		row = 3;
		while(row >= 0)
		{
			if (grid[row][col] > max_height)
			{
				visible++;
				max_height = grid[row][col];
			}
			row--;
		}
		if (visible != tab[col])
			return (0);
		visible = 0;
		max_height = 0;
		col++;
	}
	return (1);
}
#include <stdio.h>
int	check_all(int **grid, int **side_grid)
{		
	if(check_left_to_right(grid, side_grid[2]) 
	&& check_right_to_left(grid, side_grid[3])
	&& check_bottom_to_top(grid, side_grid[1])
	&& check_top_to_bottom(grid, side_grid[0]))
	{
	
		return 1;
	}
	return 0;
}

