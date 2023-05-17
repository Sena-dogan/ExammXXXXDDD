#include <stdlib.h>
#include <stdio.h>

int ft_getlen(int s, int e)
{
    int len = 0;

    if (s > e)
        len = (s - e) + 1;
    else
        len = (e - s) + 1;
    return len;
}


int *ft_range(int start, int end)
{
    int len = ft_getlen(start, end); // len den max min int allociate patlıyor
    int *bee = malloc(sizeof(int) * len);
    int i = 0;

    if (start < end)
    {
        while (i < len && start <= end)
        {
            bee[i] = start;
            start++;
            i++;
        }
    }
    else if (start > end)
    {
        while (i < len && start >= end)
        {
            bee[i] = start;
            start--;
            i++;
        }
    }
    else if (start == end)
        bee[i] = start;
    return (bee);
}

int main()
{
    int start = -2147483647; // Minimum possible value for a 32-bit signed integer
    int end = 2147483647;    // Maximum possible value for a 32-bit signed integer

    int *result = ft_range(start, end);

    if (result == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Array created successfully.\n");

    free(result);
    return 0;
}