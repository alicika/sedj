/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkasubuc <ass@ass.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 09:20:31 by rkasubuc          #+#    #+#             */
/*   Updated: 2020/09/18 09:20:48 by rkasubuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char b)
{
    write(1, &b, 1);
}

void	ft_print_reverse_alphabet(void)
{
    char c;

    c = 'z';
    while (c >= 'a')
    {
        ft_putchar(c--);
    }
}

