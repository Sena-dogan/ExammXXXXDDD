#include <unistd.h>

void    write_number(int x)
{
    char    *base = "0123456789";

    if(x >= 10)
        write_number(x / 10);     
    write(1, &base[x % 10], 1);
}

int main()
{
    int i = 1;

    while (i <= 100)
    {
        if(i % 3 == 0)
            write(1, "fizz", 4);
        else if(i % 5 == 0)
            write(1, "buzz", 4);
        else if(i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz", 8);
        else
            write_number(i);
        write(1, "\n", 2);
        i++;
    }   
}