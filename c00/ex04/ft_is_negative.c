/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkasubuc <rkasubuc@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 14:38:14 by rkasubuc          #+#    #+#             */
/*   Updated: 2020/09/22 14:38:22 by rkasubuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	if (c != '\0')
		write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	(n < 0) ? ft_putchar('N') : ft_putchar('P');
}
