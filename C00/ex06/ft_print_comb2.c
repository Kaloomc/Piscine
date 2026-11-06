/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:18:44 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/05 17:18:58 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (b <= 98)
	{
		while (a < 99)
		{
			a++;
			ft_putchar(b / 10 + '0');
			ft_putchar(b % 10 + '0');
			ft_putchar(' ');
			ft_putchar(a / 10 + '0');
			ft_putchar(a % 10 + '0');
			if (b != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		a = b + 1;
		b++;
	}
}
