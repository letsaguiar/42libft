#include "libft.h"

size_t  ft_lstsize(t_list *list)
{
    size_t i = 0;
    while (list)
    {
        list = list->next;
        i++;
    }

    return (i);
}