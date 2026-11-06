/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 11:05:13 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/25 11:05:14 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "utils.h"

int	get_file_line(char *file_name)
{
	int	fd;
	char s[1];
	int	line;

	line = 0;
	fd = open(file_name, O_RDONLY);
	if(fd == -1)
		return (fd);
	while ((read(fd, &s, 1)) > 0)
	{
		if(s[0] == '\n' || s[0] == '\0')
			line++;
	}
	close(fd);
	return (line);
}

void ft_print_title(char *file_name)
{
	ft_putstr("==>");
	ft_putstr(file_name);
	ft_putstr("<==\n");
}

void	ft_print(char **files, int size)
{
	int i;
	int	line;
	char s[1];
	int fd;

	i = 0;
	line = 0;
	while (files[i])
	{
		fd = open(files[i], O_RDONLY);
		if (fd == -1)
		{
			printerror(files[i]);
		}
		else
		{
			if (size > 1 && i != 0)
				ft_putstr("\n");
			if (size > 1)
				ft_print_title(files[i]);
			while ((read(fd, &s, 1)) > 0)
			{
				if (get_file_line(files[i]) - 10 <= line)
					write(1, &s[0], 1);
				if (s[0] == '\n' || s[0] == '\0')
					line++;
			}
		}
		close(fd);
		line = 0;
		i++;
	}
}

#include <stdio.h>
int	main(int ac, char **av)
{
	int bytes;
	char *par;
	par = find_param(&av[1], ac - 1);
	if(par)
	{
		bytes = ft_atoi(par);
		if(bytes == -1)
		{
			ft_putstr("ft_tail: invalid number of bytes: '");
			ft_putstr(par);
			ft_putstr("'\n");
		}
		else
			ft_print_bytes(&av[1], ac - 2, bytes);
	}
	else	
		ft_print(&av[1], ac - 1);
	return(0);
}
