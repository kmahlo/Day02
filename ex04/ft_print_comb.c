/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahlo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 10:55:31 by kmahlo            #+#    #+#             */
/*   Updated: 2020/06/23 10:55:35 by kmahlo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb()
{
    char i;
    char j;
    char k;
    i = '0';

    while(i <= '7')
    {
        j = i + 1;
            while(j <= '8')
            {
                k = i + 1;
                    while(k <= '9')
                    {
                        ft_putchar(i);
                        ft_putchar(j);
                        ft_putchar(k);
                        ft_putchar(',');
                        ft_putchar(' ');
                        k = k + 1;
                    }
                    j = j + 1;
            }
            i = i + 1;
    }
}

int main()
{
    ft_print_comb();
    ft_putchar('\n');
   return 0; }	
