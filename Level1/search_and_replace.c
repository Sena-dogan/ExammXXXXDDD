#include <unistd.h>

int	ft_strlen(char *str)
{
    int i = 0;

    while(str && str[++i]);
    return(i);
}

int main(int ac, char **av)
{
    int i = 0;
    char *x = av[1];
    
    if (ac == 4 && ft_strlen(av[2]) == 1 && ft_strlen(av[3]) == 1)
    {
        while (x && x[i])
        {
            if(x[i] == av[2][0])
                write(1, &av[3][0], 1);
            else
                write(1, &x[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}