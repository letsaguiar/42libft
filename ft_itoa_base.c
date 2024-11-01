#include "libft.h"

char    *ft_itoa_base(long long n, int base, char *digits)
{
    size_t      len;
    long long   tmp;
    char        *str;

    len = 1;
    tmp = n;
    while (tmp /= base)
        len++;
    str = (char *)malloc(len + 1);
    if (!str)
        return (NULL);
    str[len] = '\0';
    tmp = n;
    while (len--)
    {
        str[len] = digits[tmp % base];
        tmp /= base;
    }
    return (str);
}