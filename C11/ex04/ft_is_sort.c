/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:04:54 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/25 17:04:56 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			break ;
		i++;
	}
	if (i == length - 1)
		return (1);
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			break ;
		i++;
	}
	if (i == length - 1)
		return (1);
	return (0);
}
/*
int	int_compare(int a, int b)
{
	return(a - b);
}

#include <stdio.h>
int main()
{
	int tab[] = {2,1,-2,-2,-6};
	printf("%d",ft_is_sort(tab,5,&int_compare));
}
*/
