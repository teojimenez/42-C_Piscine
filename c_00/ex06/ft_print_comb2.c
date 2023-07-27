/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:21:10 by teojimen          #+#    #+#             */
/*   Updated: 2023/07/27 17:57:41 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_combine(int num1, int num2, char *result)
{
	result[0] = num1 / 10 + '0';
	result[1] = num1 % 10 + '0';
	result[2] = ' ';
	result[3] = num2 / 10 + '0';
	result[4] = num2 % 10 + '0';
	return (*result);
}

void	ft_print_comb2(void)
{
	int		num1;
	int		num2;
	char	combine[5];

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_combine(num1, num2, combine);
			write(1, &combine, 5);
			if (num1 < 98 || num2 < 99)
				write(1, ", ", 2);
			num2++;
		}
		num1++;
	}
}

//int main() {
//  ft_print_comb2();
//  return 0;
//}
