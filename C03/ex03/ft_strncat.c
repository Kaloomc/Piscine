/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 13:32:00 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/09 13:32:01 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (dest[len])
		len++;
	while (src[i] && i < nb)
	{
		dest[i + len] = src[i];
		i++;
	}
	dest[i + len] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main()
{
	unsigned int	i = 2;
	char src[] = " World";
	char dest[] = "Hello";
	printf("%s",ft_strncat(dest, src,i));
	return 0;
}
*/
