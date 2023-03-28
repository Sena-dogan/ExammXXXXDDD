#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
    int i = 0;

    while(str && str[++i]);
    return(i);
}

int main()
{
    char *str = strdup("bumblebe");

    printf("len str = %d\n", ft_strlen(str));
    printf("len str originall = %lu\n", strlen(str));
}