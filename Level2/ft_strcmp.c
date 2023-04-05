#include <stdio.h>
#include <string.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return(s1[i] - s2[i]);
}

int main(int ac, char **av)
{
    printf("%d\n", ft_strcmp(av[1], av[2]));
    printf("original = %d\n", strcmp(av[1], av[2]));
}