/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 10:22:26 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/08 10:22:30 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while ((s1[i] == s2[i] && s1[i] && s2[i]) && c < n)
	{
		i++;
		c++;
	}
	if (c == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int main()
{
	char s1[] = "ABC4";
	char s2[] = "ABC45";
	unsigned int size = 3;
	printf("%d", ft_strncmp(s1,s2,size));
	return 0;

}
*/
