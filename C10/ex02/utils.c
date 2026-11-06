/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 11:32:54 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/25 11:35:03 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utils.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	j;

	j = 0;
	while (str[j] == to_find[j] && to_find[j])
		j++;
	if (to_find[j] == '\0')
				return (&str[j]);
	return (0);
}

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

	i = 0;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] < '0' || str[i] > '9')
		return (-1);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	if(str[i] && str[i] < '0' || str[i] > '9')
		return -1;
	return (result);
}

void	printerror(char *file_name)
{
	ft_putstr("ft_tail: cannot open '");
	ft_putstr(file_name);
	ft_putstr("' for reading: No such file or directory\n");
}
