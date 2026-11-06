/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:17:26 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/05 14:17:30 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_values(char n1, char n2, char n3)
{
	ft_putchar(n3);
	ft_putchar(n2);
	ft_putchar(n1);
	if (n3 < '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '1';
	n2 = '1';
	n3 = '0';
	while (n3 < '7')
	{
		if (n1 == '9')
		{
			n2++;
			n1 = n2;
		}
		if (n2 == '9')
		{
			n3++;
			n2 = n3 + 1;
			n1 = n3 + 1;
		}
		if (n1 != '9')
			n1++;
		ft_print_values(n1, n2, n3);
	}
}
