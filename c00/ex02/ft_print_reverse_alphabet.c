
#include <unistd.h>

void    ft_putchar(char b)
{
    write(1, &b, 1);
}

void	ft_print_reverse_alphabet(void)
{
    char c;

    c = 'z';
    while (c >= 'a')
    {
        ft_putchar(c--);
    }
}

/*int		main(void)
{
    ft_print_reverse_alphabet();
    return (0);
}
*/