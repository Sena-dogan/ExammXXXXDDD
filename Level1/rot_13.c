#include <unistd.h>

int ft_isalpha(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    return (0);
}

void ft_rot_13(char alpha)
{
    int move_13 = alpha + 13;
    int back_13 = alpha - 13;

    if ((alpha >= 65 && alpha <= 77) || (alpha >= 97 && alpha <= 109))
        write(1, &move_13, 1);
    else
        write(1, &back_13, 1);
}

int main(int ac, char **av)
{
    int i = 0;
    char *x = av[1];

    if (ac == 2)
    {
        while (x && x[i])
        {
            if (ft_isalpha(x[i]))
                ft_rot_13(x[i]);
            else
                write(1, &x[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}

// int ft_isupper(char alpha)
// {
//     if (alpha <= 90 && alpha >= 65)
//         return (1);
//     return 0;
// }

// int ft_isalpha(char alpha)
// {
//     if ((alpha >= 'A' && alpha <= 'Z') || (alpha >= 'a' && alpha <= 'z'))
//         return (1);
//     return (0);
// }

// void rot_13(char x, int isupper)
// {
//     int i = 0;
//     int c1 = x + 13;
//     int c2 = x - 13;
//     if ((isupper - x) >= 13)
//         write(1, &c1, 1);
//     else
//         write(1, &c2, 1);
// }

// int main(int ac, char **av)
// {
//     int i = 0;
//     char *x = av[1];

//     if (ac == 2)
//     {
//         while (x && x[i])
//         {
//             if (ft_isalpha(x[i]))
//             {
//                 if (ft_isupper(x[i]))
//                     rot_13(x[i], 'Z');
//                 else
//                     rot_13(x[i], 'z');
//             }
//             else
//                 write(1, &x[i], 1);
//             i++;
//         }
//     }
//     write(1, "\n", 1);
// }