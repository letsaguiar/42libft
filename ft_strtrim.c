/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:37:25 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/22 13:46:57 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// aaHello Worldbb 2 13
char    *ft_strtrim(const char *s, const char *set)
{
    size_t  start;
    size_t  end;
    char    *ptr;

    if (!s)
        return (ft_strdup(""));
    if (!set)
        return (ft_strdup(s));
    start = 0;
    while (s[start] && ft_strchr(set, s[start]))
        start++;
    end = ft_strlen(s);
    while (s[end - 1] && ft_strchr(set, s[end - 1]))
        end--;
    if (start >= end)
        return (ft_strdup(""));
    ptr = (char *) malloc((end - start + 1) * sizeof (char));
    if (!ptr)
        return (NULL);
    ft_strlcpy(ptr, s + start, (end - start + 1));
    return (ptr);
}
