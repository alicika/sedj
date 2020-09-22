/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkasubuc <a@a.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 14:18:05 by rkasubuc          #+#    #+#             */
/*   Updated: 2020/09/22 14:56:08 by rkasubuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printloop(int n, char str[], int pos, int *flg);
void	ft_print(char str[], int pos, int nb, int *flg);

void	ft_print_combn(int n)
{
	char	str[n - 1];
	int		flg;

	flg = 0;
	if (1 <= n && n <= 9)
	{
		ft_printloop(n, str, 1, &flg);
	}
}

void	ft_printloop(int n, char str[], int pos, int *flg)
{
	char	nb;

	nb = '0';
	if (2 <= pos)
	{
		nb = str[pos - 2] + 1;
	}
	while (nb <= '9')
	{
		if (pos == n)
		{
			ft_print(str, pos, nb, flg);
		}
		else
		{
			str[pos - 1] = nb;
			pos++;
			ft_printloop(n, str, pos, flg);
			pos--;
		}
		nb++;
	}
}

void	ft_print(char str[], int pos, int nb, int *flg)
{
	int		i;

	if (*flg)
	{
		write(1, ", ", 2);
	}
	*flg = 1;
	i = 0;
	while (i < pos - 1)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, &nb, 1);
}
