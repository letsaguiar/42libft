#include "libft.h"

size_t  ft_strlcpy(void *dest, const void *src, size_t n)
{
    if (n == 0)
        return (ft_strlen(src));

    unsigned char   *dest_ptr = (unsigned char *)dest;
    unsigned char   *src_ptr = (unsigned char *)src;

    size_t i = 0;
    while (i < n - 1 && src_ptr[i])
    {
        dest_ptr[i] = src_ptr[i];
        i++;
    }
    dest_ptr[i] = '\0';

    return (ft_strlen(src));
}