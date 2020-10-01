/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkikuchi <hkikuchi@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 16:08:06 by hkikuchi          #+#    #+#             */
/*   Updated: 2020/09/27 22:18:06 by rkasubuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include <fcntl.h>

char	*file_shape(int argc, char **argv)
{
	char	*all_dict;
	int		tmp;

	tmp = file_open(argc, argv);
	if (tmp < 0)
	{
		return ("iCANNOT OPEN FILE\n");
	}
	else if (tmp == 1)
	{
		return (all_dict);
	}
}

int		file_open(int argc, char **argv)
{
	int fd;

	if (argc != 2 || argc != 3)
	{
		arg_err();
		fd = (-1);
	}
	else if (argc == 2 && judge_char(argv[1]) == (-1))
	{
		arg_err();
		fd = (-1);
	}
	else if (argc == 3 && judge_char(argv[2]) == (-1))
	{
		arg_err();
		fd = (-1);
	}
	else if (argc == 2)
	{
		fd = open("numbers.dict", O_RDONLY);
		if (fd == -1)
		{
			fd = (-2);
			dict_err();
		}
	}
	else if (argc == 2)
	{
		fd = open(arg[1], O_RDONLY);
		if (fd == -1)
		{
			fd = (-2);
			dict_err();
		}
	}
	return (fd);
}


char	*file_read(int fd)
{
	//fd = open_file()
	//read_size = get_memory
	char *buf;

	buf = (char *)malloc(sizeof(char)*(2000));
	rc = read(fd , buf, 2000);
	buf[rc + 1] = '\0';
	close(fd);
	return (buf);
}

int get_memory(char *str)
{
	int fd;
	int tmp;
	int read_size;

	read_size = 0;
	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		write(1, "FILE OPEN ERROR", 15);
		return;
	}
	tmp = read(fd, str, 100);
	if (rc == -1)
		write(1, "CANNOT READ THE FILE", 20);
	while (tmp != 0)
	{
		read_size += tmp;
	}
	close(fd);
	return (read_size);
}

int judge_char(char *str)
{
	int i;

	i = 0;
	if ('1' <= str[i] && str[i] <= '9')
		i++;
	else
		return (-1);
	while(str[i] != '\0')
	{
		if ('1' <= str[i] && str[i] <= '9')
			i++;
		else
			return (-1);
	}
	return (i);
}
