/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_reverse_alphabet.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahlo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 10:16:02 by kmahlo            #+#    #+#             */
/*   Updated: 2020/06/23 10:57:38 by kmahlo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet()

{
	char i;
	i = 'z';
	while(i >= 'a')
	{
		ft_putchar(i);
			i--;
	}
}
int	main()
{
	ft_print_reverse_alphabet();
	return(0);
}
