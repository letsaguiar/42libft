#include "libft.h"
#include <limits.h>

char    *ft_itoa(int n)
{
    char    *str;
    int     len;
    int     sign;
    int     tmp;

    len = 1;
    sign = 0;
    if (n < 0)
    {
        sign = 1;
        len++;
    }
    tmp = n;
    while (tmp /= 10)
        len++;
    if (n == INT_MIN)
        return (ft_strdup("-2147483648"));
    if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    str[len] = '\0';
    if (sign)
        str[0] = '-';
    while (len-- > sign)
    {
        str[len] = (n % 10) * (sign ? -1 : 1) + '0';
        n /= 10;
    }
    return (str);
}