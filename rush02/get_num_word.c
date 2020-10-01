/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_num_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkida <kkida@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 20:16:37 by kkida             #+#    #+#             */
/*   Updated: 2020/09/27 23:22:08 by hkikuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

struct num_dict
{
	char *number;
	char *word;
};

struct num_dict num_dict[] = {
	{"0", "zero"},
	{"1", "one"}
};

int     ft_strcmp(char *s1, char *s2)
{
    unsigned char *us1;
    unsigned char *us2;

    us1 = (unsigned char*)s1;
    us2 = (unsigned char*)s2;
    while (*us1 != '\0' && *us1 == *us2)
    {   
        us1++;
        us2++;
    }   
    return (*us1 - *us2);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {   
        write(1, &str[i], 1);
        i++;
    }   
}

void	get_num_word(char *num, struct num_dict *num_dict)
{
	int		idx;
	
	idx = 0;
	while (num_dict[idx])
	{
		if (ft_strcmp(num, num_dict[idx]->number) == 0)
			ft_putstr(num_dict[idx]->word);
		idx++;
	}
}

int		main(int argc, char **argv)
{
	char *num = argv[1];
	argc = 0;
	get_num_word(num, num_dict);
}
