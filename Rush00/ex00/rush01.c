/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 09:01:02 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/09 09:01:05 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_atoi(char *str)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (str[i])
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
		}
		else
		{
			write(1, "Parameters must be positive int\n",32);
			break;
		}
		i++;
	}	
	return (result);
}

void	print_rectangle(int current_x, int current_y, int max_x, int max_y)
{
	if (current_y == 0 && current_x == 0)
		ft_putchar('/');
	else if ((current_y == max_y - 1 && current_x == 0)
		|| (current_y == 0 && current_x == max_x - 1))
		ft_putchar('\\');
	else if (current_y == max_y - 1 && current_x == max_x - 1)
		ft_putchar('/');
	else if (current_y == 0 || current_x == 0
		|| current_x == max_x - 1 || current_y == max_y - 1)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	current_x;
	int	current_y;

	current_x = 0;
	current_y = 0;
	if (x <= 0 || y <= 0)
	{
		ft_putchar('\n');
		return ;
	}
	while (current_y < y)
	{
		while (current_x < x)
		{
			print_rectangle(current_x, current_y, x, y);
			current_x++;
		}
		ft_putchar('\n');
		current_x = 0;
		current_y++;
	}
}
