/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:27:03 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/25 17:27:04 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		add(int a, int b);
int		sub(int a, int b);
int		mod(int a, int b);
int		div(int a, int b);
int		mult(int a, int b);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);

int	ft_search(char *str, char to_find)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == to_find)
			return (i);
		i++;
	}
	return (-1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	op_search(char c, int b)
{
	int	op;

	op = ft_search("+-*/%", c);
	if (op == -1)
		ft_putstr("0\n");
	if (op == 3 && b == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (-1);
	}
	else if (op == 4 && b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (-1);
	}
	return (op);
}

void	ft_print(char *a, char *b, int (*f)(int, int))
{
	int	res;

	res = f(ft_atoi(a), ft_atoi(b));
	ft_putnbr(res);
	ft_putstr("\n");
}

int	main(int ac, char **av)
{
	int	(*f[5])(int, int);

	f[0] = &add;
	f[1] = &sub;
	f[2] = &mult;
	f[3] = &div;
	f[4] = &mod;
	if (ac != 4)
		return (0);
	if (op_search(av[2][0], ft_atoi(av[3])) == -1)
		return (0);
	ft_print(av[1], av[3], f[op_search(av[2][0], ft_atoi(av[3]))]);
	return (0);
}
