#include "libft.h"

char    *ft_strtrim(const char *s, const char *set)
{
    if (!s || !set)
        return (NULL);
    
    size_t s_len = ft_strlen(s);

    size_t start = 0;
    while (start < s_len && ft_strchr(set, s[start]))
        start++;
    
    size_t end = s_len - 1;
    while (end > start && ft_strchr(set, s[end]))
        end--;

    size_t len = end - start + 1;
    return (ft_substr(s, start, len));
}