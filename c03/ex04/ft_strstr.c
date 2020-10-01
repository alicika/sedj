/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkasubuc <rkasubuc@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 11:46:45 by rkasubuc          #+#    #+#             */
/*   Updated: 2020/10/02 07:56:05 by rkasubuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*s;
	char	*t;

	s = str;
	t = to_find;
	i = 0;
	if (t[i] == '\0')
		return (s);
	while (s[i])
	{
		j = 0;
		while (s[i + j] == t[j] && s[j])
		{
			if (t[j + 1] == '\0')
				return (&s[i]);
			j++;
		}
		i++;
	}
	return ((void *)0);
}
