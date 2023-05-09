#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

int word_counter(char *str)
{
    int i = 0;
    int wc = 0;
    int len = ft_strlen(str);

    while (i < len)
    {
        while ((str[i] == 32 || str[i] == 9 || str[i] == 10) && i < len)
            i++;
        if (i < len)
            wc++;
        while ((str[i] != 32 && str[i] != 9 && str[i] != 10) && i < len)
            i++;
    }
    return (wc);
}

char *ft_substr(int start, int end, char *str)
{
    int i = 0;
    char *word = malloc(sizeof(char) * (end - start) + 1);
    while (str[start] && start < end)
    {
        word[i] = str[start];
        start++;
        i++;
    }
    word[i] = '\0';
    return(word);
}

char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int wc = word_counter(str);
    int len = ft_strlen(str);
    char **bee = malloc(sizeof(char *) * wc + 1);
    
    while (i < len)
    {
        while ((str[i] == 32 || str[i] == 9 || str[i] == 10) && i < len)
            i++;
        int first_w = i;
        while ((str[i] != 32 && str[i] != 9 && str[i] != 10) && i < len)
            i++;
        int last_w = i;
        if (last_w > first_w) // i kelimenin son karakteri, w kelimenin ilk karakteri
        {
            bee[j] = malloc(sizeof(char) * (last_w - first_w) + 1);
            if (last_w > first_w)
            {
                bee[j] = ft_substr(first_w, last_w, str);
                j++;
            }
        }
    }
    bee[j] = NULL;
    return(bee);
}


int main(int ac, char **av)
{
    char *s = av[1];
    int i = 0;
    char **str = ft_split(s);

    while (str[i])
    {
        printf("%s\n", str[i]);
        i++;
    }
}