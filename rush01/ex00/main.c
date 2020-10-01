/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtomishi <xxx@xxx>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 12:07:31 by rtomishi          #+#    #+#             */
/*   Updated: 2020/09/20 21:02:34 by rkasubuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		error_f(int argc, char **argv);
int		check_zero(char *input);
char	*str_trans(char **argv);
void	*building(char *str);
void	output_print(char *input);

int		main(int argc, char **argv)
{
	int f;
	int i;
	char*str;
	char*out;

	i = 1;
	f = error_f(argc, argv);
	if (f == 0)
		return (0);
	str = str_trans(argv);
	out = building(str);
	printf("%s \n", out);
	if (check_zero(out) == 0)
		return (0);
	output_print(out);
	free(str);
	free(out);
	return (0);
}
