/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:07:10 by teojimen          #+#    #+#             */
/*   Updated: 2023/07/18 17:30:42 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//int main() {
//  int tab[] = {918, 83, 23, 11, 1, 0, 321};
//  
//  int *ptab;
//  ptab = tab;
//  int size = 7;
//  
//  ft(ptab, size);
//  
//  return 0;
//}

void	ft_sort_int_tab(int *tab, int size)
{
	int	step;
	int	i;
	int	temp;

	step = 0;
	while (step < size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		step++;
	}
}
