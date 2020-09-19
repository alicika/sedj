# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_putnbr                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkasubuc <aaaaaaaaaaaaaaa@a.a>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/18 11:26:59 by rkasubuc          #+#    #+#              #
#    Updated: 2020/09/18 22:31:13 by rkasubuc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include <unistd.h>

void	ft_putchar(char c);
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int b;

	b = nb;
	if (b < 0)
	{
		ft_putchar('-');
		b = -b;
	}
	if (b > 9)
	{
		ft_putnbr(n / 10);
		
	}
	ft_putchar(n % 10 + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}