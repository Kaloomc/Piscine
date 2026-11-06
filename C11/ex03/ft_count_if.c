/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:00:30 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/25 17:00:32 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < length)
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}

/*
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 97 && str[i] <= 122)
			|| (str[i] >= 65 && str[i] <= 90))
			i++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	
	printf("%d",ft_count_if(&av[1],ac - 1,&ft_str_is_alpha));
}
*/
