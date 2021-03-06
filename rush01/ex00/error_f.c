/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_f.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtomishi <xxx@xxx>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 14:08:18 by rtomishi          #+#    #+#             */
/*   Updated: 2020/09/19 14:39:16 by rtomishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		error_f(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc != 2)
		return (0);
	while (argv[1][i] != '\0')
	{
		if (!((argv[1][i] >= '1' && argv[1][i] <= '4') || argv[1][i] == ' '))
			return (0);
		i += 1;
	}
	if (i != 31)
		return (0);
	return (1);
}
