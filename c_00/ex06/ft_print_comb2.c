/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teojimen <teojimen@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:38:38 by teojimen          #+#    #+#             */
/*   Updated: 2023/07/06 18:54:43 by teojimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void ft_print_comb2(void);
void ft_write(char a, char b, char c, char d);

int main(void)
{
    ft_print_comb2();
    return (0);
}

void ft_print_comb2(void)
{
    char n1;
    char n2;
    char n3;
	char n4;
	bool p;

	p = false;
    n1 = '0';
    while(n1 <= '9')
    {
        if (p)
		{
  			n2 = n1 + 1;
		}
		else
		{
  			n2 = '0';
		}
		while(n2 <= '8')
        {
			if (p)
			{
  				n3 = '0';
			}	
			else
			{
  				n3 = '0';
			}
            while(n3 <= '9')
            {
                if (n2 != 0)
				{
  					n4 = n3 + 1;
				}
				else
				{
					n4 = 0;
				}
				while(n4 <= '9')
				{
					p = true;
					ft_write(n1, n2, n3, n4);
					n4++;				
				}
				n4 = '0';
                n3++;
            }
            n3 = '0';
            n2++;
        }
        n2 = '0';
        n1++;
    }
}

void ft_write(char a, char b, char c, char d)
{
    char coma;
    char vacio;

    coma = ',';
    vacio = ' ';
    write(1, &a, 1);
    write(1, &b, 1);
	write(1, &vacio, 1);
    write(1, &c, 1);
	write(1, &d, 1);
    write(1, &coma, 1);
    write(1, &vacio, 1);
}

