#include <stdlib.h>
#include <stdio.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = -1;

	while (++i < n && s2[i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

int word_counter(char *str)
{
    int i = 0;
    int wc = 0;

    while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
    return(wc);
}

char	**ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int wc = word_counter(str);
	
	char **res = (char **)malloc(sizeof(char *) * (wc + 1));
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			res[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(res[k++], &str[j], i - j);
		}
	}
	res[k] = '\0';
	return (res);
}


// int	wordcounter(const char *s)
// {
// 	int	i = 0;
//     int x = 0;

// 	while (*s)
// 	{
// 		while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i])
// 			i++;
// 		if (s[i] == '\0')
// 			return (x);
// 		while (*s != (s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && *s)
// 			i++;
// 		x++;
// 	}
// 	return (x);
// }

// int	charcounter(const char *s)
// {
//     int i = 0;
// 	int	x = 0;

// 	while (s[i] && !(s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
// 	{
// 		x++;
// 		i++;
// 	}
// 	return (x);
// }

// char	**ft_split(const char *s)
// {
// 	char	**res;
// 	int		resi;

// 	if (!s)
// 		return (0);
// 	resi = 0;
// 	res = malloc (sizeof(char *) * wordcounter(s, c) + 1);
// 	if (!res)
// 		return (0);
// 	while (*s)
// 	{
// 		while (*s == c && *s)
// 			s++;
// 		if (*s == '\0')
// 			break ;
// 		res[resi] = ft_substr(s, 0, charcounter(s, c));
// 		resi++;
// 		s = s + charcounter(s, c);
// 	}
// 	res[resi] = NULL;
// 	return (res);
// }

// int main(int ac, char **av)
// {
//     char *s = av[1];
//     int i = 0;
//     char **str = ft_split(s);

//     while (str[i])
//     {
//         printf("%s\n", str[i]);
//         i++;
//     }
// }