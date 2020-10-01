/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evaluation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 16:07:35 by marvin            #+#    #+#             */
/*   Updated: 2020/09/20 16:07:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define NUM 4


int	ft_state_eval(char **argv)
{
	int i;
	int j;
	int cnt;

	i = 0;
	j = 0;
	cnt = 0;
	while (i< NUM)
	{
		while(j++ < NUM)
		{
			while (argv[i][j] < argv[i][j + 1])
			{
				if (j >= 3)
				{
					cnt = 4;
					break;
				}
				cnt++;
			}
			j++;
		}
		i++;
	}
	return (0);
}

/* 返り値0:= チェックする 1:=チェックしない*/
/* 第j行に同じ数字があるかどうかを判断 */
/* あった場合は入れられない */
/* 第i行に同じ数字があるかどうかを判断 */
/* あった場合は入れられない */

int checkNumber(int i, int j, int number)
{
    int x, y;
    int bi, bj;

	x = 0;
	y = 0;

    while (x++ < NUM)
    {
        if (board[j][x] == number)
        {
            return 0;
        }
    }


    while (y++ < NUM)
    {
        if (board[y][i] == number)
        {

            return 0;
        }
    }
	return 1;
}