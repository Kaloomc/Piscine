/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 16:45:07 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/25 16:45:09 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
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
	
	printf("%d",ft_any(av,&ft_str_is_alpha));
}
*/
