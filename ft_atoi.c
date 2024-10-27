#include "libft.h"
#include "limits.h"

int ft_atoi(const char *s)
{
    int i = 0;
    int sign = 1;
    long result = 0;    

    while (ft_isblank(s[i]))
        i++;

    if (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign = -1;
        i++;
    }

    while (ft_isdigit(s[i]))
    {
        result = result * 10 + (s[i] - '0');

        if (result * sign > INT_MAX)
            return (INT_MAX);
        if (result * sign < INT_MIN)
            return (INT_MIN);

        i++;
    }

    return ((int)(result * sign));
}