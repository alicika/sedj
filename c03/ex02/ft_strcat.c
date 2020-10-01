/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkasubuc <rkasubuc@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 11:35:13 by rkasubuc          #+#    #+#             */
/*   Updated: 2020/09/30 22:58:32 by rkasubuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		slen(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int d;
	int s;
	int a;

	d = slen(dest);
	s = slen(src);
	a = 0;
	while (s > 0)
	{
		dest[d] = src[a];
		d++;
		a++;
		s--;
	}
	dest[d] = '\0';
	return (dest);
}
