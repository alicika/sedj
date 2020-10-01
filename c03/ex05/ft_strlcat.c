/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkasubuc <rkasubuc@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 12:00:49 by rkasubuc          #+#    #+#             */
/*   Updated: 2020/10/02 00:02:47 by rkasubuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int d;
	unsigned int s;
	unsigned int i;

	d = ft_strlen(dest);
	s = ft_strlen(src);
	i = 0;
	if (size > d)
	{
		while (i < size - 1 - d && src[i])
		{
			dest[d + i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (d + s);
	}
	else
		return (s + size);
}
