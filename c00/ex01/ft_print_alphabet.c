/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkasubuc <aaaaaaaaaaaa@co.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 07:32:00 by rkasubuc          #+#    #+#             */
/*   Updated: 2020/09/17 08:11:41 by rkasubuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(char moji)
{
	moji = 'a';
	while (moji != '\0')
		if (moji > 'z')
			moji = 0;
		else
			moji++;
}

int		main(void)
{
	return (0);
}
