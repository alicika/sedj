#include <unistd.h>

void	ft_putchar(char str)
{
	write(1, &str, 1);
}

void	ft_puthex(char c)
{
	char hex[16] = "0123456789abcdef";

	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((0 <= str[i]) && (str[i] < 32) || str[i] == 127)
		{
			ft_putchar('\\');
			ft_puthex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main()
{
	char c[] = "Coucou\\ntu vas bien ?";
	ft_putstr_non_printable(c);
}