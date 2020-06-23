/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahlo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 10:03:18 by kmahlo            #+#    #+#             */
/*   Updated: 2020/06/23 10:33:10 by kmahlo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet()
{
	char i;
	i = 'a';
	while(i <= 'z')
	{
		ft_putchar(i);
			i++;
	}
}

int	main()
{
	ft_print_alphabet();
		return(0);
}
