/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:40:29 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/16 11:55:40by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;
    
    i = 0;
    j = 0;
    if (needle[0] == 0)
        return ((char *) haystack);
    while (i < len && haystack[i] && needle[j])
    {
        while (haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
        {
            j++;
            if (needle[j] == 0)
                return ((char *) haystack + i);
        }
        i++;
        j = 0;
    }
    return (0);
}