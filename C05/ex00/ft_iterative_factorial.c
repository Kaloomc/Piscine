/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:32:06 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/12 14:53:50 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	resultat;

	resultat = 1;
	i = nb;
	if (nb < 0)
		return (0);
	while (i > 0)
	{
		resultat *= i;
		i--;
	}
	return (resultat);
}
/*
#include <stdio.h>

int main()
{
	printf("%d",ft_iterative_factorial(5));
	return(0);
}
*/
