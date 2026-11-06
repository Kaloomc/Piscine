/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 17:42:14 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/14 17:42:16 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (dest[len])
		len++;
	while (src[i])
	{
		dest[i + len] = src[i];
		i++;
	}
	dest[i + len] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*return_empty(void)
{
	char	*res;

	res = malloc(sizeof(char));
	res[0] = '\0';
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		nbchar;
	int		i;

	i = 0;
	nbchar = 0;
	if (size == 0)
		return (return_empty());
	while (i < size)
		nbchar += ft_strlen(strs[i++]);
	res = malloc(sizeof(char) * (nbchar + (ft_strlen(sep) * (size - 1)) + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	res[i] = '\0';
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i < size - 1)
			ft_strcat(res, sep);
		i++;
	}
	return (res);
}

#include <stdio.h>
int main(int ac, char **av)
{
	char *res; 
	char *sep = " / ";
	int size = 0;
	res = ft_strjoin(ac,av,sep);
	printf("%s\n",res);
	free(res);
	return 0;
}
