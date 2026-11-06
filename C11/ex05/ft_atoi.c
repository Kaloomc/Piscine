/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 09:55:31 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/10 11:43:45 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t'
		|| c == '\r' || c == '\v'
		|| c == '\f');
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	signe;

	i = 0;
	signe = 1;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	if (str[i] < '0' || str[i] > '9')
		return (0);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * signe);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char **argv)
{
	printf("%d",ft_atoi(argv[1]));
	printf("%d",atoi(argv[1]));
	return 0;

}
*/
