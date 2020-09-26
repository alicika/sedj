/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkasubuc <rkasubuc@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 00:41:11 by rkasubuc          #+#    #+#             */
/*   Updated: 2020/09/26 00:41:49 by rkasubuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i < size)
	{
		j = size - 1;
		while (j > i)
		{
			if (tab[j] < tab[j - 1])
			{
				temp = tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = temp;
			}
			j--;
		}
		i++;
	}
}
