/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 21:34:02 by teojimen          #+#    #+#             */
/*   Updated: 2023/07/25 21:34:04 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_p(int n3, int n4, char *str, int *i)
{
	int	result;

	result = *i + 1;
	if (str[result] > n3 && str[result] < n4)
	{
		str[result] = str[result] - 32;
		*i = *i + 1;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] > 96 && str[0] < 123)
			str[i] = str[i] - 32;
		else if (str[i] > 31 && str[i] < 48)
			ft_p(96, 123, str, &i);
		else if (str[i] > 57 && str[i] < 65)
			ft_p(96, 123, str, &i);
		else if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

//int	main()
//{
//  char	vstr[] = "quarante-deux; cinquante+et+un";
//  char	*str;
//  str = vstr;
//  ft_strcapitalize(str);
//}
