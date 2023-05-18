#include <stdio.h>
#include <ctype.h>

int ft_atoi_base(const char *str, int str_base) 
{
    int result = 0;
    int sign = 1;

    if (*str == '-') 
    {
        sign = -1;
        str++;
    }

    while (isalnum(*str)) 
    {
        int digit = isdigit(*str) ? *str - '0' : toupper(*str) - 'A' + 10;

        if (digit >= str_base)
            break;

        result = result * str_base + digit;
        str++;
    }

    return sign * result;
}

int main() {
    const char *str = "12FDB3";
    const char *bla = "Ceci permet de decouvrir le fonctionnement de ton ft_atoi_base.";
    int base = 16;
    int result = ft_atoi_base(str, base);

    printf("%s in base %d is %d\n", str, base, result);
    printf("%s in base %d is %d\n", bla, base, result);

    return 0;
}