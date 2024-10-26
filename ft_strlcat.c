#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t n)
{
    size_t dst_len = ft_strlen(dest);
    size_t src_len = ft_strlen(src);

    if (n <= dst_len)
        return (n + src_len);

    ft_strlcpy(dest + dst_len, src, n - dst_len);

    return (dst_len + src_len);
}