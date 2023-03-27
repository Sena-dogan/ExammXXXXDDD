#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;
    tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
    int a = 3456;
    int b = 7890;

    printf("a = %d\n adress a = %p\n b = %d\n adress b = %p\n", a, &a, b, &b);

    ft_swap(&a, &b);

    printf("\n----swap----\n\n");
    printf("a = %d\n adress a = %p\n b = %d\n adress b = %p\n", a, &a, b, &b);
}