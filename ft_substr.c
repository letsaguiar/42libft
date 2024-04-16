/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:06:22 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/16 19:44:17 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char            *ft_substr(const char *str, unsigned int start, unsigned int len)
{
    char            *ptr;
    
    if (!str)
        return (0);
    if (start >= ft_strlen(str))
        return (ft_strdup(""));
    if (len > ft_strlen(str + start))
        len = ft_strlen(str + start);
    ptr = (char *) malloc((len + 1) * sizeof (char));
    if (!ptr)
        return (0);
    ft_strlcpy(ptr, str + start, len + 1);
    return (ptr);
}