
#include <unistd.h>

void    ft_putchar(char b)
{
    write(1, &b, 1);
}

void	ft_print_alphabet(void)
{
    char c;

    c = 'a';
    while (c <= 'z')
    {
        ft_putchar(c++);
    }
}

/*int		main(void)
{
    ft_print_alphabet();
    return (0);
}
*/