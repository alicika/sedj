int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
int  len;
int  slen;

len = 0;
slen = ft_strlen(src);
while (*dest && size > 0)
{
dest++;
len++;
size--;
}
while (*src && size-- > 1)
	*dest++ = *src++;
if (size == 1 || *src == 0)
	*dest = '\0';
return (slen + len);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char test1[256] = "123";
	char test2[256] = "asd";

	printf("%u\n", ft_strlcat(test1, test2, 2));
	return 0;
}