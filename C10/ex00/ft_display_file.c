/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:06:13 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/21 18:55:19 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_read(int fd)
{
	char	s[1];

	while ((read(fd, &s, 1)) > 0)
	{
		write(1, &s, 1);
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int	main(int ac, char **av)
{
	int		fd;

	if (ac != 2)
	{
		if (ac < 2)
			ft_putstr("File name missing.\n");
		else
			ft_putstr("Too many arguments.\n");
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (0);
	}
	ft_read(fd);
	close(fd);
	return (0);
}
