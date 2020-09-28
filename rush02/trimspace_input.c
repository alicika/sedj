void    rm_voidline(char *text)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*(text + i) != '\0')
	{
		if (*(text + i) != '\n')
		{
			*(text + j) = *(text + i);
			j++;
		}
		i++;
	}
	*(text + j) = '\n';
}

void    rm_space(char *text)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*(text + i) != '\0')
	{
		if (*(text + i) != ' ')
		{
			*(text + j) = *(text + i);
			j++;
		}
		i++;
	}
	*(text + j) = '\0';
}

/* returns 0 if capable, returns -1 if not */
int 	judge_str(char *text)
{
	int i;

	i = 0;
	while (*(text + i) != ':')
	{
		if (*(text + i) != 'a string of numbers')
		{
			return (-1);
		}
		i++;
	}
	if ((text + i) != ':')
	{
		return (-1)
	}
	i++;
	while (*(text + i) != '\n')
	{
		if (*(text + i) != 'capable characters')
		{
			return (-1);
		}
		i++;
	}
	if (*(text + i) != '\n')
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}

