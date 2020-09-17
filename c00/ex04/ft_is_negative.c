
#include <unistd.h>

void	ft_putchar(char c)
{
    if (c != '\0')
        write(1, &c, 1);
}

void    ft_is_negative(int n)
{
    (n < 0) ? ft_putchar('N') : ft_putchar('P');
}

/*int     main(void)
{
    ft_is_negative(1);
    return (0);
}
*/