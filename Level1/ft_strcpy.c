#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;

    while(s2 && s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return(s1);
}

int main()
{
    char *x = strdup("camaro");
    char *y = strdup("bee");

    printf("s1 = %s", ft_strcpy(x, y));
}