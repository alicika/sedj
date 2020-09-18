/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkasubuc <ass@ass.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 09:51:03 by rkasubuc          #+#    #+#             */
/*   Updated: 2020/09/18 09:51:16 by rkasubuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	if (c != '\0')
		write(1, &c, 1);
}

int		ft_print_comb2(void)
{
	int hako[2];

	hako[0] = -1;
	while (++hako[0] <= 98)
	{
		hako[1] = hako[0];
		while (++hako[1] <= 99)
		{
			ft_putchar((hako[0] / 10) + '0');
			ft_putchar((hako[0] % 10) + '0');
			ft_putchar(' ');
			ft_putchar((hako[1] / 10) + '0');
			ft_putchar((hako[1] % 10) + '0');
			if (hako[0] != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
