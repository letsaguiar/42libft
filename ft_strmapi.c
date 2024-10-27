#include "libft.h"

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    char *str = ft_calloc(ft_strlen(s) + 1, sizeof(char));
    if (!str)
        return (NULL);

    for (size_t i = 0; s[i]; i++)
        str[i] = f(i, s[i]);
    
    return (str);
}