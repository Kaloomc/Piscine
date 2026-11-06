/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 18:12:27 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/12 18:51:31 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	res;

	res = 1;
	while (res * res < nb && res < 46430)
		res++;
	if (res * res == nb)
		return (res);
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d",ft_sqrt(2147483647));
	return 0;
}
*/
