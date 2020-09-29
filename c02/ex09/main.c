#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while ((dest[i] = src[i]) != '\0')
		i++;
	return (dest);
}

int		main(void)
{
	char	*a = "saLut, cOmMent tu Vas ? 42MOts quarAnte-Deux; cinQuante+eT+uN";
	char	b[100];

	ft_putstr(ft_strcpy(b, a));
	write(1, "\n", 1);
	ft_putstr(ft_capitalize(b));
	write(1, "\n", 1);
	return (0);
}