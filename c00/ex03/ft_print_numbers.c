/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkasubuc <rkasubuc@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 14:36:48 by rkasubuc          #+#    #+#             */
/*   Updated: 2020/09/22 14:36:57 by rkasubuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char b)
{
	write(1, &b, 1);
}

void	ft_print_numbers(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		ft_putchar(c++);
	}
}
