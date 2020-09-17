#include <unistd.h>

void    ft_putchar(char c)
{
    if (c != '\0')
        write(1, &c, 1);
}

int ft (void)
{
    int a[2];

    a[0] = -1;
    while (++a[0] <= 98)
    {
        a[1] = a[0];
        while (++a[1] <= 99)
        {
            ft_putchar((a[0] / 10) + '0');
            ft_putchar((a[0] % 10) + '0');
            ft_putchar(' ');
            ft_putchar((a[1] / 10) + '0');
            ft_putchar((a[1] % 10) + '0');
            if (a[0] != 98)
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
        }
    }
}