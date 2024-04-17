/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:38:39 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/17 10:59:34 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char            *ft_strjoin(const char *s1, const char *s2)
{
    char    *ptr;
    size_t  len;

    if (!s1)
        return (ft_strdup(s2));
    if (!s2)
        return (ft_strdup(s1));
    len = ft_strlen(s1) + ft_strlen(s2) + 1;
    printf("%li\n", len);
    ptr = (char *) malloc(len * sizeof (char));
    if (!ptr)
        return (NULL);
    ft_strlcpy(ptr, s1, len);
    ft_strlcat(ptr, s2, len);
    return (ptr);
}
