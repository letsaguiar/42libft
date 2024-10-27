#include "libft.h"

void    ft_striteri(const char *s, void (*f)(unsigned int, char *))
{
    for (size_t i = 0; s[i]; i++)
        f(i, (char *)&s[i]);
}