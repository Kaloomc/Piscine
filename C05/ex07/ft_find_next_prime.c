/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 18:54:23 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/12 18:55:54 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb == 0 || nb == 1)
			nb =ft_find_next_prime(nb + 1);
	i = 2;
	while (i <= nb)
	{
		if (i != nb && nb % i == 0)
			nb = ft_find_next_prime(nb + 1);
		i++;
	}
	return (nb);
}
#include <stdio.h>
int	main()
{
	printf("%d",ft_find_next_prime(0));
	
	return 0;
}
