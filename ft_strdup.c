/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:31:52 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/16 15:54:30 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *src)
{
    unsigned int    length;
    char            *dest;

    length = ft_strlen(src);
    dest = (char *) ft_calloc(length + 1, sizeof (char));
    if (!dest)
        return (0);
    ft_strlcpy(dest, src, length + 1);
    return (dest);
}
