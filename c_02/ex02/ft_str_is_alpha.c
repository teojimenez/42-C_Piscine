/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 02:01:10 by teojimen          #+#    #+#             */
/*   Updated: 2023/07/25 02:01:13 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			c = 1;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			c = 1;
		else if (str[i] == ' ')
			c = 1;
		else
			return (0);
		i++;
	}
	if (str[i] == '\0')
		c = 1;
	return (c);
}
