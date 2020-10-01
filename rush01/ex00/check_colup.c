/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   building.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtomishi <xxx@xxx>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 18:26:24 by rtomishi          #+#    #+#             */
/*   Updated: 2020/09/20 09:11:15 by rtomishi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	check_colup1(int i, char *str, char *out)
{
    if (str[i] == '1' && str[i + 4] == '2' && out[i + 4] == '2')
        out[i + 8] = '1';
    if (str[i] == '1' && str[i + 4] == '2' && out[i + 8] == '2')
        out[i + 4] = '1';
    if (str[i] == '1' && str[i + 4] == '3' && out[i + 4] == '1')
    {
        out[i + 8] = '3';
        out[i + 12] = '2';
    }
    if (str[i] == '1' && str[i + 4] == '3' && out[i + 4] == '2')
    {
        out[i + 8] = '3';
        out[i + 12] = '1';
    }
    if (str[i] == '1' && str[i + 4] == '3' && out[i + 4] == '3')
    {
        out[i + 8] = '1';
        out[i + 12] = '2';
    }
}

void    check_colup2(int i, char *str, char *out)
{
    if (str[i] == '2' && str[i + 4] == '2' && out[i + 8] == '2')
    {
        out[i + 0] = '1';
        out[i + 4] = '4';
        out[i + 12] = '3';
    }
    if (str[i] == '2' && str[i + 4] == '2' && out[i + 8] == '4')
    {
        out[i + 0] = '2';
        out[i + 4] = '1';
        out[i + 12] = '3';
    }
    if (str[i] == '2' && str[i + 4] == '2' && out[i + 8] == '1')
    {
        out[i + 0] = '2';
        out[i + 4] = '4';
        out[i + 12] = '3';
    }
}

void    check_colup3(int i, char *str, char *out)
{
    if (str[i] == '2' && str[i + 4] == '3' && out[i + 0] == '1')
    {
        out[i + 8] = '3';
        out[i + 12] = '2';
    }
    if (str[i] == '2' && str[i + 4] == '3' && out[i + 0] == '2')
    {
        out[i + 8] = '3';
        out[i + 12] = '1';
    }
    if (str[i] == '2' && str[i + 4] == '3' && out[i + 0] == '3')
    {
        out[i + 8] = '2';
        out[i + 12] = '1';
    }
}

void    check_colup(int i, char *str, char *out)
{
    check_colup1(i, str, out);
    check_colup2(i, str, out);
    check_colup3(i, str, out);
}
