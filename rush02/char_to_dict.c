/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_to_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkasubuc <rkasubuc@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 11:35:23 by rkasubuc          #+#    #+#             */
/*   Updated: 2020/09/27 23:24:58 by rkasubuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include "dict.h"

void	rm_voidline(char *text)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*(text + i) != '\0')
	{
		if (*(text + i) != '\n')
		{
			*(text + j) = *(text + i);
			j++;
		}
		i++;
	}
	*(text + j) = '\n';
}

void	rm_space(char *text)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*(text + i) != '\0')
	{
		if (*(text + i) != ' ')
		{
			*(text + j) = *(text + i);
			j++;
		}
		i++;
	}
	*(text + j) = '\0';
}

char **one_line(char *buf)
{
	int i;
	int j;
	char **one_line;

	i = 0;
	j = 0;
	while(buf[j] != '\0')
	{
		while(buf[j] != '\n')
		{
			one_line[i][j]=buf[j];
			j++;
		}
		i++;
	}
	return (one_line);
}

/* returns 0 if capable, returns -1 if not */
num_dict	*judge_str(char *text)
{

	int i;
	int j;
	int k;
	char **line;
	num_dict *dict;

	line = one_line(text);

	i = 0;
	j = 0;
	k = 0;
	while (line[i][j] != NULL)
	{
		while (line[i][j] != ':')
		{
			if ('0' <= line[i][j] && line[i][j] <= '9' )
			{
				dict[i]->number[j] = line[i][j];
				j++;
			}
		}
		j += 1;
		while (line[i][j] != '\0')
		{
			if('A' <= line[i][j] || line[i][j] <= 'Z')
			{
				dict[i]->word[k] = line[i][j];
				j++;
				k++;
			}
			else if('a' <= line[i][j] || line[i][j] <= 'z')
			{
				dict[i]->word[k] = line[i][j];
				j++;
				k++;
			}
		}
		j = 0;
		k = 0;
		i++;
	}
	i = 0;
	j = 0;
	
	return (dict);
}

num_dict	*char_to_dict(char *per_tr_dict, int size)
{
	char **one_line;
	int i;
	int j;

	ii = 0;
	j = 0;
	while(per_tr_dict[j]!='\0')
	{
		while(per_tr_dict[i] !='\n')
		{
			one_line[j]
		}
	}
}
