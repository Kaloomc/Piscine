/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 12:35:04 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/18 19:47:31 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	get_base_len(char *base);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_fill_base(long nb, char *base, char *res, int i)
{
	int	baselen;

	baselen = get_base_len(base);
	while (nb > 0)
	{
		res[i++] = base[nb % baselen];
		nb /= baselen;
	}
	return (i);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int		baselen;
	int		i;
	long	nb;
	char	*res;

	baselen = get_base_len(base);
	if (baselen < 2)
		return (NULL);
	res = malloc(sizeof(char) * 34);
	if (!res)
		return (NULL);
	nb = nbr;
	i = 0;
	if (nb == 0)
		res[i++] = base[0];
	if (nb < 0)
	{
		res[i++] = '-';
		nb = -nb;
	}
	i = ft_fill_base(nb, base, res, i);
	res[i] = '\0';
	return (res);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = ft_strlen(str) - 1;
	if (str[0] == '-')
		i = 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	char	*res;

	if (get_base_len(base_from) < 2 || get_base_len(base_to) < 2)
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	res = ft_putnbr_base(nb, base_to);
	if (!res)
		return (NULL);
	res = ft_strrev(res);
	return (res);
}
/*
#include <stdio.h>
int main(int ac, char **av)
{
	if (ac != 4)
		return 0;
	printf("%s",ft_convert_base(av[1],av[2],av[3]));
	return 0;

}
*/
