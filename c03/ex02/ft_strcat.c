char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
		return (dest);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char test1[256] = "abc123";
	char test2[256] = "abc1234";
	//printf("%s\n", strcat(test1, test2));
	printf("%s\n", ft_strcat(test1, test2));
	return 0;
}
