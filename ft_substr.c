#include "libft.h"

char    *ft_substr(const char *s, size_t start, size_t len)
{
    size_t s_len = ft_strlen(s);
    if (start >= s_len)
        return (ft_strdup(""));
    if (start + len > s_len)
        len = s_len - start;

    char *substr = ft_calloc(len + 1, sizeof(char));
    if (!substr)
        return (NULL);

    return (ft_memcpy(substr, s + start, len));
}