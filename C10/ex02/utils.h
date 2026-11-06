/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 12:41:55 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/25 12:41:59 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

void	ft_putstr(char *str);
char	*ft_strstr(char *str, char *to_find);
char *find_param(char **av, int size);
int	ft_atoi(char *str);
void ft_print_title(char *file_name);
void	ft_print_bytes(char **files, int size, int bytes);
void	printerror(char *file_name);

typedef struct s_stock_str
{
	int bytes;
	char **str;
} t_stock_str;

#endif
