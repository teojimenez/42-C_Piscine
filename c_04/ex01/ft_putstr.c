/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:33:29 by teojimen          #+#    #+#             */
/*   Updated: 2023/07/27 10:41:03 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
}

//int	main(void)
//{
//	char str[] = "HOLA me llamo teo";
//	ft_putstr(str);
//	return (0);
//}
