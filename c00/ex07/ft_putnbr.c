/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkasubuc <rkasubuc@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 14:48:19 by rkasubuc          #+#    #+#             */
/*   Updated: 2020/09/22 14:54:13 by rkasubuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

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
		ft_putnbr(b / 10);
	}
	ft_putchar(b % 10 + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
