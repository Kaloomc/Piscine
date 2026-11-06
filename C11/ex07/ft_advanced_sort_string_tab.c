/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 10:33:47 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/28 10:34:36 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
*/
void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
			if (cmp(tab[j + 1], tab[j]) < 0)
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
	ft_advanced_sort_string_tab(argv, &ft_strcmp);
	while (argv[i])
	{
		printf("%s\n", argv[i++]);
	}
	return (0);
}
*/
