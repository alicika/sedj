/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkasubuc <rkasubuc@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 11:45:05 by rkasubuc          #+#    #+#             */
/*   Updated: 2020/10/02 01:46:40 by rkasubuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < nb && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
#include <stdio.h>
#include <string.h>
int main()
{
	char test1[256] = "abc123";
	char test2[256] = "abcdef";
	//printf("%d\n", strcmp(test1, test2));
	printf("%s\n", ft_strncat(test1, test2, -1));
	return 0;
}