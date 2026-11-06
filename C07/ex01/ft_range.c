/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 11:34:39 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/14 11:34:41 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
	{
		return (NULL);
	}
	i = 0;
	tab = malloc(sizeof(int) * (max - min));
	while (min + i < max)
	{
		tab[i] = i + min;
		i++;
	}
	return (tab);
}
/*
#include <stdio.h>
int main()
{
	int	*tab;
	int i = 0;
	tab = ft_range(1,20);
	if (tab == 0)
		return 0;
	while (tab[i])
	{
		printf("%d",tab[i]);
		printf(", ");
		i++;
	}
	return 0;
}
*/
