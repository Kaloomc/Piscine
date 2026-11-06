/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:14:45 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/13 12:14:47 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_int_tab(char **tab, int size)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	j = 1;
	while (i < size)
	{
		while (j < size - 1)
		{
			if (ft_strcmp(tab[j + 1], tab[j]) > 0)
			{
				tmp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = tmp;
				j = 1;
			}
			else
				j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	c = 0;
	i = argc - 1;
	ft_sort_int_tab(argv, argc);
	while (i > 0)
	{
		while (argv[i][c])
		{
			write(1, &argv[i][c], 1);
			c++;
		}
		c = 0;
		i--;
		write(1, "\n", 1);
	}
	return (0);
}
