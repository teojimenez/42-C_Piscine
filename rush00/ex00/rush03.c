/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:42:06 by teojimen          #+#    #+#             */
/*   Updated: 2023/07/09 18:36:15 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"

void	corner(int i, int j, int x, int y);

void	rush(int x, int y)
{
	int	j;
	int	i;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1 || i == y) && (j == 1 || j == x))
				corner(i, j, x, y);
			if ((i == 1 || i == y) && (j > 1 && j < x))
				putchar('B');
			if ((i > 1 && i < y) && (j == 1 || j == x))
				putchar('B');
			if ((i > 1 && i < y) && (j > 1 && j < x))
				putchar(' ');
			if (j == x)
				putchar('\n');
			j = j + 1;
		}
		i = i + 1;
	}
}

void	corner(int i, int j, int x, int y)
{
	if ((i == 1 && j == 1) || (i == y && j == 1))
	{
		return (putchar('A'));
	}
	if ((i == 1 && j == x) || (i == y && j == x))
	{
		return (putchar('C'));
	}
}
