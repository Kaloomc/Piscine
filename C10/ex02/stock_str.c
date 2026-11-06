/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 15:19:13 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/25 15:19:17 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

struct s_stock_str array(char **av)
{
	struct s_stock_str arr;
	int	i = 0;

	i = 0;
	arr.str = malloc(sizeof(char) * 4096)
	while (av[i])
	{
		if(find_param(av[i]) == 0)
			arr.str = 
	
	}

}

int	find_param(char *av, int i)
{
	char *par;
	int	value;
	
	par = ft_strstr(av[i])
	if (!par)
		return 0; // pas un -c
	if (par[0] == '\0')
		return 1; //si c'est juste -c
	if (ft_atoi(par))
		return 2; //"-cpasvalide"
	return (3); //-c collé valide
	
}
