#include <unistd.h>

int ft_isupper(char alpha)
{
    if (alpha <= 90 && alpha >= 65)
        return (1);
    return 0;
}

int ft_isalpha(char alpha)
{
    if ((alpha >= 'A' && alpha <= 'Z') || (alpha >= 'a' && alpha <= 'z'))
        return (1);
    return (0);
}

void ft_print_times(char alpha, int times)
{
    int i = 1;

    while (i <= times)
    {
        write(1, &alpha, 1);
        i++;
    }
}

int main(int ac, char **av)
{
    char *xx = av[1];
    int i = 0;

    if (ac == 2)
    {
        while (xx && xx[i])
        {
            if (!ft_isalpha(xx[i]))
                write(1, &xx[i], 1);
            else if (ft_isupper(xx[i]))
                ft_print_times(xx[i], (xx[i] - 64));
            else if (!ft_isupper(xx[i]))
                ft_print_times(xx[i], (xx[i] - 96));
            i++;
        }
    }
    write(1, "\n", 1);
}
