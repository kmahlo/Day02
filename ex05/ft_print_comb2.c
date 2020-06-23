/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahlo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 10:58:24 by kmahlo            #+#    #+#             */
/*   Updated: 2020/06/23 10:58:28 by kmahlo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2()
{
	char a;
	char b;
	a = 0;
		while(a < 99 )
		{
			b= a + 1;
			while(b <= 99)
			{
				ft_putchar(a/10 + '0');
				ft_putchar(a%10 + '0');
				ft_putchar(' ');
				ft_putchar(b/10 + '0');
				ft_putchar(b%10 + '0');
				ft_putchar(',');
				ft_putchar(',');
				b++;
			}
			a = a + 1;
			}
}

