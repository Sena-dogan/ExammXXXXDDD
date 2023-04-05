#include <stdio.h>
#include <string.h>

size_t    ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j = 0;

    while (s[i]) // if the s is null it must error seg fault
    {
        j = 0;
        while (reject[j])
        {
            if(s[i] == reject[j])
                return(i);
            j++;
        }
        i++;
    }
    return(i);
}

int main(int ac, char **av)
{
    const char *s = av[1];
    const char *charset = av[2];
    printf("s = %s\n", s);
    printf("charset = %s\n\n\n", charset);
    printf("x = %lu\n", ft_strcspn(s, charset));
    printf("original = %lu\n", strcspn(s, charset));
}


// it returns character's(The first character in the charset contained in the string) index on the main string
// also if string doesn't contains any character in the charset, it returns length of string
