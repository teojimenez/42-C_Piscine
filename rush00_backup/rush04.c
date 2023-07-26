/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:42:06 by teojimen          #+#    #+#             */
/*   Updated: 2023/07/09 20:59:55 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"

void	corner(int x, int y, int j, int i);

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
				corner (x, y, j, i);
			else if ((i == 1 || i == y) && (j > 1 && j < x))
				putchar('B');
			else if ((i > 1 && i < y) && (j == 1 || j == x))
				putchar('B');
			else if ((i > 1 && i < y) && (j > 1 && j < x))
				putchar(' ');
			if (j == x)
				putchar('\n');
			j = j + 1;
		}
		i = i + 1;
	}
}

void	corner(int x, int y, int j, int i)
{
	if (i == 1 && j == 1)
		putchar('A');
	else if (i == y && j == x && y > 1 && x > 1)
		putchar('A');
	else if (i == 1 && j == x)
		putchar('C');
	else if (i == y && j == 1)
		putchar('C');
}
