/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bytes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 13:28:51 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/25 13:28:53 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "utils.h"

int	get_file_bytes(char *file_name)
{
	int	fd;
	char s[1];
	int	bytes;

	bytes = 0;
	fd = open(file_name, O_RDONLY);
	if(fd == -1)
		return (fd);
	while ((read(fd, &s, 1)) > 0)
	{
		bytes++;
	}
	close(fd);
	return (bytes);
}

void	ft_print_bytes(char **files, int size, int bytes)
{
	int i;
	int	currentbytes;
	char s[1];
	int fd;

	i = 0;
	currentbytes = 0;
	while (files[i])
	{
		fd = open(files[i], O_RDONLY);
		if (size > 1 && i != 0)
			ft_putstr("\n");
		if (size > 1)
			ft_print_title(files[i]);
		while ((read(fd, &s, 1)) > 0)
		{
			if (get_file_bytes(files[i]) - bytes <= currentbytes)
				write(1, &s[0], 1);
				currentbytes++;
		}
		close(fd);
		currentbytes = 0;
		i++;
	}
}
