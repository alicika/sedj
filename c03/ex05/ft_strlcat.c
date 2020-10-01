/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkasubuc <rkasubuc@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 12:00:49 by rkasubuc          #+#    #+#             */
/*   Updated: 2020/10/01 00:42:36 by rkasubuc         ###   ########.fr       */
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
	unsigned int a;

	d = ft_strlen(dest);
	s = ft_strlen(src);
	a = 0;
	while (src[a] && d + a < size + 1)
	{
		dest[a + d] = src[a];
		a++;
	}
	dest[a + d] = '\0';
	if (size < d)
		return (d + a + 1);
	return (d + s);
}

#include <stdio.h>
#include <string.h>
int main()
{
		char test1[256] = "123";
			char test2[256] = "asd";

				printf("%u\n", ft_strlcat(test1, test2, 10));
					return 0;
}
