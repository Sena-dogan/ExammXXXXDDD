#include <unistd.h>

int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if(str[i] == '+')
        i++;
    while (str[i] >= 48 && str[i] <= 57)
    {
        result = result * 10 + (str[i] - 48);
        i++;
    }
    return(sign * result);
}

int main(int ac, char **av)
{
    int nbr = ft_atoi(av[1]);

    if(ac == 2 && nbr >= 0)
    {
        
    }
    else
    {
        write(1, '\n', 1);
        write(1, '0', 1);
    }
}