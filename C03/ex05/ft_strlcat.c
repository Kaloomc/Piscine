/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 14:07:49 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/09 14:07:52 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	dlen = 0;
	slen = 0;
	while (dest[dlen])
		dlen++;
	while (src[slen])
		slen++;
	if (size <= dlen)
		return (slen + size);
	i = 0;
	j = dlen;
	while (src[i] && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}
/*
#include <stdio.h>

int main()
{
	unsigned int	i = 2;
	char src[] = " World";
	char dest[] = "Hello";
	printf("%d",ft_strlcat(dest, src,i));
	return 0;
}
*/
