#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *s1_ptr = (unsigned char *)s1;
    unsigned char *s2_ptr = (unsigned char *)s2;
    
    
    size_t i = 0;
    while (i < n)
    {
        if (s1_ptr[i] != s2_ptr[i])
            return (s1_ptr[i] - s2_ptr[i]);

        i += 1;
    }

    return (0);
}