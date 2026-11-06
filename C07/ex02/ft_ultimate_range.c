/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 16:07:38 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/14 16:07:40 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	i = 0;
	if (*range == NULL)
		return (-1);
	while (min + i < max)
	{
		(*range)[i] = i + min;
		i++;
	}
	return (max - min);
}
/*
#include <stdio.h>
int    main(void)
{
    int    *arr;
    int    i;

    i = ft_ultimate_range(&arr, 1, 10);
    printf("size: %d\n", i);
    i = 0;
    while (i < 9)
    {
        printf("%d\n", arr[i]);
        i++;
    }
    free(arr);
    return (0);
}
*/
