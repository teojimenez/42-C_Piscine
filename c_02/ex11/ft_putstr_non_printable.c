/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:00:51 by teojimen          #+#    #+#             */
/*   Updated: 2023/07/19 00:29:45 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	dec_to_hex(char c)
{
	char	*base;

	base = "0123456789abcdef";
	putchar(base[c / 16]);
	putchar(base[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return ;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			putchar('\\');
			dec_to_hex(str[i]);
		}
		else
			putchar(str[i]);
		i++;
	}
}

// int	main(void)
// {
// 	char	*str;

// 	str = NULL;
// 	ft_putstr_non_printable(str);
// 	return (0);
// }
