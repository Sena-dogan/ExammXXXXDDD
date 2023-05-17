#include <stdlib.h>
#include <stdio.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;



int	ft_list_size(t_list *begin_list)
{
    t_list *lst = begin_list;
    int size = 0;

    while (lst)
    {
        lst = lst->next;
        size++;
    }
    return(size);
}

int main()
{
    t_list *lst1 = malloc(sizeof(t_list));
    t_list *lst2 = malloc(sizeof(t_list));
    t_list *lst3 = malloc(sizeof(t_list));

    lst1->data = "bumblebee ";
    lst1->next = lst2;

    lst2->data = "camaro ";
    lst2->next = lst3;

    lst3->data = "bee.";
    lst3->next = NULL;

    printf("%s%s%s\n", (char *)lst1->data, (char *)lst2->data, (char *)lst3->data);
    printf("%d\n", ft_list_size(lst1));
}