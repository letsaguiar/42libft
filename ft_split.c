#include "libft.h"

static void clean(size_t *start_arr, size_t *len_arr, char **split)
{
    if (start_arr)
        free(start_arr);
    if (len_arr)
        free(len_arr);
    if (split)
    {
        for (size_t i = 0; split[i]; i++)
            free(split[i]);
        free(split);
    }
}

static void build_split_maps(const char *s, char c, size_t *start_arr, size_t *len_arr, size_t *len)
{
    size_t k = 0;
    size_t i = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i])
        {
            start_arr[k] = i;
            len_arr[k] = 0;
            while (s[i] && s[i] != c)
            {
                len_arr[k]++;
                i++;
            }
            k++;
        }
    }
    *len = k;
}

char    **ft_split(char const *s, char c)
{
    if (!s)
        return (NULL);

    size_t  s_len = ft_strlen(s);

    size_t len = 0;
    size_t *start_arr = ft_calloc(s_len, sizeof(size_t));
    size_t *len_arr = ft_calloc(s_len, sizeof(size_t));
    if (!start_arr || !len_arr)
    {
        clean(start_arr, len_arr, NULL);
        return (NULL);
    }
    build_split_maps(s, c, start_arr, len_arr, &len);

    char **split = ft_calloc(len + 1, sizeof(char *));
    if (!split)
    {
        clean(start_arr, len_arr, NULL);
        return (NULL);
    }

    for (size_t i = 0; i < len; i++)
    {
        split[i] = ft_substr(s, start_arr[i], len_arr[i]);
        if (!split[i])
        {
            clean(start_arr, len_arr, split);
            return (NULL);
        }
    }

    clean(start_arr, len_arr, NULL);
    return (split);
}