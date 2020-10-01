/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   building.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtomishi <xxx@xxx>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 18:26:24 by rtomishi          #+#    #+#             */
/*   Updated: 2020/09/20 20:36:14 by rkasubuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	check_colup(int i, char *str, char *out);
void	check_coldown(int i, char *str, char *out);
void	check_rowleft(int i, char *str, char *out);
void	check_rowright(int i, char *str, char *out);

char	*box_check(int i, char *str, char *out)
{
	while (i < 4)
	{
		check_colup(i, str, out);
		i += 1;
	}
	while (i < 8)
	{
		check_coldown(i, str, out);
		i += 1;
	}
	while (i < 12)
	{
		check_rowleft(i, str, out);
		i += 1;
	}
	while (i < 16)
	{
		check_rowright(i, str, out);
		i += 1;
	}
	return (out);
}
