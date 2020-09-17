
#include <unistd.h>

void	ft_putchar(char c)
{
    if (c != '\0')
        write(1, &c, 1);
}

void    ft_print_comb(void) {
    char hako[3];
    hako[0] = '0' - 1;
    while (++hako[0] <= '7') {
        hako[1] = hako[0];
        while (++hako[1] <= '8') {
            hako[2] = hako[1];
            while (++hako[2] <= '9') {
                ft_putchar(hako[0]);
                ft_putchar(hako[1]);
                ft_putchar(hako[2]);
                if (hako[0] != '7') {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
            }
        }
    }
}