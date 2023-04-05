#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;

        while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
            i++;
        if (str[i] == '-')
        {
            sign = -1;
            i++;
        }
        else if (str[i] == '+')
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
    char *str = av[1];

    printf("result = %d\n", ft_atoi(str));
    printf("result = %d\n", atoi(str));

}