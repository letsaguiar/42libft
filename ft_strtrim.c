/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:26:25 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/18 14:22:54by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int hash_function(char key)
{
    return (key + 128);
}

static char *build_map()
{
    char    *map;
     
    map = (char *) malloc(255 * sizeof (char));
    ft_bzero(map, 255);
    return (map);
}

static void populate_map(char *map, const char *set)
{
    while (*set)
    {
        map[hash_function(*set)] = 1;
        set++;
    }
}

static unsigned int search_map(char *map, char key)
{
    return (map[hash_function(key)]);
}

char    *ft_strtrim(const char *s1, const char *set)
{
    char    *map;
    char    *ptr;
    int     start;
    int     end;
    int     len;

    start = 0;
    end = ft_strlen(s1) - 1;
    if (end < 0)
        return (ft_strdup(""));
    map = build_map();
    populate_map(map, set);
    while (search_map(map, s1[start]))
        start++;
    while (search_map(map, s1[end]))
        end--;
    free(map);
    len = end - start + 2;
    if (len <= 0 && start > end)
        return (ft_strdup(""));
    ptr = (char *) malloc(len * sizeof (char));
    if (!ptr)
        return (NULL);
    ft_strlcpy(ptr, s1 + start, len);
    return (ptr);
}