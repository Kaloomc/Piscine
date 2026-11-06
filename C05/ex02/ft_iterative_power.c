/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:07:19 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/12 15:17:18 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb;
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*
#include <stdio.h>
int main()
{
	printf("%d\n",ft_iterative_power(1000,0));
	printf("%d\n",ft_iterative_power(10,4));
	printf("%d\n",ft_iterative_power(2,16));
	return 0;
}
*/
