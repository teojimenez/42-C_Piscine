/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:00:11 by teojimen          #+#    #+#             */
/*   Updated: 2023/07/27 10:24:07 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*t;

	if (!*str && !*to_find)
		return (str);
	while (*str != '\0')
	{
		if (*to_find == '\0')
			return (str); 
		s = str;
		t = to_find;
		while (*to_find != '\0' && *s == *t)
		{
			s++;
			t++;
		}
		if (*t == '\0')
			return (str);
		str++;
	}
	return (NULL);
}

// int	main(int argc, char *argv[])
// {
// 	if (argc == 3)
// 		printf("%s", ft_strstr(argv[1], argv[2]));
// 	return (0);
//}
