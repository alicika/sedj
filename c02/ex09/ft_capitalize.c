char	*ft_capitalize(char *str)
{
	int i;

	i = 0;
	while (str[i++] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
	}
	if (('a' <= str[0] && str[0] <= 'z'))
		str[0] -= 32;
	i = 1;
	while (str[i++] != '\0')
	{
		if (!((('1' <= str[i - 1] && str[i - 1] <= '9')) || (('A' <= str[i - 1] && str[i - 1] <= 'Z')) || (('a' <= str[i - 1] && str[i - 1] <= 'z'))))
		{
			if ('a' <= str[i] && str[i] <= 'z')
				str[i] -= 32;
		}
	}
	return str;
}