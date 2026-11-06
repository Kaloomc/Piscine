/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_vue.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjourdai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 15:21:41 by tjourdai          #+#    #+#             */
/*   Updated: 2025/08/16 15:40:56 by tjourdai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_input(int **grids_view)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (((grids_view[0][i] + grids_view[1][i]) < 3
			|| (grids_view[0][i] + grids_view[1][i]) > 5)
			|| ((grids_view[2][i] + grids_view[3][i]) < 3
			|| (grids_view[2][i] + grids_view[3][i]) > 5))
			return (0);
		i++;
	}
	return (1);
}
