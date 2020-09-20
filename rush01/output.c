#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void output_print(char input[4][4])
{
    int i;
    int j;

    i = 0;
    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
            ft_putchar(input[i][j]);
            if (j < 3)
            {
            ft_putchar(' ');
            }
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}

int main(void)
{
    char answer[4][4] = {
        "1234",
        "2341",
        "3412",
        "4123"};
    output_print(answer);
    return (0);
}