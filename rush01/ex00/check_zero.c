/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_zero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsuetsug <tsuetsug@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 15:26:30 by tsuetsug          #+#    #+#             */
/*   Updated: 2020/09/20 20:30:23 by tsuetsug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_zero(char *input)
{
	int i;

	i = 0;
	while (input[i] != '\0')
	{
		if (input[i] == '0')
		{
			write(1, &"error", 6);
			return (0);
		}
		else
		{
			i++;
		}
	}
	return (1);
}
