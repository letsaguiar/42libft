#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list *list = ft_calloc(1, sizeof(t_list));
    if (!list)
        return (NULL);

    list->content = content;
    list->next = NULL;

    return (list);
}