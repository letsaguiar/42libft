#include "libft.h"

void    ft_lstclear(t_list **list, void (*del)(void *))
{
    if (*list)
    {
        ft_lstclear(&(*list)->next, del);
        ft_lstdelone(*list, del);
        *list = NULL;
    }
}