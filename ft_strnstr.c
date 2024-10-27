#include "libft.h"

static int  *getLspArray(const char *needle)
{
    int *lsp = ft_calloc(ft_strlen(needle) + 1, sizeof(int));
    if (!lsp)
        return (NULL);

    int len = 0;
    int i = 1;
    while (needle[i])
    {
        if (needle[i] == needle[len])
        {
            len += 1;
            lsp[i] = len;
        }
        else
        {
            if (len != 0)
                len = lsp[len - 1];
            else
                lsp[i] = 0;
        }
        
        i += 1;
    }

    return (lsp);
}

char    *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    if (!*needle)
        return ((char *)haystack);

    int *lsp = getLspArray(needle);
    if (!lsp)
        return (NULL);

    size_t i = 0;
    size_t j = 0;

    while (haystack[i] && i < n)
    {
        if (haystack[i] == needle[j])
        {
            i += 1;
            j += 1;
            
            if (!needle[j])
            {
                free(lsp);
                return ((char *)haystack + i - j);
            }
        }
        else
        {
            if (j != 0)
                j = lsp[j - 1];
            else
                i += 1;
        }
    }

    free(lsp);
    return (NULL);
}