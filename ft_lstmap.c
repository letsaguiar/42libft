#include "libft.h"

t_list  *ft_lstmap(t_list *list, void *(*f)(void *), void (*del)(void *))
{
    if (!list || !f)
        return (NULL);

    t_list *head = NULL;
    t_list *tail = NULL;
    while (list)
    {
        if (!tail)
        {
            if (!(tail = ft_lstnew(f(list->content))))
                return (NULL);

            head = tail;
        }
        else
        {
            if (!(tail->next = ft_lstnew(f(list->content))))
            {
                ft_lstclear(&head, del);
                return (NULL);
            }
            tail = tail->next;
        }

        list = list->next;
    }

    return (head);
}