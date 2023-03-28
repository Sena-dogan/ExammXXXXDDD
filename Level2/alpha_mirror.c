#include <unistd.h>

int ft_isalpha(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    return (0);
}

// 65 + (90 - c);
// 90 - (c - 65);
// 90 - c + 65
// 155 - c

// 122 - (c - 97);
// 97 + (122 - c);
// 122 - c + 97
// 219 - c

char alpha_mirror(char c)
{
    if (c >= 65 && c <= 90)
        c = 155 - c;
    else if (c >= 97 && c <= 122)
        c = 219 - c;
    return (c);
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
            {
                int c = alpha_mirror(x[i]);
                write(1, &c, 1);
            }
            else
                write(1, &x[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}

