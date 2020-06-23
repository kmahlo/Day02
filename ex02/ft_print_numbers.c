/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahlo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 10:33:42 by kmahlo            #+#    #+#             */
/*   Updated: 2020/06/23 10:34:43 by kmahlo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int d)

{
	write(1, &d, 1);
}

void 	ft_print_numbers()

{
	int i;
	i = '0';
	while(i <= '9')
	{
		ft_putchar(i);
		i++;
	}
}

int main()
{
	ft_print_numbers();
		return(0);
}
