#include "libft.h"
#include <limits.h>

char    *ft_itoa(t_number n)
{
    if (n >= 0)
        return (ft_itoa_base(n, 10, "0123456789"));
    
    t_string s1 = ft_itoa_base(-n, 10, "0123456789");
    t_string s2 = ft_strjoin("-", s1);

    free(s1);
    return (s2);
}