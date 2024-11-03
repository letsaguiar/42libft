#include "libft.h"

void    ft_throw(const char *msg)
{
    ft_putstr_fd(msg, 2);
    exit(1);
}