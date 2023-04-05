#include <unistd.h>

int ft_isupper(char c)
{
    if (c >= 65 && c <= 90)
        return (1);
    return (0);
}

int ft_islower(char c)
{
    if (c >= 97 && c <= 122)
        return (1);
    return (0);
}

char ft_tolower(char c)
{
    if (ft_isupper(c))
        c += 32;
    return (c);
}

char ft_toupper(char c)
{
    if (!ft_isupper(c))
        c -= 32;
    return (c);
}

int main(int ac, char **av)
{
    int arg = 1;
    int c = 0;

    if (ac >= 2)
    {
        while (arg < ac)
        {
            char *s = av[arg];
            while (s && s[c])
            {
                    if (ft_isupper(s[c]) && !(s[c + 1] == 32 || s[c + 1] == 0 || s[c + 1] == 9))
                        s[c] = ft_tolower(s[c]);
                    else if (ft_islower(s[c]) && (s[c + 1] == 32 || s[c + 1] == 0 || s[c + 1] == 9))
                        s[c] = ft_toupper(s[c]); 
                    write(1, &s[c], 1);
                c++;
            }
            write(1, "\n", 1);
            arg++;
        }
    }
    else
        write(1, "\n", 1);
    return(0);
}