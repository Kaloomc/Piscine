/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 11:07:07 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/22 11:07:09 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define BUFFER 29999

void	ft_read(int fd)
{
	char	s[BUFFER];
	int		i;

	i = (read(fd, &s, BUFFER));
	while (i > 0)
	{
		write(1, &s, i);
		i = (read(fd, &s, BUFFER));
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void	ft_print_error(char *av)
{
	ft_putstr("ft_cat");
	ft_putstr(": ");
	ft_putstr(av);
	ft_putstr(": ");
	ft_putstr(strerror(2));
	ft_putstr("\n");
}

void	read_stdin(void)
{
	char	*s[BUFFER];
	int		i;

	while (1)
	{
		i = read(0, &s, BUFFER);
		write(0, &s, i);
	}
}

int	main(int ac, char **av)
{
	int	fd;
	int	i;

	i = 1;
	if (ac == 1)
		read_stdin();
	while (av[i])
	{
		fd = open(av[i], O_RDONLY);
		if (fd == -1)
		{
			ft_print_error(av[i]);
			return (0);
		}
		ft_read(fd);
		close(fd);
		i++;
	}
	return (0);
}
