#include <unistd.h>
#include <string.h>

int isre(char a, char *str, int index)
{
    int i = 0;

    while (str && str[i] && i < index)
    {
        if(str[i] == a)
            return(1);
        i++;
    }
    return(0);
}

int main(int ac, char **av)
{
    int i = 0;
    char *fst = "ddf6vewg64f"; //first
    char *snd = "gtwthgdwthdwfteewhrtag6h4ffdhsd"; //second
    (void)av;
    ac = 3;
    if (ac == 3)
    {
        while (fst && fst[i] != 0)
        {
            if (!isre(fst[i], fst, i))
                write(1, &fst[i], 1);
            i++;            
        }
        i = 0;
        while (snd && snd[i] != 0)
        {
            if(!isre(snd[i], fst, strlen(fst)) && !isre(snd[i], snd, i))
                write(1, &snd[i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
}

// df6vewg4thras
// df6vewg4thras