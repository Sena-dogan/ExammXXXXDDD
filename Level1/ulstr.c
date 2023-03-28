#include <unistd.h>
#include <stdio.h>

int ft_isupper(char c)
{
    if (c <= 90 && c >= 65)
        return (1);
    return 0;
}

int ft_isalpha(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    return (0);
}

void    ft_ulstr(char c)
{
    int up_c = c - 32;
    int low_c = c + 32;

    if(ft_isalpha(c))
    {
        if(ft_isupper(c))
            write(1, &low_c, 1);
        else
            write(1, &up_c, 1);
    }
    else
        write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i = 0;
    char *x = av[1];

    if (ac == 2)
    {
        while (x && x[i])
        {
            ft_ulstr(x[i]);
            i++;
        }
    }
    write(1, "\n", 1);
}