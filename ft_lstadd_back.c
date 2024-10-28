#include "libft.h"

void    ft_lstadd_back(t_list **list, t_list *new)
{
    t_list  *last = ft_lstlast(*list);
    if (last)
        last->next = new;
    else
        *list = new;
}