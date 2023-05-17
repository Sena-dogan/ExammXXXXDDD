#include <stdio.h>

void	print_bits(unsigned char octet)
{
    int i = 8;

    while (i > 0)
    {
        i--;
        if((octet >> i) & 1)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}

unsigned char	swap_bits(unsigned char octet)
{
    return(octet >> 4 | octet << 4);
}

int main()
{
    print_bits(swap_bits(130));
}

// 0100 0001

// 1000 0010 130
// 0000 1000
// 0010 0000
// 0010 1000