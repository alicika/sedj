/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkasubuc <rkasubuc@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 11:33:38 by rkasubuc          #+#    #+#             */
/*   Updated: 2020/09/30 22:56:54 by rkasubuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while ((*s1 == *s2 && *s1) && --n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char test1[256] = "abc123";
	char test2[256] = "abc1234";
	//printf("%d\n", strcmp(test1, test2));
	printf("%d\n", ft_strncmp(test1, test2, 10));
	return 0;
}