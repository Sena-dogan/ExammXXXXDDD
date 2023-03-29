#include <unistd.h>

int ft_isupper(char c)
{
    if (c <= 90 && c >= 65)
        return (1);
    return 0;
}

int main(int ac, char **av)
{
    int i = 0;
    char *x = av[1];

    if (ac == 2)
    {
        while (x && x[i])
        {
            if(i == 0)
                write(1, &x[0], 1);
            else if (ft_isupper(x[i]))
            {
                int c = x[i] + 32;
                write(1, "_", 1);
                write(1, &c, 1);
            }
            else
                write(1, &x[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}