/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtomishi <xxx@xxx>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 12:07:31 by rtomishi          #+#    #+#             */
/*   Updated: 2020/09/19 14:39:46 by rtomishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		error_f(int argc, char **argv);
char	*str_trans(char **argv);

int		main(int argc, char **argv)
{
	int f;
	char*str;

	f = error_f(argc, argv);
	if (f == 0)
		return (0);
	str = str_trans(argv);
	printf("%s \n", str);
	free(str);
	return (0);
}
