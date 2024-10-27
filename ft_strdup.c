#include "libft.h"

char    *ft_strdup(const char *s)
{
    if (!s)
        return (NULL);

    char    *dup;
    size_t  len;

    len = ft_strlen(s) + 1;
    dup = ft_calloc(len, sizeof(char));
    if (!dup)
        return (NULL);

    return (ft_memcpy(dup, s, len));
}