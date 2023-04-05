#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    char op = av[2][0];

    if (ac == 4)
    {
        int x = atoi(av[1]);
        int y = atoi(av[3]);
        if (op == '*')
            printf("multiplication = %d", (x * y));
        if (op == '/')
            printf("division = %d", (x / y));
        if (op == '+')
            printf("addition = %d", (x + y));
        if (op == '-')
            printf("subtraction = %d", (x - y));
        if (op == '%')
            printf("mod = %d", (x % y));
    }
    printf("\n");
    return (0);
}
