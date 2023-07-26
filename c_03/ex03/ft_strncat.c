/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:41:02 by teojimen          #+#    #+#             */
/*   Updated: 2023/07/26 11:41:12 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*dest == '\0' && *src == '\0')
		return (0);
	while (dest[i] != '\0')
		i++;
	j = i;
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

// int main()
// {
//  char s1[8] = "43ed"; //dst
//  char s2[8] = "439999";
//  //printf("%s", strncat(s1, s2, 3));
//  printf("%s", ft_strncat(s1, s2, 3));
//  return 0;
// }
