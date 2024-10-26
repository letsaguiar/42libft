#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    if (dest == src)
        return (dest);
    if (dest < src)
        for (size_t i = 0; i < n; i++)
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
    else
        for (size_t i = n; i > 0; i--)
            ((unsigned char *)dest)[i - 1] = ((unsigned char *)src)[i - 1];

    return (dest);
}