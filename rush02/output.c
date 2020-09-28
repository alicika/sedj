#include "dict.h"
#include <fcntl.h>

char    *file_shape(int argc, char **argv)
{
	char    *all_dict;
	int             tmp;

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

int             file_open(int argc, char **argv)
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