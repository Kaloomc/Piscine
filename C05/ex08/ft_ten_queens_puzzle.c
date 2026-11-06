/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 08:14:22 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/13 08:49:38 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ten_queens_puzzle(void)
{
	int	row;
	int	column;
	int	combinaison[10]{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

	row = 0;
	column = 0;
	while (column < 9)
	{
		while (row < 9)
		{
			row
		}
	}
	
}

int	check_other_queen(int *queens, int row, int column)
{
	
	int	current_row;

	current_row = 0;
	while (current_row < row)
	{
		if (queens[current_column] == row)
			return (0);
		if (queens[current_column] - 1 == row + column)
			return (0);
		if (queens[current_column] + 1 == row + column)
			return (0);
		i++;
	}
	return (1);
}

