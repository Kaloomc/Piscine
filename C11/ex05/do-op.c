/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgarnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:23:50 by fgarnier          #+#    #+#             */
/*   Updated: 2025/08/25 17:23:52 by fgarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	mult(int a, int b)
{
	return (a * b);
}

int	add(int a, int b)
{
	return (a + b);
}

int	sub(int a, int b)
{
	return (a - b);
}

int	div(int a, int b)
{
	return (a / b);
}

int	mod(int a, int b)
{
	return (a % b);
}
