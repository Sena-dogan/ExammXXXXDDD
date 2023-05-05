#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest2;
	char	*src2;
	size_t	i;

	i = 0;
	dest2 = (char *)dest;
	src2 = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest2;
	char	*src2;
	size_t	i;

	i = 0;
	dest2 = (char *)dest;
	src2 = (char *)src;
	if (!src && !dest)
		return (NULL);
	if (src2 < dest2)
		while (++i <= n)
			dest2[n - i] = src2[n - i];
	else
		return (ft_memcpy(dest, src, n));
	return (dest);
}

int	main(void)
{
	char	a[9] = "bumblebee";
	char	b[6] = "camaro";
	printf("%s\n", (char *)ft_memmove(a, b, 4));
    printf("a = %s\nb = %s\n", a, b);
}