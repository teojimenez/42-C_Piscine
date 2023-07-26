/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:39:18 by teojimen          #+#    #+#             */
/*   Updated: 2023/07/26 12:28:52 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

//int	main()
//{
// char s1[] = "Hom";
// char s2[] = "Hol";
// printf("%i", strncmp(s1, s2, 3));
// printf("%i", ft_strncmp(s1, s2, 3));
// return 0;
//}
