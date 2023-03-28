#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;

    while (str && str[++i]);
    return (i);
}

int main(int ac, char **av)
{
    char *x = av[1];
    char *y;
    int len = ft_strlen(x) - 1;

    if (ac == 2)
    {
        while (x && x[len])
        {
            printf("if x = %s\n x[len] = %c\n", x, x[len]);
            write(1, &x[len], 1);
            len--;
        }
    }
    write(1, "\n", 1);
}