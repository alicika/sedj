char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (nb-- > 0)
	{
		dest[i + j] = src[j];
		if (dest[i + j])
			break;
		j++;
	}
	dest[i + j] = '\0';
			return (dest);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char test1[256] = "abc123";
	char test2[256] = "abc1234";
	printf("%s\n", ft_strncat(test1, test2, 0));
	return 0;
}