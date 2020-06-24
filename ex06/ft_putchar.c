/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahlo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:00:11 by kmahlo            #+#    #+#             */
/*   Updated: 2020/06/24 10:41:44 by kmahlo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)

{
	if(nb<0)
	{
		ft_putchar('-');
		nb = -nb;
	}	
	if(nb/10 > 0)
			ft_putnbr(nb/10);
			ft_putchar(nb%10 + '0');
}

int		main()
{
	ft_putnbr(42);
	return 0;
}
