#include <stdio.h>

int		main(void)
{
	char p[10];
	char *s = "alternatives";
	printf("%s\n", ft_strncpy(p, s, 5));
	return 0;
}