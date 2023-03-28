#include <unistd.h>

int ft_isalpha(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    return (0);
}

void ft_rotone(char alpha)
{
    int move_one = alpha + 1;
    int back_25 = alpha - 25;

    if(alpha == 'z' || alpha == 'Z')
        write(1, &back_25, 1);
    else
        write(1, &move_one, 1);
}

int main(int ac, char **av)
{
    int i = 0;
    char *x = av[1];

    if (ac == 2)
    {
        while (x && x[i])
        {
            if (ft_isalpha(x[i]))
                ft_rotone(x[i]);
            else
                write(1, &x[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}