/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:22:16 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/25 18:22:18 by fgarnier         ###   ########.fr       */
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

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = 0;
	while (tab[i])
	{
		while (tab[j + 1])
		{
			if (ft_strcmp(tab[j + 1], tab[j]) < 0)
			{
				tmp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = tmp;
				j = 0;
			}
			else
				j++;
		}
		i++;
	}
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	ft_sort_int_tab(argv);
	while (argv[i])
	{
		printf("%s\n", argv[i++]);
	}
	return (0);
}
*/
