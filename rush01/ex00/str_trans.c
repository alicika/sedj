/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_trans.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtomishi <xxx@xxx>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 12:12:46 by rtomishi          #+#    #+#             */
/*   Updated: 2020/09/19 14:40:39 by rtomishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*str_trans(char **argv)
{
	int i;
	int j;
	char*str;

	i = 0;
	j = 0;
	str = (char *)malloc(32);
	while (i < 31)
	{
		if (argv[1][i] >= '1' && argv[1][i] <= '4')
		{
			str[j] = argv[1][i];
			j += 1;
		}
		i += 1;
	}
	str[j] = '\0';
	return (str);
}