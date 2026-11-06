/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 11:13:58 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/13 11:14:07 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	c = 0;
	i = 1;
	while (argv[i])
	{
		while (argv[i][c])
		{
			write(1, &argv[i][c], 1);
			c++;
		}
		c = 0;
		i++;
		write(1, "\n", 1);
	}
	(void)argc;
	return (0);
}
