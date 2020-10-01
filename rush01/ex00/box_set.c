/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   building.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtomishi <xxx@xxx>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 18:26:24 by rtomishi          #+#    #+#             */
/*   Updated: 2020/09/20 20:38:33 by rkasubuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	colup_mod(int i, char *str, char *out)
{
	while (i < 4)
	{
		if (str[i] == '4')
		{
			out[i + 0] = '1';
			out[i + 4] = '2';
			out[i + 8] = '3';
			out[i + 12] = '4';
		}
		if (str[i] == '1' && str[i + 4] == '2')
		{
			out[i + 0] = '4';
			out[i + 12] = '3';
		}
		if (str[i] == '1')
			out[i + 0] = '4';
		if (str[i] == '2' && str[i] == '3')
			out[i + 4] = '4';
		i += 1;
	}
}

void	coldown_mod(int i, char *str, char *out)
{
	while (i < 8)
	{
		if (str[i] == '4')
		{
			out[i + 8 - 0] = '1';
			out[i + 8 - 4] = '2';
			out[i + 8 - 8] = '3';
			out[i + 8 - 12] = '4';
		}
		if (str[i] == '1' && str[i - 4] == '2')
		{
			out[i + 8 - 0] = '4';
			out[i + 8 - 12] = '3';
		}
		if (str[i] == '1')
			out[i + 8 - 0] = '4';
		if (str[i] == '2' && str[i] == '3')
			out[i + 8 - 4] = '4';
		i += 1;
	}
}

void	rowleft_mod(int i, char *str, char *out)
{
	while (i < 12)
	{
		if (str[i] == '4')
		{
			out[(i - 8) * 4 + 0] = '1';
			out[(i - 8) * 4 + 1] = '2';
			out[(i - 8) * 4 + 2] = '3';
			out[(i - 8) * 4 + 3] = '4';
		}
		if (str[i] == '1' && str[i + 4] == '2')
		{
			out[(i - 8) * 4 + 0] = '4';
			out[(i - 8) * 4 + 3] = '3';
		}
		if (str[i] == '1')
			out[(i - 8) * 4 + 0] = '4';
		if (str[i] == '2' && str[i + 4] == '3')
			out[(i - 8) * 4 + 1] = '4';
		i += 1;
	}
}

void	rowright_mod(int i, char *str, char *out)
{
	while (i < 16)
	{
		if (str[i] == '4')
		{
			out[(i - 12) * 4 + 3 - 0] = '1';
			out[(i - 12) * 4 + 3 - 1] = '2';
			out[(i - 12) * 4 + 3 - 2] = '3';
			out[(i - 12) * 4 + 3 - 3] = '4';
		}
		if (str[i] == '1' && str[i - 4] == '2')
		{
			out[(i - 12) * 4 + 3 - 0] = '4';
			out[(i - 12) * 4 + 3 - 3] = '3';
		}
		if (str[i] == '1')
			out[(i - 12) * 4 + 3 - 0] = '4';
		if (str[i] == '2' && str[i - 4] == '3')
			out[(i - 12) * 4 + 3 - 1] = '4';
		i += 1;
	}
}

void	box_set(char *str, char *out)
{
	colup_mod(0, str, out);
	coldown_mod(4, str, out);
	rowleft_mod(8, str, out);
	rowright_mod(12, str, out);
}
