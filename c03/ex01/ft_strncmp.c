int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while( *s1 == *s2 )
	{
		if ( *s1 && (*s1 == *s2))
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
#include <stdio.h>
#include <string.h>
int main()
{
	char test1[256] = "abc123";
	char test2[256] = "abc1234";
	printf("%d\n", strncmp(test1, test2, 7));
	printf("%d\n", ft_strncmp(test1, test2, 7));
	return 0;
}
