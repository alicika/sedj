if (argc > 3 || argc <= 1)
{
putchar("Error(usage : rush02 [number]");
}
else if (argc == 2 )
{
ft_strcpy(&dict_name[0], DICT_NAME);
ft_strcpy(&number[0], argv[1]);
}
else
{
ft_strcpy(dict_name[0], argv[1]);
ft_strcpy(&number[0], argv[2]);
}
dict_cnt = 0;
ft_cnv_dict(dict, &dict_cnt, &dict_name[0]);
ft_lookup_dic(dict, dict_cnt, &number[0]);
ft_free_dict(dict, dict_cnt);

}



void ft_cnv_dict(t_dict_type *dic, int *dcnt, char *dname)
{
	int  *fd;
	char c;
	int read_num;
	char num[NUM_MAX];
	char text[TEXT_MAX];

	fd = 0;
	fd = open(dname, O_RDONLY);

	if(fd == -1)
	{
		ft_putchar("Error Dict");
		exit(EXIT_FAILURE);
	}
	c=" ";
	while( c != ":")
	{
		read_num = read(fd, &c, 1);
		if(read_num == -1)
		{
			ft_putchar("Error Dict")ft_putchar("Error Dic
			t");
			exit(EXIT_FAILURE);
		}
		num[cnt] = c;
	}
	while( cnt >0 && num[cnt] == " ")
	{
		cnt--;
	}
	if(cnt == 0)
	{
	}
	cnt++;
	num[cnt + ]

}