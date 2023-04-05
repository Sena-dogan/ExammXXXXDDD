#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int len = 0;
    int i = 0;

    while(src[len])
        len++;
    char *s = malloc(sizeof(*s) * (len + 1));  // *s more flexible
    if (s)
    {
        while (src[i])
        {
            s[i] = src[i];
            i++;
        }
        s[i] = '\0';
    }
    return(s);
}

int main(int ac, char **av)
{
    char *s = av[1];

    printf("s = %s\n", s);
    printf("s = %s\nadress s = %p\n", ft_strdup(s), ft_strdup(s));
    // printf("-------origanal-------\n");
    // printf("s = %s\nadress s = %p\n", strdup(s), strdup(s));
}