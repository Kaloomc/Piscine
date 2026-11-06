/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 16:18:08 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/25 16:18:08 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*tabres;

	tabres = malloc(sizeof(int) * (length + 1));
	i = 0;
	while (i < length)
	{
		tabres[i] = f(tab[i]);
		i++;
	}
	tabres[i] = '\0';
	return (tabres);
}
/*
int	multiply_by_2(int nb)
{
	return (nb * 2);
}

#include <stdio.h>
int main()
{
	int tab[] = {1,2,3,4,10000};
	int *newtab;
	int i = 0;
	newtab = ft_map(tab, 5, &multiply_by_2);
	while (newtab[i])
		printf("%d\n",newtab[i++]);
	return 0;
}
*/
