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

void	check_rowright1(int i, char *str, char *out)
{
    if (str[i] == '1' && str[i - 4] == '2' && out[(i - 12) * 4 + 2] == '2')
        out[(i - 12) * 4 + 1] = '1';
    if (str[i] == '1' && str[i - 4] == '2' && out[(i - 12) * 4 + 1] == '2')
        out[(i - 12) * 4 + 2] = '1';
    if (str[i] == '1' && str[i - 4] == '3' && out[(i - 12) * 4 + 2] == '1')
    {
        out[(i - 12) * 4 + 1] = '3';
        out[(i - 12) * 4 + 0] = '2';
    }
    if (str[i] == '1' && str[i - 4] == '3' && out[(i - 12) * 4 + 2] == '2')
    {
        out[(i - 12) * 4 + 1] = '2';
        out[(i - 12) * 4 + 0] = '1';
    }
    if (str[i] == '1' && str[i - 4] == '3' && out[(i - 12) * 4 + 2] == '3')
    {
        out[(i - 12) * 4 + 1] = '1';
        out[(i - 12) * 4 + 0] = '2';
    }
}

void    check_rowright2(int i, char *str, char *out)
{
    if (str[i] == '2' && str[i - 4] == '2' && out[(i - 12) * 4 + 1] == '2')
    {
        out[(i - 12) * 4 + 3] = '1';
        out[(i - 12) * 4 + 2] = '4';
        out[(i - 12) * 4 + 0] = '3';
    }
    if (str[i] == '2' && str[i - 4] == '2' && out[(i - 12) * 4 + 1] == '4')
    {
        out[(i - 12) * 4 + 3] = '2';
        out[(i - 12) * 4 + 2] = '1';
        out[(i - 12) * 4 + 0] = '3';
    }
    if (str[i] == '2' && str[i - 4] == '2' && out[(i - 12) * 4 + 1] == '1')
    {
        out[(i - 12) * 4 + 3] = '2';
        out[(i - 12) * 4 + 2] = '4';
        out[(i - 12) * 4 + 0] = '3';
    }
}

void    check_rowright3(int i, char *str, char *out)
{
    if (str[i] == '2' && str[i - 4] == '3' && out[(i - 12) * 4 + 3] == '1')
    {
        out[(i - 12) * 4 + 1] = '3';
        out[(i - 12) * 4 + 0] = '2';
    }
    if (str[i] == '2' && str[i - 4] == '3' && out[(i - 12) * 4 + 3] == '2')
    {
        out[(i - 12) * 4 + 1] = '3';
        out[(i - 12) * 4 + 0] = '1';
    }
    if (str[i] == '2' && str[i - 4] == '3' && out[(i - 12) * 4 + 3] == '3')
    {
        out[(i - 12) * 4 + 1] = '2';
        out[(i - 12) * 4 + 0] = '1';
    }
}

void    check_rowright(int i, char *str, char *out)
{
    check_rowright1(i, str, out);
    check_rowright2(i, str, out);
    check_rowright3(i, str, out);
}
