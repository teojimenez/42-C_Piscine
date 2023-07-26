/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:02:07 by teojimen          #+#    #+#             */
/*   Updated: 2023/07/26 19:27:37 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = str_len(dest);
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

//counter = contar los espacios sin null para despues empezar a contar los NULL
//y asi poder saber cuanto espacio hay
//para que cuente 1 menos en src, en dest y deje uno en el final(NULL)

// int main()
// {
// char s1[14] = "Hola_";
// char s2[7] = "mundo";
// //printf("%s", strcat(s1, s2));
// printf("%s", ft_strcat(s1, s2));
// return 0;
// }
