/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: letsaguiar <letsaguiar@yandex.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:02:20 by letsaguiar        #+#    #+#             */
/*   Updated: 2024/04/17 10:17:48 by letsaguiar       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dest, const char *src, size_t n)
{
    size_t  src_len;

    src_len = ft_strlen(src);
    if (src_len + 1 < n)
        ft_memcpy(dest, src, src_len + 1);
    else if (n > 0)
    {
        ft_memcpy(dest, src, n - 1);
        dest[n - 1] = 0;
    }
    return (src_len);
}