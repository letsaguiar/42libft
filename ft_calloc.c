#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t n, size_t size)
{
    // Check for zero-sized allocation
    if (n == 0 || size == 0)
        return malloc(0);

    // Check for overflow
    if (n > SIZE_MAX / size)
        return (NULL);

    void *ptr = malloc(n * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, n * size);
    return (ptr);
}