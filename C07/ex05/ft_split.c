/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 10:27:13 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/18 13:56:48 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !is_sep(str[i], charset))
		i++;
	return (i);
}

char	*ft_strdup(char *src, char *charset)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * (ft_strlen(src, charset) + 1));
	while (src[i] && !is_sep(src[i], charset))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!is_sep(str[i], charset)
			&& (i == 0 || is_sep(str[i - 1], charset)))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		count;
	int		i;

	i = 0;
	count = 0;
	res = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!res)
		return (NULL);
	while (str[i])
	{
		if (!is_sep(str[i], charset)
			&& (i == 0 || is_sep(str[i - 1], charset)))
		{
			res[count] = ft_strdup(&str[i], charset);
			count++;
		}
		i++;
	}
	res[count] = NULL;
	return (res);
}
/*
#include <unistd.h>
int main(int ac, char **av)
{
int		i;
int		c;
char 	**res;

printf("nombre de mots : %d", count_words(av[1],av[2]));
res = ft_split(av[1],av[2]);

c = 0;
i = 0;
while (res[i])
{
while (res[i][c])
{
write(1, &res[i][c], 1);
c++;
}
c = 0;
i++;
write(1, "\n", 1);
}
(void)ac;
return (0);
}
*/
