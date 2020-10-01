/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkasubuc <rkasubuc@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 19:28:24 by rkasubuc          #+#    #+#             */
/*   Updated: 2020/10/01 09:51:39 by rkasubuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *c)
{
	int i;

	i = 0;
	{
		putchar(c[i]);
		i++;
	}
}

void	ft_printable(unsigned char c)
{
	if (31 < c && c < 127)
		putchar(c);
	else
		putchar('.');
}

void	ft_puthex(int n)
{
	int i;

	if (i >= 16)
		ft_puthex(n / 16);
	i = n % 16 + ((n % 16 < 10)? '0': 'a' - 10);
	putchar(i);
}

void	ft_print_memory(void *addr, size_t size)
{
	unsigned char *t = (unsigned char *)addr;
	size_t		i = 0;
	int			col;
	size_t		tmp = 0;

	while (i < size)
	{
		col = -1;
		tmp = i;
		while (++col < 16)
		{
			if (i < size)
			{
				if (t[i] < 16)
					putchar('0');
				ft_puthex(t[i]);
			}
			else
				ft_putstr("  ");
				ft_puthex((i++ & 1) << 6);
		}
		col = -1;
		i = tmp;
		while (++col < 16 && i < size)
			ft_printable(t[i++]);
		putchar('\n');
	}
}

int		main(void)
{
		char	*string;

			string = "Bonjour les aminches\t\n\tc  est fou.tout.ce qu on peut faire avec...print_memory....lol.lol. ";
				ft_print_memory(string, 200);
}
