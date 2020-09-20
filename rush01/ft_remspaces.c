#include <unistd.h>

char	ft_remspaces(char *str);

int 	main(void)
{
	ft_remspaces("J e s u s C h r i s t");
	return 0;
}

char	ft_remspaces(char *str)
{
	int i;

	i = 0;
	while (str != '\0')
	{
		if (str[i] == ' ')
		{
			str++;
		}
		write(1, &str[i], 1);
		str++;
	}
}
