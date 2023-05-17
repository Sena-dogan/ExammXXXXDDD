#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int d = 2;
    int p = 1;

    if (ac == 3)
    {
        int x = atoi(av[1]);
        int y = atoi(av[2]);

        while (x >= d && y >= d)
        {
            if (x % d == 0 && y % d == 0)
            {
                p *= d;
                x /= d;
                y /= d;
            }
            else
                d++;
        }
        printf("%d", p);
    }
    printf("\n");
}

// printf("x %d\n", x);
// printf("y %d\n", y);
// printf("p %d\n", p);
// printf("d %d\n", d);