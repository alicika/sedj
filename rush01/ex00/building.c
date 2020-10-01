/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   building.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtomishi <xxx@xxx>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 18:26:24 by rtomishi          #+#    #+#             */
/*   Updated: 2020/09/20 21:02:09 by rkasubuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	box_set(char *str, char *out);
void	box_check(int i, char *str, char *out);

char	*building(char *str)
{
	int i;
	char*out;

	i = 0;
	out = (char *)malloc(16);
	while (i < 16)
	{
		out[i] = '0';
		i += 1;
	}
	out[i] = '\0';
	box_set(str, out);
	while (i < 10)
	{
		box_check(0, str, out);
		i += 1;
	}
	return (out);
}
