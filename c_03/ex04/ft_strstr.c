/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:00:11 by teojimen          #+#    #+#             */
/*   Updated: 2023/07/26 11:35:32 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*t;

	while (*str != '\0')
	{
		if (*str == '\0')
			return (NULL);
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

int	main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%s", ft_strstr(argv[1], argv[2]));
	return (0);
}
