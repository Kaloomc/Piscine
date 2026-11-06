/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:26:51 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/12 15:26:54 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb;
	if (power >= 0)
		return (result * ft_recursive_power(nb,power - 1));
	return (1);
}

/*
#include <stdio.h>
int main()
{
	printf("%d\n",ft_recursive_power(1000,0));
	printf("%d\n",ft_recursive_power(10,4));
	printf("%d\n",ft_recursive_power(2,16));
	return 0;
}
*/
