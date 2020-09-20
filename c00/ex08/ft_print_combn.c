/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkasubuc <ass@ass.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 23:41:13 by rkasubuc          #+#    #+#             */
/*   Updated: 2020/09/21 01:04:25 by rkasubuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int suji[9];
	int i;

	i = 1;
	while (i < 10)
	{
		suji[i] = i;
		ft_putchar(suji[i]);
	}
	return 0;
}
